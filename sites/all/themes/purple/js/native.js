// JavaScript Document

(function ($) {
    $(".nsight-advantage").fadeIn(1000);
}(jQuery));


// Scroll Animation
function init() {
    window.addEventListener('scroll', function(e){
        var distanceY = window.pageYOffset || document.documentElement.scrollTop,
            shrinkOn = 300,
            header = document.querySelector("nav");
        if (distanceY > shrinkOn) {
            classie.add(header,"smaller");
			jQuery('.mini-logo').addClass("imgactive");
			jQuery('.navbar-brand').addClass("navactive");
			jQuery('.social-icons-header').addClass("socialactive");
			jQuery('.navbar-default .navbar-nav > li > a').css('padding-bottom','10px');
			jQuery('#mobile-menu').css("margin-top","60px");
        } else {
            if (classie.has(header,"smaller")) {
                classie.remove(header,"smaller");
				jQuery('.mini-logo').removeClass("imgactive");
				jQuery('.navbar-brand').removeClass("navactive");
				jQuery('.social-icons-header').removeClass("socialactive");
			jQuery('.navbar-default .navbar-nav > li > a').css('padding-bottom','30px');
			jQuery('#mobile-menu').css("margin-top","66px");
            }
        }
    });
}
window.onload = init();