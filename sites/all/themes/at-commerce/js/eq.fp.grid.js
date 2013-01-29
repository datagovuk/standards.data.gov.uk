(function ($) {
  Drupal.behaviors.ContentDisplayFrontPageGrid = {
    attach: function(context) {
      $("body.front #block-system-main").addClass("front-page-grid content-display-grid");
      $("body.front #block-system-main .article-inner").equalHeight();
    }
  }
})(jQuery);