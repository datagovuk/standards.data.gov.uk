(function ($) {
  $(document).ready(function () {

    $("#subscriptions-ui-node-form #edit-footer").remove();
    $("#subscriptions-ui-node-form .form-submit").remove();

    $("#subscriptions-ui-node-form input.form-checkbox").change(function() {
      $("#subscriptions-ui-node-form").submit();
    });

    $('.form-item .description').each(function () {
      var desc = $(this);
      var label = desc.siblings('label:first');
      var multTable;
      if (label.length && !desc.parents('.field-multiple-table').length) {
        desc.insertAfter(label);
      } else if ((multTable = desc.siblings('.field-multiple-table')) && multTable.length) {
        desc.insertAfter(multTable.find('label:first'));
      }
    });
    $('.text-format-wrapper .description').each(function () {
      var desc = $(this);
      var label = desc.siblings('.form-item').find('label:first');
      if (label.length) {
        desc.insertAfter(label);
      }
    });
  });
})(jQuery);

