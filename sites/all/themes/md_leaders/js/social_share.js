(function ($) {
  $(document).ready(function() {
    $('a.at-svc-linkedin').live('mouseenter', function() {
      addthis_share.title = "Order Bloomsbury's #SocialSelling book #YouAreTheKey by Apurva Chamaria & Gaurav Kakkar  at http://www.amazon.in/You-are-Key-Unlocking-Through/dp/9385436600/";
      addthis_share.description = ".";
    });
    $('a.at-svc-twitter').live('mouseenter', function() {
      addthis_share.title = "Order Bloomsbury's #SocialSelling book #YouAreTheKey by @a1purva @gauravkakkar82 Order now at http://www.amazon.in/You-are-Key-Unlocking-Through/dp/9385436600/﻿";
      addthis_share.url = "' '";
    });
    $('a.at-svc-twitter').live('mouseleave', function() {
      addthis_share.url = "";
    });
    $('a.at-svc-google_plusone_share').live('mouseenter', function() {
      addthis_share.title = "Order  Bloomsbury's #SocialSelling book #YouAreTheKey by +Apurva Chamaria +Gaurav Kakkar at http://www.amazon.in/You-are-Key-Unlocking-Through/dp/9385436600/﻿";
    });
  });
})(jQuery);
