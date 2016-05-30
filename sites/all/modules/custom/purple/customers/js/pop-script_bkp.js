//Initializing Variables

//Document Ready Function
jQuery(document).ready( function() {
jQuery('.real_custLogo > li > div').each( function() {
	jQuery(this).children('img').after('<img src="'+ baseUrl +'/images/info_arrow.png" alt="View Details"  title="View Details" class="viewDetailArrow" />')
});
});
//After Page Load Fn
jQuery(window).load( function() {
  //jQuery('.real_hmTabContent').css({ 'height':jQuery('.real_hmTabContent > div.real_hmidrgt:first').height() });
});

//Custom Functions
var logoDetailStatus = 'closed';
jQuery('.real_custLogo > li > div').live( 'mouseenter', function() {
	if ( logoDetailStatus == 'closed' ) {
		jQuery(this).stop().animate({ 'opacity':1 }, 500);
		jQuery(this).children('img.viewDetailArrow').stop('true', 'true').fadeIn(500);
	}
});
jQuery('.real_custLogo > li > div').live( 'mouseleave', function() {
	if ( logoDetailStatus == 'closed' ) {
		//jQuery(this).stop().animate({ 'opacity':0.5 }, 500);
		jQuery(this).children('img.viewDetailArrow').stop('true', 'true').fadeOut(500);
	}
});
jQuery('.real_custLogo > li > div').live( 'click', function() {
	if ( logoDetailStatus == 'closed' ) {
		logoDetailStatus = 'working';
		jQuery(this).addClass('activeLogo');
		jQuery('.logoSliderDiv').html( jQuery(this).html() ).css({ 'left':jQuery(this).offset().left + 'px', 'top':jQuery(this).offset().top + 'px' }).show();
		jQuery('.logoSliderDiv > img.viewDetailArrow').remove();
		jQuery('.logoSliderDiv > img').css({ 'float':"left" });
		if ( jQuery(this).offset().left  >= jQuery(document).width() / 2 ) {
			jQuery('.logoSliderDiv').animate({ 'left':jQuery('.logoSliderDiv').offset().left - 50 + 'px' }, 500);
			jQuery('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'56px 25px' }, 500, function() {
				jQuery('.logoSliderDiv').animate({ 'left':jQuery('.logoSliderDiv').offset().left - 330 + 'px' }, 500);
				jQuery('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'310px' }, 500, function() {
					jQuery('.logoSliderDiv').prepend('<img src="'+ baseUrl +'/images/close.png" alt="Close"  title="Close" class="closeBtn" />');
					logoDetailStatus = 'opened';
				});
				jQuery('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'0px' }, 500);
			});
		} else {
			jQuery('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'56px 25px' }, 500, function() {
				jQuery('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'310px' }, 500, function() {
					jQuery('.logoSliderDiv').prepend('<img src="'+ baseUrl +'/images/close.png" alt="Close"  title="Close" class="closeBtn" />');
					logoDetailStatus = 'opened';
				});
				jQuery('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'0px' }, 500);
			});
		}
	}
});
jQuery('.closeBtn').live( 'click', function() {
	if ( logoDetailStatus == 'opened' ) {
		jQuery(this).hide();
		if ( jQuery('.activeLogo').offset().left  >= jQuery(document).width() / 2 ) {
			jQuery('.logoSliderDiv').animate({ 'left':( jQuery('.logoSliderDiv').offset().left + 330 ) + 'px' }, 500);
			jQuery('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'-310px' }, 500);
			jQuery('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'0px' }, 500, function() {
				jQuery(this).hide();
				jQuery('.logoSliderDiv').animate({ 'left':( jQuery('.logoSliderDiv').offset().left + 50 ) + 'px' }, 500);
				jQuery('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'0px' }, 500, function() {

					jQuery('.logoSliderDiv').hide().html('');
					//jQuery('.real_custLogo > li > div').css({ 'opacity':0.5 });
					jQuery('.real_custLogo > li > div > img.viewDetailArrow').stop('true', 'true').fadeOut(500);
					logoDetailStatus = 'closed';
				});
			});
		} else {
			jQuery('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'-310px' }, 500);
			jQuery('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'0px' }, 500, function() {
				jQuery(this).hide();
				jQuery('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'0px' }, 500, function() {
					jQuery('.logoSliderDiv').hide().html('');
					//jQuery('.real_custLogo > li > div').css({ 'opacity':0.5 });
					jQuery('.real_custLogo > li > div > img.viewDetailArrow').stop('true', 'true').fadeOut(500);
					logoDetailStatus = 'closed';
				});
			});
		}
		jQuery('.activeLogo').removeClass('activeLogo');
	}
});
