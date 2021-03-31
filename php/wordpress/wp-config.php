<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://wordpress.org/support/article/editing-wp-config-php/
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'wordpress' );

/** MySQL database username */
define( 'DB_USER', 'root' );

/** MySQL database password */
define( 'DB_PASSWORD', '' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8mb4' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define( 'AUTH_KEY',         'J9YU&1?PHT=B./kl%k?<#my)g^4hz7=YIhU~c!S[qWeV=}>TD`/goc)d8/x*+)YW' );
define( 'SECURE_AUTH_KEY',  'g3Z~0R5-ErY^27R1-+;.!|!zFb=VpscVgnN%go^<?z?E25g[.Gl;iCrmAEG[d^I)' );
define( 'LOGGED_IN_KEY',    'jS?~^X 9a-eg<A@9F MEVB2tXNvym_:r&^N|o/8Tv[YSu,#Nl]c)[Tkw=Mx5lB3E' );
define( 'NONCE_KEY',        '71HB=}uf$ HmxbW$-8]R]:roUYjW+Go.#KAgD:+rxcB?nVdWeZ/#GqQ+{DM*bI%J' );
define( 'AUTH_SALT',        '?zH-44^hOiJ!ALwgBy&;||2fVz3Gi#HwTC<U=8}BGx=_=$vM/oMEi.VLTAIf0^R&' );
define( 'SECURE_AUTH_SALT', '> 2UCPL_J^4OEE%1~X-C8%,Mk%at/a#/O_US`hy0p #BZ1`DS8IXtnnEZ^>S-P0C' );
define( 'LOGGED_IN_SALT',   '_A$sE~>U!QB-Mqo0H_nu8[(%Z6F0wj]hUr)e2]UhJ5[>)-J #:82KwSQg6*{} `c' );
define( 'NONCE_SALT',       'G3/b$0`Tt_6d0J9!#iadJ0n;.1hUm#iK:-BTxQi&BCo<0+/J`$-=UkKR7q1Y()e5' );

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the documentation.
 *
 * @link https://wordpress.org/support/article/debugging-in-wordpress/
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', __DIR__ . '/' );
}

/** Sets up WordPress vars and included files. */
require_once ABSPATH . 'wp-settings.php';
