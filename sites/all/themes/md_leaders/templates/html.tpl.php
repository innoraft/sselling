<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html>

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php if(isset($ios_144) && $ios_144 != null) :?><link rel="apple-touch-icon-precomposed" sizes="144x144" href="<?php print $ios_144; ?>"><?php endif;?>
    <?php if(isset($ios_114) && $ios_114 != null) :?><link rel="apple-touch-icon-precomposed" sizes="114x114" href="<?php print $ios_114; ?>"><?php endif;?>
    <?php if(isset($ios_72) && $ios_72 != null)  :?><link rel="apple-touch-icon-precomposed" sizes="72x72" href="<?php print $ios_72; ?>"><?php endif;?>
    <?php if(isset($ios_57) && $ios_57 != null)  :?><link rel="apple-touch-icon-precomposed" sizes="57x57" href="<?php print $ios_57; ?>"><?php endif;?>
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />

  <?php print $styles; ?>
  <?php print $scripts; ?>
  <style type="text/css">
        <?php if (isset($googlewebfonts)): print $googlewebfonts; endif; ?>
        <?php if (isset($theme_setting_css)): print $theme_setting_css; endif; ?>
        <?php if (isset($typography)): print $typography; endif;?>
        <?php if (isset($custom_css)): print $custom_css; endif; ?>
    </style>

    <?php if (isset($header_code)): print $header_code; endif;?>


</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <div class="addthis_button"></div>
  <script type="text/javascript" src="//s7.addthis.com/js/250/addthis_widget.js async="async"></script>
  <script>
  var addthis_share = {
      url_transforms: {
        shorten: {
          twitter: 'bitly',
          google_plus: 'bitly'
        }
      },
      shorteners: {
        bitly: {}
      },
      title: "Run a mile & dedicate it to women #aMileForHer. @hcltech will match miles & empower women via digital literacy ",
    }
    addthis.layers({
      'theme': 'transparent',
      'share': {
        'position': 'right',
        'numPreferredServices': 5,
        'services': 'facebook,twitter,google_plusone_share,linkedin,more',
      },
      'whatsnext': {},
      'recommended': {}
    });
  </script>
  <div class="counter">
<div class="number"><?php echo variable_get('counter', ''); ?>
</div>
<div class="amile">women are getting</div>
<div class="new">empowered during</div>
<div class="empowered">2015-2016 </div>
</div>
</div>

</body>
</html>
