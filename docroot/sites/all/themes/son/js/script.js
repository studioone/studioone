/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  $(function () {
    
    // Carousel for featured project examples carousel.
    var featured_project_examples_view = $('.featured-project-examples .view');
    if (featured_project_examples_view.length) {
      
      var featured_project_examples_view_content = $('.view-content', featured_project_examples_view);
      
      var featured_examples_item_width = 202; // Refer to blocks.scss for this value.
      var total_featured_examples = $('.views-row', featured_project_examples_view).length;
      var initial_view_content_width = (total_featured_examples / 2) * featured_examples_item_width;
      
      var current_view_content_width = total_featured_examples * featured_examples_item_width;
      var current_left_shift = -initial_view_content_width;
      
      featured_project_examples_view_content
          .css('width', current_view_content_width + 'px')
          // Shift to point in between the 2 sets of items to leave room for moving left.
          .css('left', current_left_shift + 'px');
          
      var featured_project_examples_animating = false;
      
      $('.featured-project-examples-pager-right-inner')
        .click(function () {
          // Prevents mad clicking on pager arrow from wreaking havoc on animiatons.
          if (featured_project_examples_animating) {
            return false;
          }
          current_left_shift -= featured_examples_item_width;
          // Create the curcular illusion by shifting everything to the starting position
          // once we hit the far right.
          if (current_left_shift <= -(current_view_content_width - (featured_examples_item_width * 3))) {
            current_left_shift += initial_view_content_width;
            featured_project_examples_view_content.css('left', current_left_shift + 'px');
          }
          // Animate right.
          featured_project_examples_animating = true;
          featured_project_examples_view_content.animate({'left' : '-=' + featured_examples_item_width}, 1000, function () {
            featured_project_examples_animating = false;
          });
        })
        .show();
      
      $('.featured-project-examples-pager-left-inner')
        .click(function () {
          // Prevents mad clicking on pager arrow from wreaking havoc on animiatons.
          if (featured_project_examples_animating) {
            return false;
          }
          current_left_shift += featured_examples_item_width;
          // Create the curcular illusion by shifting everything to the starting position
          // once we hit the far left.
          if (current_left_shift >= 0) {
            current_left_shift = -initial_view_content_width;
            featured_project_examples_view_content.css('left', current_left_shift + 'px');
          }
          // Animate left.
          featured_project_examples_animating = true;
          featured_project_examples_view_content.animate({'left' : '+=' + featured_examples_item_width}, 1000, function () {
            featured_project_examples_animating = false;
          });
        })
        .show();
    }
  });

})(jQuery, Drupal, this, this.document);
