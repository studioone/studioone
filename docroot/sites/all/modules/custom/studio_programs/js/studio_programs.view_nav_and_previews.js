
(function ($, Drupal, window, document, undefined) {

  $(function () {

    Drupal.settings.studio_programs = Drupal.settings.studio_programs || {};
    Drupal.settings.studio_programs.header_nav_view = Drupal.settings.studio_programs.header_nav_view || '';

    //var view = $('.view-program-examples');
    var view = $('.' + Drupal.settings.studio_programs.header_nav_view)

    if (view.length) {

      var view_all_items = $('.program-examples-view-item-container', view);

      function view_change(section_id) {
        if (section_id == 'all') {
          view_all_items.fadeTo(650, 1).removeClass('inactive');
        }
        else {
          view_all_items.fadeTo(200, 0.15).addClass('inactive');
          view_section_items[ section_id ].fadeTo(450, 1).removeClass('inactive');
        }
      }

      // Attach click handlers to view header navigation anchors
      var view_section_items = {};

      $('.program-examples-view-header-anchor', view).each(function (i) {
        this_element = $(this);
        this_section_id = this_element.attr('href').replace('#section-', '');
        view_section_items[ this_section_id ] = $('.program-examples-view-section-' + this_section_id + '-item', view);
        this_element.click(function() { view_change( $(this).attr('href').replace('#section-', '') ); });
      });

      // Attach click handlers to main item thumbnails to display preview
      var preview_showing = false;
      var preview_fading_out = false;

      function show_preview(element) {
        parent_element = $(element).parent();
        if (preview_showing) {
          switch_preview(preview_showing, element);
        }
        else if (!preview_fading_out && !parent_element.hasClass('inactive')) {
          preview_showing = parent_element;
          parent_element.find('.program-examples-view-item-preview').fadeIn(500, function () { });
        }
      }
      function hide_preview(element) {
        if (!preview_fading_out) {
          preview_fading_out = true;
          $(element).find('.program-examples-view-item-preview').fadeOut(200, 
            function () {
              // Ensure all previews are hidden.
              $('.program-examples-view-item-preview').fadeOut(50);
              preview_fading_out = false;
              preview_showing = false;
            });
        }
      }
      function switch_preview(old_element, new_element) {
        $(old_element).find('.program-examples-view-item-preview').fadeOut(200, 
           function () {
             // Ensure all previews are hidden.
             $('.program-examples-view-item-preview').fadeOut(50);
             preview_fading_out = false; 
             preview_showing = false;
             show_preview(new_element);
           });
      }

      $('.program-examples-view-item-screenshot').click(function () { show_preview(this); return false; });

      // Attach click handlers to preview close X's
      $('.program-examples-view-preview-close').click(function () {
        hide_preview($(this).parent().parent());
        return false;
      });
      
      // Close any open preview on escape key press
      $(document).keyup(function(e) {
        if (e.keyCode == 27 && typeof(preview_showing) == 'object') {
          hide_preview(preview_showing);
        }
      });
      
      // Close any open preview when clicking any where off the preview.
      $('#page').click(function (e) {
        if (!$(e.srcElement).parents('.program-examples-view-item-container').length && preview_showing) {
          hide_preview(preview_showing);
        }
      });
    }
  });

})(jQuery, Drupal, this, this.document);









