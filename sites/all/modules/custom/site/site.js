(function ($) {
  $(document).ready(function(){
    //alert('dupa')

    // amend style to fit popup window if javascript enabled - default made to look good without javascript
    $('#form-challenge').hide();
    $('div.proposal-popup').hide();




  $('.form-item .description').each(function () {
      var desc = $(this);
      var label = desc.siblings('label:first');
      var multTable, textArea;
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


