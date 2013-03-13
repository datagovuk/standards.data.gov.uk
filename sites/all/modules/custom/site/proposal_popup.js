(function ($) {
  $(document).ready(function(){

    // amend style to fit popup window if javascript enabled - default made to look good without javascript
    $('#form-challenge').hide();
    $('div.proposal-popup').hide();
    $('div.popup-page h3').css('text-align','center');
    $('div.popup-page').css('padding','0 10px');
    $('div.proposal-popup div.wrapper').css('height','450px');
    $('div.proposal-popup-tips ul').hide();
    $('div.proposal-popup-tips span').html('<a href="#">Tips...</a>');

    $('#fancybox-close').after('<div class="fancybox-blank" id="fancybox-left-blank"></div><div class="fancybox-blank" id="fancybox-right-blank"></div><div class="fancybox-blank" id="fancybox-close-blank"></div>');

    $('div.proposal-popup-tips span a').click(function(event){
      event.preventDefault();
    });

    $('div.proposal-popup-tips').click(function(event){
      event.preventDefault();

      if($(this).hasClass('tip-active')){
        $('div.proposal-popup-tips.tip-active ul').hide('fast');
        $(this).removeClass('tip-active');
      }
      else{
        $('div.proposal-popup-tips').removeClass('tip-active');
        $(this).addClass('tip-active');
        $('div.proposal-popup-tips:not(tip-active) ul').hide('fast');
        $('div.proposal-popup-tips.tip-active ul').show('fast');
      }
    });

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
    });

    $('.make-proposal').click(function(){

      $('#form-proposal').show()
      $('#show-challenge').show();
//disabled 'View tutorial'
//$('#edit-proposal-popup').show();
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
    });

    //create checbox which is set depending on user profiles settings 'Show proposal help window'
    var checked = '';
    if ($('#proposal_help_html').length){
      checked = 'checked="checked"';
    }
    var checkboxLabel = 'Popup this window every time you click "Make proposal" link';
    var checkboxHTML = '<div class="proposal-popup-checkbox"><input type="checkbox" ' + checked + ' id="proposal-popup-checkbox_id" class="form-checkbox">  <label class="option" for="proposal-popup-checkbox_id">' + checkboxLabel + '</label></div>';
    $("div.proposal-popup div.wrapper").append(checkboxHTML);
    //
    $('#proposal-popup-checkbox_id').click(
      function(){
        var checkboxValue = $(this).attr('checked') ? '1' : '0';
        $.ajax({
          url: '/ajax/popup/' + checkboxValue
        });
      }
    );


//    $.ajax({
//      url:"/ajax/popup/",
//      success:function(result){alert('success ' + result)},
//      error:function(){alert('error')}
//    });


    $('a.inline').fancybox({
      'showNavArrows': true,
      'width': 700,
      'height': 450,
      'autoDimensions': false,
      'cyclic': false,
      'transitionIn': 'fade',
      'transitionOut': 'fade',
      'scrolling': 'no',
      'hideOnContentClick': false
    });

    //$("#trigger-popup").click(alert('dfd'));

    if(checked == 'checked="checked"'){
      $("#trigger-popup").trigger('click');
    }

//    $("a#inline").fancybox({
//      'width': 500,
//      'height': 400,
//      'autoDimensions': false,
//      'hideOnContentClick': true
//    });


//	$.fancybox(
//		'<h2>Hi!</h2><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam quis mi eu elit tempor facilisis id et neque</p>',
//		{
//        		'autoDimensions'	: false,
//			'width'         		: 350,
//			'height'        		: 'auto',
//			'transitionIn'		: 'none',
//			'transitionOut'		: 'none'
//		}
//	);

  //  jQuery.ajax({
  //    url:"index.php",
  //    success:function(result){alert('success ' + result)},
  //    error:function(){alert('error')}
  //  });

  });


})(jQuery);


