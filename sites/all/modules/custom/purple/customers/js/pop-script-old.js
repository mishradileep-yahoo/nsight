//Initializing Variables

//Document Ready Function
jQuery_183(document).ready( function() {

jQuery_183('.real_custLogo > li').each( function() {
	jQuery_183(this).find('img').after('<img src="'+baseUrl +'/images/info_arrow.png" alt="View Details"  title="View Details" class="viewDetailArrow" />');
});

//After Page Load Fn
jQuery_183(window).load( function() {
  //jQuery_183('.real_hmTabContent').css({ 'height':jQuery_183('.real_hmTabContent > div.real_hmidrgt:first').height() });
});

//Custom Functions
var logoDetailStatus = 'closed';
jQuery_183('.real_custLogo > li').on( 'mouseenter', function() {

	if ( logoDetailStatus == 'closed' ) {
		jQuery_183(this).stop().animate({ 'opacity':1 }, 500);
		jQuery_183(this).children('img.viewDetailArrow').stop('true', 'true').fadeIn(500);
	}
});
jQuery_183('.real_custLogo > li ').on( 'mouseleave', function() {
	if ( logoDetailStatus == 'closed' ) {
		//jQuery_183(this).stop().animate({ 'opacity':0.5 }, 500);
		jQuery_183(this).children('img.viewDetailArrow').stop('true', 'true').fadeOut(500);
	}
});
jQuery_183('.real_custLogo > li').on( 'click', function() {
	if ( logoDetailStatus == 'closed' ) {
		logoDetailStatus = 'working';
		jQuery_183(this).addClass('activeLogo');
		
		jQuery_183('.logoSliderDiv').html( jQuery_183(this).html() ).css({ 'left':jQuery_183(this).offset().left + 'px', 'top':jQuery_183(this).offset().top + 'px' }).show();
		jQuery_183('.logoSliderDiv > img.viewDetailArrow').remove();
		jQuery_183('.logoSliderDiv > img').css({ 'float':"left" });
		if ( jQuery_183(this).offset().left  >= jQuery_183(document).width() / 2 ) {
		//console.log(jQuery_183(document).width());
			jQuery_183('.logoSliderDiv').animate({ 'left':jQuery_183('.logoSliderDiv').offset().left - 50 + 'px' }, 500);
			jQuery_183('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'56px 25px' }, 500, function() {
				jQuery_183('.logoSliderDiv').animate({ 'left':jQuery_183('.logoSliderDiv').offset().left - 330 + 'px' }, 500);
				jQuery_183('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'310px' }, 500, function() {
					jQuery_183('.logoSliderDiv').prepend('<img src="'+baseUrl +'/images/close.png" alt="Close"  title="Close" class="closeBtn" />');
					logoDetailStatus = 'opened';
				});
				jQuery_183('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'0px' }, 500);
			});
		} else {
			jQuery_183('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'56px 25px' }, 500, function() {
				jQuery_183('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'310px' }, 500, function() {
					jQuery_183('.logoSliderDiv').prepend('<img src="'+baseUrl +'/images/close.png" alt="Close"  title="Close" class="closeBtn" />');
					logoDetailStatus = 'opened';
				});
				jQuery_183('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'0px' }, 500);
			});
		}
	}
});
jQuery_183('body').on( 'click', ".closeBtn", function() {
	if ( logoDetailStatus == 'opened' ) {
		jQuery_183(this).hide();
		if ( jQuery_183('.activeLogo').offset().left  >= jQuery_183(document).width() / 2 ) {
			jQuery_183('.logoSliderDiv').animate({ 'left':( jQuery_183('.logoSliderDiv').offset().left + 330 ) + 'px' }, 500);
			jQuery_183('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'-310px' }, 500);
			jQuery_183('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'0px' }, 500, function() {
				jQuery_183(this).hide();
				jQuery_183('.logoSliderDiv').animate({ 'left':( jQuery_183('.logoSliderDiv').offset().left + 50 ) + 'px' }, 500);
				jQuery_183('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'0px' }, 500, function() {

					jQuery_183('.logoSliderDiv').hide().html('');
					//jQuery_183('.real_custLogo > li > div').css({ 'opacity':0.5 });
					jQuery_183('.real_custLogo > li > div > img.viewDetailArrow').stop('true', 'true').fadeOut(500);
					logoDetailStatus = 'closed';
				});
			});
		} else {
			jQuery_183('.logoSliderDiv > div.clnt_ttl > p').stop().animate({ 'left':'-310px' }, 500);
			jQuery_183('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'0px' }, 500, function() {
				jQuery_183(this).hide();
				jQuery_183('.logoSliderDiv > img').animate({ 'opacity':1, 'padding':'0px' }, 500, function() {
					jQuery_183('.logoSliderDiv').hide().html('');
					//jQuery_183('.real_custLogo > li > div').css({ 'opacity':0.5 });
					jQuery_183('.real_custLogo > li > div > img.viewDetailArrow').stop('true', 'true').fadeOut(500);
					logoDetailStatus = 'closed';
				});
			});
		}
		jQuery_183('.activeLogo').removeClass('activeLogo');
	}
});

});