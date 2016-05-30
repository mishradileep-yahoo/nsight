//Initializing Variables

//Document Ready Function
jQuery_183(document).ready( function() {

jQuery_183('.real_custLogo > li').each( function() {
	jQuery_183(this).find('.imgarr').after('<img src="'+baseUrl +'/images/info_arrow.png" alt="View Details"  title="View Details" class="viewDetailArrow" />');
});

//After Page Load Fn
jQuery_183(window).load( function() {
  //jQuery_183('.real_hmTabContent').css({ 'height':jQuery_183('.real_hmTabContent > div.real_hmidrgt:first').height() });
});

//Custom Functions
var logoDetailStatus = 'closed';
jQuery_183('img.viewDetailArrow').hide();
jQuery_183('.real_custLogo > li').on( 'mouseenter', function() {

	if ( logoDetailStatus == 'closed' ) {
		jQuery_183(this).stop().animate({ 'opacity':1 }, 500);
		jQuery_183(this).find('img.viewDetailArrow').stop('true', 'true').fadeIn(500);
	}
});
jQuery_183('.real_custLogo > li ').on( 'mouseleave', function() {
	if ( logoDetailStatus == 'closed' ) {
		//jQuery_183(this).stop().animate({ 'opacity':0.5 }, 500);
		jQuery_183(this).find('img.viewDetailArrow').stop('true', 'true').fadeOut(500);
	}
});
jQuery_183('.real_custLogo > li').on( 'click', function() {
	if ( logoDetailStatus == 'closed' ) {
		logoDetailStatus = 'working';
		var logoSliderDiv = jQuery_183(this).parents("ul").next(".logoSliderDiv");
		jQuery_183(this).addClass('activeLogo');
		logoSliderDiv.html( jQuery_183(this).html() ).css({ 'left':jQuery_183(this).offset().left + 'px', 'top':jQuery_183(this).offset().top + 'px' }).show();
		console.log( logoSliderDiv.offset().left );

		logoSliderDiv.find('img.viewDetailArrow').remove();
		logoSliderDiv.find('.imgarr').css({ 'float':"left" });
		if ( jQuery_183(this).offset().left  >= jQuery_183(document).width() / 2 ) {
			logoSliderDiv.animate({ 'left':logoSliderDiv.offset().left - 50 + 'px' }, 500);
			logoSliderDiv.find('.imgarr').animate({ 'opacity':1, 'margin':'56px 25px' }, 500, function() {
				logoSliderDiv.animate({ 'left':logoSliderDiv.offset().left - 330 + 'px' }, 500);
				logoSliderDiv.find('div.clnt_ttl').show(0).stop().animate({ 'width':'420px' }, 500, function() {
					logoSliderDiv.prepend('<img src="'+baseUrl +'/images/close.png" alt="Close"  title="Close" class="closeBtn" />');
					logoDetailStatus = 'opened';
					logoSliderDiv.find('div.clnt_ttl > p').stop().animate({ 'left':'0px' }, 500);
				});

			});
		} else {
			jQuery_183('.logoSliderDiv  .imgarr').animate({ 'opacity':1, 'margin':'56px 25px' }, 500, function() {
				jQuery_183('.logoSliderDiv > div.clnt_ttl').show().stop().animate({ 'width':'420px' }, 500, function() {
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
		var activeLogo = jQuery_183(this).parents(".logoSliderDiv").prev("ul").find('.activeLogo');

		if ( activeLogo.offset().left  >= jQuery_183(document).width() / 2 ) {
			jQuery_183('.logoSliderDiv:visible').animate({ 'left':( jQuery_183('.logoSliderDiv:visible').offset().left + 330 ) + 'px' }, 500);
			jQuery_183('.logoSliderDiv:visible > div.clnt_ttl > p').stop().animate({ 'left':'-420px' }, 500);
			jQuery_183('.logoSliderDiv:visible > div.clnt_ttl').show().stop().animate({ 'width':'0px' }, 500, function() {
				jQuery_183(this).hide();
				jQuery_183('.logoSliderDiv:visible').animate({ 'left':( jQuery_183('.logoSliderDiv:visible').offset().left + 50 ) + 'px' }, 500);
				jQuery_183('.logoSliderDiv:visible .imgarr').animate({ 'opacity':1, 'margin':'0px' }, 500, function() {

					jQuery_183('.logoSliderDiv:visible').hide().html('');
					//jQuery_183('.real_custLogo > li > div').css({ 'opacity':0.5 });
					jQuery_183('.real_custLogo > li > div > img.viewDetailArrow').stop('true', 'true').fadeOut(500);
					logoDetailStatus = 'closed';
				});
			});
		} else {
			jQuery_183('.logoSliderDiv:visible > div.clnt_ttl > p').stop().animate({ 'left':'-420px' }, 500);
			jQuery_183('.logoSliderDiv:visible > div.clnt_ttl').show().stop().animate({ 'width':'0px' }, 500, function() {
				jQuery_183(this).hide();
				jQuery_183('.logoSliderDiv:visible  .imgarr').animate({ 'opacity':1, 'margin':'0px' }, 500, function() {
					jQuery_183('.logoSliderDiv:visible').hide().html('');
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
