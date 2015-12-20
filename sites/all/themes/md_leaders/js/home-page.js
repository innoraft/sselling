/**
 * Attach the Javascript for home page of the site.
 */
(function ($) {
	Drupal.behaviors.home_page = {
		attach: function (context, settings) {

		  $(document).ready(function() {
			  // Make desktop banner image hyperlink.
			  $('#md-slider-1-block').click(function() {
			  	window.location = 'http://bit.ly/YouAreTheKeyBanner';
			  });

			  // Make mobile banner image hyperlink.
			  $('.block-inno-mobile-slider #slider1_container img').wrap($("<a/>").attr("href", "http://bit.ly/YouAreTheKeyBanner"));
		  });

		  // Add more sub menu.
		  $(document).ready(function() {
			  if ($(window).width() > 991) {
			  	var manu = '<li id="more-submenu"><a id="more-link">More</a><ul id="more-list"><li><a href="/social-selling-blogs">Social Selling Blogs</a></li><li><a href="/social-selling-case-studies">Social Selling Case Studies</a></li></ul></li>';
			  	$("#mainmenu > li:nth-last-child(3)").after(manu);
			  	$("#mainmenu > li:nth-last-child(1)").hide();
			  	$("#mainmenu > li:nth-last-child(2)").hide();
			  } else {
			  	var manu = '<li id="more-submenu"><a id="more-link">More</a><ul id="more-list"><li><a href="/social-selling-blogs">Social Selling Blogs</a></li><li><a href="/social-selling-case-studies">Social Selling Case Studies</a></li></ul></li>';
			  	$("#mainmenu > li:nth-last-child(3)").after(manu);
			  	$("#mainmenu #more-submenu").hide();
			  }
		  });

		  $(window).load(function() {
		  	$(window).resize(function() {
		  		  if ($(window).width() > 991) {
		  		  	$("#mainmenu #more-submenu").show();
		  		  	$("#mainmenu > li:nth-last-child(1)").hide();
		  		  	$("#mainmenu > li:nth-last-child(2)").hide();
		  		  } else {
		  		  	$("#mainmenu #more-submenu").hide();
		  		  	$("#mainmenu > li:nth-last-child(1)").show();
		  		  	$("#mainmenu > li:nth-last-child(2)").show();
		  		  }
		  	});
		  });

	    }
	}
})(jQuery);
