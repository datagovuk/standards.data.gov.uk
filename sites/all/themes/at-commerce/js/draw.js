(function ($) {
  Drupal.behaviors.ContentDisplayToggleDraw = {
    attach: function(context) {
    // Get a reference to the container.
      var draw = $( "#draw" );
      // Bind the link to toggle the slide.
      $( "#toggle-wrapper a" ).click(
      function( event ){
        // Prevent the default event.
        event.preventDefault();
        // Toggle the slide based on its current
        // visibility.
        if (draw.is( ":visible" )){ 
          // Hide - slide up.
          draw.slideUp(600);
          } else {
            // Show - slide down.
            draw.slideDown(600);
          }
        }
      );
    }
  }
})(jQuery);