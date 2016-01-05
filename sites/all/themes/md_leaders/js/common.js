/**
 * Attach the Javascript for home page of the site.
 */
(function ($) {
	Drupal.behaviors.home_page = {
		attach: function (context, settings) {

			$(document).ready(function() {
			  // Make desktop banner image hyperlink.
			  $('#md-slider-1-block').click(function() {
			  	window.open(
			  	  'http://bit.ly/bannerOrder',
			  	  '_blank'
			  	);
			  });

			  // Make mobile banner image hyperlink.
			  $('.block-inno-mobile-slider #slider1_container img').wrap($("<a/>").attr({
			  	"href" : "http://bit.ly/bannerOrder",
			  	"target" : "_blank"
			  }));
			});

			// Add more sub menu.
			$(document).ready(function() {
			  if ($(window).width() > 983) {
			  	var manu = '<li id="more-submenu"><a id="more-link">More</a><ul id="more-list"><li><a href="/you-are-the-key-books-official-partners">Official Partners</a></li><li><a href="/book-free-session">Book a Free Session</a></li><li><a href="/social-selling-case-studies">Social Selling Case Studies</a></li></ul></li>';
			  	$("#mainmenu > li:nth-last-child(4)").after(manu);
			  	$("#mainmenu > li:nth-last-child(1)").hide();
			  	$("#mainmenu > li:nth-last-child(2)").hide();
			  	$("#mainmenu > li:nth-last-child(3)").hide();
			  } else {
			  	var manu = '<li id="more-submenu"><a id="more-link">More</a><ul id="more-list"><li><a href="/you-are-the-key-books-official-partners">Official Partners</a></li><li><a href="/book-free-session">Book a Free Session</a></li><li><a href="/social-selling-case-studies">Social Selling Case Studies</a></li></ul></li>';
			  	$("#mainmenu > li:nth-last-child(4)").after(manu);
			  	$("#mainmenu #more-submenu").hide();
			  }
			});

			$(window).load(function() {
				$(window).resize(function() {
					  if ($(window).width() > 983) {
					  	$("#mainmenu #more-submenu").show();
					  	$("#mainmenu > li:nth-last-child(1)").hide();
					  	$("#mainmenu > li:nth-last-child(2)").hide();
					  	$("#mainmenu > li:nth-last-child(3)").hide();
					  } else {
					  	$("#mainmenu #more-submenu").hide();
					  	$("#mainmenu > li:nth-last-child(1)").show();
					  	$("#mainmenu > li:nth-last-child(2)").show();
					  	$("#mainmenu > li:nth-last-child(3)").show();
					  }
				});
			});

			//testimonial page, link whole div to content
			$('.view-testimonial-list .views-row').click(function(){
				href = $('.views-field-title a', this).attr('href');
				window.location.href = href;
			});

			// Sitemap.
			$(".page-type-page .tree").treemenu({delay:300}).openActive();

			// Apply height at blogs at blog page.
		  	$(document).ready(function(event) {
		  		var max = 0;
		  		$('.view-blog-list .views-field-body .field-content').each(function() {
		  			var h = $(this).height();
		  			max = h > max ? h : max;
		  		});

		  		$('.view-blog-list .views-field-body .field-content').each(function() {
		  			$(this).height(max);
		  		});
		  	});

		  	$(window).resize(function(event) {
		  		$('.view-blog-list .views-field-body .field-content').each(function() {
		  			$(this).css('height', 'auto');
		  		});

		  		var max = 0;
		  		$('.view-blog-list .views-field-body .field-content').each(function() {
		  			var h = $(this).height();
		  			max = h > max ? h : max;
		  		});

		  		$('.view-blog-list .views-field-body .field-content').each(function() {
		  			$(this).height(max);
		  		});
		  	});

	  		// Apply height at events at event page.
	  	  	$(document).ready(function(event) {
	  	  		var max = 0;
	  	  		$('.view-event-list .views-field-body .field-content').each(function() {
	  	  			var h = $(this).height();
	  	  			max = h > max ? h : max;
	  	  		});

	  	  		$('.view-event-list .views-field-body .field-content').each(function() {
	  	  			$(this).height(max);
	  	  		});
	  	  	});

	  	  	$(window).resize(function(event) {
	  	  		$('.view-event-list .views-field-body .field-content').each(function() {
	  	  			$(this).css('height', 'auto');
	  	  		});

	  	  		var max = 0;
	  	  		$('.view-event-list .views-field-body .field-content').each(function() {
	  	  			var h = $(this).height();
	  	  			max = h > max ? h : max;
	  	  		});

	  	  		$('.view-event-list .views-field-body .field-content').each(function() {
	  	  			$(this).height(max);
	  	  		});
	  	  	});

			// Hide testimonial icon if link empty.
			$('.testimonials-icons a').each(function() {
				if ($(this).attr('href') == '') {
					$(this).hide();
				}
			});

			// Click testimonial icons.
			$('.testimonials-icons a').click(function(event) {
				event.stopPropagation();
			});

			// Testimonial blocks layout.
			$(document).ready( function() {
			  $('.view-testimonial-list .view-content').isotope({
			    itemSelector: '.views-row',
			    percentPosition: true
			  });
			});

	    }
	}
})(jQuery);
