// JavaScript Document

jQuery(document).ready(function(){
	 
	//jQuery(".captcha").append("<div class='clearfix'></div>");
	jQuery(".webform-submit").click(function(){
	 
	});
	var height = jQuery('nav.navbar.navbar-default.navbar-fixed-top').height();
		height = height + 16;
		jQuery(".fixed-top").css('margin-top',height);
	jQuery(window).resize(function(){
		var height = jQuery('nav.navbar.navbar-default.navbar-fixed-top').height();
		height = height + 16;
		jQuery(".fixed-top").css('margin-top',height);
	});	

///* Mobile Menu*/
//	jQuery('#mobile-menu ul li.expanded span').append('<i class="fa fa-caret-down"></i>');	
//	
//	jQuery('#mobile-menu').hide();
//	jQuery('#mobile-menu ul li ul').hide();
//	
//	jQuery('#mobile-menu ul li.expanded').bind("click", function(e) {
//	jQuery(this).toggleClass('active');
//	jQuery("#mobile-menu ul li.expanded").unbind("click");
//	jQuery('#mobile-menu ul li.expanded ul').hide();
//	jQuery(this).find('ul ul').show();
//	jQuery(this).find('ul.menu').not(jQuery('#mobile-menu ul li.expanded ul ul')).show(); //show();
//	});
//
//	if(jQuery('#mobile-menu ul li').hasClass('active-trail')) {
//	jQuery(this).find('ul.menu').show();
//	}
//
//	jQuery('.mb-menu').unbind().bind("click", function(){		
//  	jQuery('#mobile-menu').slideToggle(500);
//	  jQuery('#mobile-menu ul li ul.menu').not(jQuery('#mobile-menu ul li.active-trail ul')).hide();	
//	});	
//
//
///* Mobile Menu*/

	jQuery('#mobile-menu').hide();
  jQuery('#mobile-menu ul li ul').hide();
  jQuery('#mobile-menu ul li.expanded').bind("click", function(e) {
		jQuery(this).toggleClass('active');
		//jQuery('#mobile-menu ul li ul.menu').not(jQuery(this).children('ul.menu')).not(jQuery(this).children('li.expanded ul.menu')).slideUp(600);
		//jQuery('ul li.expanded').hide(600);
		
		//jQuery('#mobile-menu ul li.expanded ul').not(jQuery('#mobile-menu ul li.expanded ul ul')).hide(300);		
		jQuery("mobile-menu ul li.expanded").unbind("click");
		jQuery('#mobile-menu ul li.expanded ul').hide();
		jQuery(this).find('ul ul').show();
		jQuery(this).find('ul.menu').not(jQuery('#mobile-menu ul li.expanded ul ul')).show(); //show();
		//jQuery(this).find('ul.menu li.expanded ul').hide(); //.closest('ul')		
		//jQuery('#mobile-menu ul li.expanded ul').not(jQuery(this).parent().parent().find('ul')).hide(600);
		//jQuery('#mobile-menu ul li.expanded ul').not(jQuery(this).parent().parent().parent().find('ul')).hide(600);	
  });
	
	if(jQuery('#mobile-menu ul li').hasClass('active-trail')) {
		jQuery(this).find('ul.menu').show();
	}
	
	jQuery('.mb-menu').unbind().bind("click", function(){		
	  jQuery('#mobile-menu').slideToggle(500);
		jQuery('#mobile-menu ul li ul.menu').not(jQuery('#mobile-menu ul li.active-trail ul')).hide();
	});	
	//jQuery('#mobile-menu ul li.expanded span').after('<i class="fa fa-caret-down"></i>');	
	/*Responsive menu E*/
	
	
	
	/*jQuery( ".view-case-studies .views-row" ).mouseover(function() {
		jQuery(this).find(".views-field-nothing").css("display", "block");
		});
		
	jQuery( ".view-case-studies .views-row" ).mouseout(function() {
			jQuery(".view-case-studies .views-field-nothing").css("display", "none");
		});*/
		
	
}); 

 
