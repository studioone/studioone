
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
          view_all_items.fadeTo(650, 1);
        }
        else {
          view_all_items.fadeTo(200, 0.5);
          view_section_items[ section_id ].fadeTo(450, 1);
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
        if (!preview_showing && !preview_fading_out) {
          preview_showing = true;
          $(element).find('.program-examples-view-item-preview').fadeIn(500, function () { });
        }
      }
      function hide_preview(element) {
        if (!preview_fading_out) {
          preview_fading_out = true;
          $(element).find('.program-examples-view-item-preview').fadeOut(200, function () { preview_fading_out = false; preview_showing = false; });
        }
      }
      
      view_all_items
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