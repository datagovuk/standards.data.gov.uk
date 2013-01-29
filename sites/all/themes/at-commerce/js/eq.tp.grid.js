(function ($) {
  Drupal.behaviors.ContentDisplayTaxoPageGrid = {
    attach: function(context) {
      $("body.page-taxonomy #block-system-main").addClass("page-taxonomy-grid content-display-grid");
      $("body.page-taxonomy #block-system-main .article-inner").equalHeight();
    }
  }
})(jQuery);