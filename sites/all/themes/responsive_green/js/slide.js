/**
 * @file
 * Responsive Green Slider Javascript.
 *
 */
(function ($) {
Drupal.behaviors.slider = {
attach: function (context, settings) {
  $(window).load(function() {
    $("#single-post-slider").flexslider({
      animation: 'fade',
      animationSpeed: 2000,
      slideshow: true,
      controlNav: true,
      smoothHeight: true,
      start: function(slider) {
        slider.container.click(function(e) {
          if(!slider.animating) {
            slider.flexAnimate(slider.getTarget('next'));
          }
        });
      }
    });
  });
}
};
})(jQuery);
