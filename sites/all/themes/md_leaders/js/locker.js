/**
 * Attach the Javascript for combination-lock page of the site.
 */
(function ($) {
	Drupal.behaviors.combination_lock = {
		attach: function (context, settings) {

			$(".locker-upper").click(function(){
				$(this).animate({top: "3px"}, 200, 'swing');
			});

			$(".locker-lower").click(function(){
				$(".locker-upper").animate({top: "45px"}, 200, 'swing').animate({top: "50px"}, 200, 'swing');
				$(".locker-upper").animate({top: "45px"}, 200, 'swing').animate({top: "50px"}, 200, 'swing');
			});
		}
	}
})(jQuery)