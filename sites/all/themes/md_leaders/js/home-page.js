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

			  // Make more link unclickable.
			  $("#mainmenu li a:contains('More')").removeAttr('href');

			  $("#mainmenu li a:contains('More')").css({
			  	'color' : '#ffffff',
			  	'cursor' : 'default',
			  	'background-color' : '#006BB6'
			  });

			  // Align drop down of more link.
			  $('#mainmenu .dropdown-menu').css({
			  	'padding' : '8px',
			  	'left' : 'auto',
			  	'right' : '-12%'
			  });

			  // Attach drop down arrow to more link. 
			  $("#mainmenu li a:contains('More')").closest('li').css({
			  	'padding-right' : '8px',
			  	'background' : "url('/sites/all/themes/md_leaders/img/drop-down.png') no-repeat 59px 24px / 21px auto"
			  });
		  });

	    }
	}
})(jQuery);
