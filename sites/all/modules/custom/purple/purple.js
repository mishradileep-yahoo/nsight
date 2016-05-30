(function ($) {

 $(document).ready(function() {
 
   //$(".purple-carousel .jc-txt").hide();
   // captcha
   //$('.form-item-captcha-response').attr('placeholder', 'Verification Code*');
   //$('.captcha').find('.description').hide();
    
 });  
  
  Drupal.behaviors.purple = {
  
  attach: function (context) {
    // captcha
    //$('#modal-content #edit-cancel').hide();
    $('.captcha').find('.description').hide();
    $('.form-item-captcha-response input').attr('placeholder', 'Verification Code*');
    
			$( ".view-case-studies .views-row" ).mouseover(function() {
		$(this).find(".views-field-nothing").css("display", "block");
		});
		
	  $(".view-case-studies .views-row" ).mouseout(function() {
			$(".view-case-studies .views-field-nothing").css("display", "none");
		});
		
   /* $(".accordian_content").hide();
      $(".accordian_title").click(function(e) {
        e.preventDefault();
        $(".accordian_content").slideUp();
        $(this).parent().find(".accordian_content").slideToggle('slow');
        
      });*/
      
    /*$(".purple-carousel .jc-img").hover(function() {
      $(this).find('.jc-txt').fadeToggle();
    }); */
    // $(".purple-carousel .jc-img").mouseenter(function() {
    //  $(this).find('.jc-txt').fadeIn();
    //});
    //$(".purple-carousel .jc-img").mouseleave(function() {
    //  $(this).find('.jc-txt').fadeOut();
    //});
    //
    }

  };

})(jQuery);
