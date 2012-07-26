<?php

/* ==========================  L O C A L  ========================= */
$aliases['local'] = array(
  'parent' => '@parent',
  'env' => 'local',
  '%dump-dir' => '/tmp/php',
);


/* ===========================  B L E E N  ========================== */
$aliases['bleen'] = array(
  'parent' => '@parent',
  'env' => 'dev',
  'root' => '/home/alexross/sites/studioone.bleen.net/docroot',
  'path-aliases' => array(
    '%dump-dir' => '/tmp',
    '%drush' => '/home/alexross/bin/drush',
    '%drush-script' => '/home/alexross/bin/drush/drush',
  ),
  'remote-host' => 'bleen.net',
  'remote-user' => 'alexross',
);


/* ===========================  D E V  ========================== */
$aliases['dev'] = array(
  'parent' => '@parent',
  'env' => 'dev',
  'root' => '/home/studio1/public_html/dev/docroot',
  'path-aliases' => array(
    '%dump-dir' => '/tmp',
    '%drush' => '/home/studio1/bin/drush',
    '%drush-script' => '/home/studio1/bin/drush/drush',
  ),
  'remote-host' => '184.173.212.97',
  'remote-user' => 'studio1',
  'ssh-options' => '-p 2222'
);
