********************
htaccess
********************

htaccess is a module which autogenerates a Drupal root 
htaccess file based on your settings.

This module can break your site, only developers should test it. 
If your site would break, you need to manually restore 
the htaccess backup file.

****************************
Installation & Configuration
****************************

1. Copy the entire htaccess directory 
into sites/all/modules* directory.

2. Login as an administrator. 
Enable the module in the "Administer" -> "Modules".

3. On the configuration page,
choose the options according to your needs.

4. Click on "Save configuration"
in order to generate the htaccess file.

* or sites/PROFILE/modules if you are running on a multisite instance.

*******************
Author / Maintainer
*******************
giorgio79 (original author)
Jean-Baptiste L. (aka, Jibus)
