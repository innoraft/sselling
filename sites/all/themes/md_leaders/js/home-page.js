/**
 * Attach the Javascript for home page of the site.
 */
(function ($) {
	Drupal.behaviors.home_page = {
		attach: function (context, settings) {

		  // Make desktop banner image hyperlink.
		  $('#md-slider-1-block').click(function() {
		  	window.location = 'http://bit.ly/YouAreTheKeyBanner';
		  });

		  // Make mobile banner image hyperlink.
		  $('.block-inno-mobile-slider #slider1_container img').wrap($("<a/>").attr("href", "http://bit.ly/YouAreTheKeyBanner"));

	    }
	}
})(jQuery);
