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

			var answer = $('#combination-lock-form input[name = lock_pattern]').val();

			if (answer.length < 2) {
				for (var i = answer.length - 1; i >= 0; i--) {
					answer = '0' + answer;
        }
			}

			var initial_counter = 0;
	    $('.lock-pattern-first-counter').counter({
	      val: initial_counter,
	      countTrigger: function ($counter) {
	        setInterval(function() {
						var lastNum = answer[answer.length - 2];
	          var n_counter = $counter.text().replace(/\D/g,"");
	        	if (lastNum >= 0 && n_counter != lastNum) {
              $.counter.plusOne($counter);
            }
	        }, 500);
	      }
	    });

	    $('.lock-pattern-second-counter').counter({
	      val: initial_counter,
	      countTrigger: function ($counter) {
	        setInterval(function() {
						var lastNum = answer[answer.length - 1];
	          var n_counter = $counter.text().replace(/\D/g,"");
        		console.log("====");
        		console.log(lastNum);
        		console.log(n_counter);
        		console.log("====");
	        	if (lastNum >= 0 && n_counter != lastNum) {
              $.counter.plusOne($counter);
            }
	        }, 500);
	      }
	    });

		}
	}
})(jQuery)
