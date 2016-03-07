/**
 * Attach the Javascript for combination-lock page of the site.
 */
(function ($) {
	Drupal.behaviors.combination_lock = {
		attach: function (context, settings) {
			var answer = $('#combination-lock-form .combination-lock-answer').text();
			if (answer == 'TRUE') {
				$(".locker-upper").animate({top: "3px"}, 200, 'swing');
			}
			else if (answer == 'FALSE') {
				$(".locker-upper").animate({top: "45px"}, 200, 'swing').animate({top: "50px"}, 200, 'swing');
				$(".locker-upper").animate({top: "45px"}, 200, 'swing').animate({top: "50px"}, 200, 'swing');
			}
		}
	}
})(jQuery)