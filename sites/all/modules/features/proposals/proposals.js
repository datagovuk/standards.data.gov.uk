(function ($) {
  $(document).ready(function(){

    // amend style to fit popup window if javascript enabled - default made to look good without javascript
    $('#form-challenge').hide();
    $('#form-proposal').after('<a id="show-challenge" href="#form-challenge">View challenge</a>');

    $('#show-challenge').click(function(){
      $('#form-proposal').hide()
      $('#show-challenge').hide();
      $('#edit-proposal-popup').hide();
      $('.form-item-title').hide();
      $('#edit-field-short-description').hide();
      $('#edit-field-user-need-approach').hide();
      $('#edit-field-achieving-benefits').hide();
      $('#edit-field-functional-needs').hide();
      $('#edit-field-achieving-interoperability').hide();
      $('#edit-field-standard-version-ref').hide();
      $('#edit-field-standards-to-be-used').hide();
      $('#edit-field-tags').hide();
      $('#edit-field-proposal-status').hide();
      $('#edit-actions').hide()
      $('#form-challenge').show();
      $('.respond-to-challenge').hide();
    });
    $('.back-to-response').click(function(){
      $('#form-proposal').show()
      $('#show-challenge').show();
      $('.form-item-title').show();
      $('#edit-field-short-description').show();
      $('#edit-field-user-need-approach').show();
      $('#edit-field-achieving-benefits').show();
      $('#edit-field-functional-needs').show();
      $('#edit-field-achieving-interoperability').show();
      $('#edit-field-standard-version-ref').show();
      $('#edit-field-standards-to-be-used').show();
      $('#edit-field-tags').show();
      $('#edit-field-proposal-status').show();
      $('#edit-actions').show()
      $('#form-challenge').hide();
      $('.respond-to-challenge').show();
    });
  });
})(jQuery);


