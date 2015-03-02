(function($) {

    $submit = function() {
        $form = $(this).parents("form").submit();
    }

    Drupal.behaviors.searchSortOrder = {
        attach: function (context, settings) {
            $("#edit-sort-by").change($submit);
            $("#edit-sort-order").change($submit);
            //code ends
        }
    };
})(jQuery);