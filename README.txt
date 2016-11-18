# World News
#### By Aimen Khakwani & Ayana Powell
#### 11-17-2016

World News is a news site made in Drupal. It uses a feature for a VIP page with 'promotions' that are visible only to authenticated users. It also uses a view for an 'Activist' page, and the Contact module for a contact page. 

## Installation

* `git clone <repository-url>` this repository
* run MAMP, and in 'Preferences->Web Server' point the Document Root to this folder
* Start Servers in MAMP
* Open 'WebStart page' in MAMP and navigate to 'Tools->phpMyAdmin'
* Import the database from 'the project folder->sites->db-backup'
* In phpMyAdmin, under 'Privileges', add a User with the username/password for the database user
* Navigate to localhost:8888 to view the website

## Further Reading / About Drupal

Drupal is an open source content management platform supporting a variety of
websites ranging from personal weblogs to large community-driven websites. For
more information, see the Drupal website at http://drupal.org/, and join the
Drupal community at http://drupal.org/community.

Legal information about Drupal:
 * Know your rights when using Drupal:
   See LICENSE.txt in the same directory as this document.
 * Learn about the Drupal trademark and logo policy:
   http://drupal.com/trademark

## Configuration and Features

Drupal core (what you get when you download and extract a drupal-x.y.tar.gz or
drupal-x.y.zip file from http://drupal.org/project/drupal) has what you need to
get started with your website. It includes several modules (extensions that add
functionality) for common website features, such as managing content, user
accounts, image uploading, and search. Core comes with many options that allow
site-specific configuration. In addition to the core modules, there are
thousands of contributed modules (for functionality not included with Drupal
core) available for download.

More about configuration:
 * Install, upgrade, and maintain Drupal:
   See INSTALL.txt and UPGRADE.txt in the same directory as this document.
 * Learn about how to use Drupal to create your site:
   http://drupal.org/documentation
 * Download contributed modules to sites/all/modules to extend Drupal's
   functionality:
   http://drupal.org/project/modules
 * See also: "Developing for Drupal" for writing your own modules, below.
