Drupal.settings.studio = Drupal.settings.studio || {};

// function onYouTubeIframeAPIReady() {
//   Drupal.settings.studio.player = new YT.Player('studio-youtube-player', {
//     height: '146',
//     width: '260',
//     playerVars: {
//       'showinfo': '0',
// 	  'rel': '0',
// 	  'theme': 'light'
//     },
//     events: {
//       'onReady': onPlayerReady
//     }
//   });
// }

// function onPlayerReady(event) {
//   jQuery('.field-name-field-youtube-path .field-item a').click(function() {
//     videoId = jQuery(this).attr('href').split('=')[1];
//     Drupal.settings.studio.player.loadVideoById({videoId:videoId});
//     return false;
//   });

//   // Cue up the first video on load.
//   videoId = jQuery('.field-name-field-youtube-path .field-item:first a').attr('href').split('=')[1];
//   Drupal.settings.studio.player.cueVideoById({videoId:videoId});

// }


(function ($) {

  Drupal.behaviors.studio = {
    attach: function(context, settings) {
      $('.double-field-first').live('click', function(){

          //console.log(this);
          //console.log($(this).parent().find('.double-field-second'));
          $('.double-field-second').hide();
          var videoHolder = $(this).parent().find('.double-field-second');
          $(videoHolder).show();

          var script = $(videoHolder).find('script');
          var url = $(script).attr('src');
          var urlsplit = url.split("/");
          var urlsplit2 = urlsplit[4].split('.');
          var urlsplit3 = urlsplit2[0].split('-');
          var playlistId = urlsplit3[0];
          var videoId = "botr_"+playlistId+'_'+urlsplit3[1]+"_ply";
         // console.log(videoId);

          jwplayer(videoId).setup({
            analytics: {"enabled": false},
            autostart: true,
            controls: true,
            fallback: false,
            flashplayer: "http://a.jwpcdn.com/player/6/633242/jwplayer.flash.swf",
            height: "100%",
            html5player: "http://a.jwpcdn.com/player/6/633242/jwplayer.html5.js",
            image: "http://content.bitsontherun.com/thumbs/3Ap1E7kP-480.jpg",
            playlist: "http://content.bitsontherun.com/jw6/"+playlistId+".xml",
            plugins: {"http://a.jwpcdn.com/player/6/633242/ping.js": {"pixel": "http://content.bitsontherun.com/ping.gif"}},
            primary: "flash",
            repeat: false,
            stretching: "uniform",
            width: "100%"
          });

      });

    }
  };


})(jQuery);