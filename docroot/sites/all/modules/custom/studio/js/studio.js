Drupal.settings.studio = Drupal.settings.studio || {};

function onYouTubeIframeAPIReady() {
  Drupal.settings.studio.player = new YT.Player('studio-youtube-player', {
    height: '146',
    width: '260',
    playerVars: {
      'showinfo': '0'
    },
    events: {
      'onReady': onPlayerReady
    }
  });
}

function onPlayerReady(event) {
  jQuery('.field-name-field-youtube-path .field-item a').click(function() {
    videoId = jQuery(this).attr('href').split('=')[1];
    Drupal.settings.studio.player.loadVideoById({videoId:videoId});
    return false;
  });

  // Cue up the first video on load.
  videoId = jQuery('.field-name-field-youtube-path .field-item:first a').attr('href').split('=')[1];
  Drupal.settings.studio.player.cueVideoById({videoId:videoId});

}
