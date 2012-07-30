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
    
    // Place your code here.
    var program_examples_view = $('.view-program-examples');
    
    if (program_examples_view.length) {
      
      var program_examples_view_all_items = $('.program-examples-view-item-container', program_examples_view);
      
      function program_examples_view_change(section_id) {
        if (section_id == 'all') {
          program_examples_view_all_items.fadeTo(650, 1);
        }
        else {
          program_examples_view_all_items.fadeTo(200, 0.5);
          program_examples_view_section_items[ section_id ].fadeTo(450, 1);
        }
      }
      
      // Attach click handlers to view header navigation anchors
      var program_examples_view_section_items = {};
      
      $('.program-examples-view-header-anchor', program_examples_view).each(function (i) {
        this_element = $(this);
        this_section_id = this_element.attr('href').replace('#section-', '');
        program_examples_view_section_items[ this_section_id ] = $('.program-examples-view-section-' + this_section_id + '-item', program_examples_view);
        this_element.click(function() { program_examples_view_change( $(this).attr('href').replace('#section-', '') ); });
      });
      
      // Attach click handlers to main item thumbnails to display preview
      var preview_showing = false;
      var preview_fading_out = false;
      
      function show_preview(element) {
        if (!preview_showing && !preview_fading_out) {
          preview_showing = true;
          $(element).find('.program-examples-view-item-preview').fadeIn(500, function () { });
        }
      }
      function hide_preview(element) {
        if (!preview_fading_out) {
          preview_fading_out = true;
          $(element).find('.program-examples-view-item-preview').fadeOut(500, function () { preview_fading_out = false; preview_showing = false; });
        }
      }
      
      program_examples_view_all_items
        .mouseover(function () { show_preview(this); })
        .click(function () { show_preview(this); return false; });
      
      //.mouseout(function () { hide_preview(this); });
      
      // Attach click handlers to preview close X's
      $('.program-examples-view-preview-close').click(function () {
        hide_preview($(this).parent().parent());
        return false;
      });
    }
  });

})(jQuery, Drupal, this, this.document);
