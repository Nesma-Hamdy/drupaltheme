<?php
// $Id: page.tpl.php,v 1.47 2010/11/05 01:25:33 dries Exp $

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<!-- top bar -->
<div id="top-bar-wrapper">
<div id="top-bar" class="container_12 clearfix">
<div id="user-type-menu" class="prefix_1 grid_6 omega">
<?php print render ($page['user_type_menu']); ?>
</div><!-- /user-type-menu -->

<div id="utility-links" class="grid_5 omega">
<?php print render ($page['utility_links']); ?>
</div><!-- /utility-links -->
</div><!-- /top-bar -->
</div><!-- /top-bar-wrapper -->

<div id="page" class="container_12">
<div id="header" class="grid_12">
	<!-- logo -->
	    <?php if ($logo): ?>
	    <div id="logo" class="grid_2 alpha omega">
	        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
	          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a></div><!-- logo -->
	      <?php endif; ?>
	
		<!-- site-name-and-slogan -->
			<?php if ($site_name || $site_slogan): ?>
				   <div id="name-and-slogan" class="grid_6 alpha">
		<span id="site-court"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">United States District Court</a></span>	
		
		 <?php if ($site_name): ?>
		            <?php if ($title): ?><span id="site-name">
		                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a></span>

		            <?php else: /* Use h1 when the content title is empty */ ?>
		              <h1 id="site-name">
		                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
		              </h1>
		            <?php endif; ?>
		          <?php endif; ?>


				<?php if ($site_slogan): ?>
				            <span id="site-slogan"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_slogan; ?></a></span>
				<?php endif; ?>
				</div>
	<?php endif; ?>
	
	<!-- search box -->
			<?php if ($page['search_box']): ?>
			      <div id="search-box" class="grid_4 omega">
			      <?php print render ($page['search_box']); ?>
			      </div><!-- /searchBox -->
			      <?php endif; ?>
</div><!-- /#header -->
	
	<!-- navigation -->
	    <?php if ($page['navigation']): ?>
	      <div id="navigation" class="grid_12">
	      <?php print render ($page['navigation']); ?>
	      </div><!-- /navigation -->
	      <?php endif; ?>

<!-- content-wrapper -->
<div id="content-wrapper" class="grid_12">
<div id="main" class="clearfix">
	<?php if ($page['sidebar_first']): ?>
<div id="sidebar-first" class="<?php print render($sb_first_grid_classes); ?>">
	<?php print render($page['sidebar_first']); ?>
	</div><!-- /#sidebar-first -->
	 <?php endif; ?>
	
	<div id="content" class="<?php print render($content_grid_classes); ?>">
		<?php if ($breadcrumb): ?>
          <div id="breadcrumb"><?php print $breadcrumb; ?></div>
        <?php endif; ?>

		<?php print $messages; ?>
		
		<?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
       	 <?php if ($page['content_top']): ?>
              <div id="content-top">
              <?php print render ($page['content_top']); ?>
              </div><!-- /content-top -->
              <?php endif; ?>

              <!-- main content -->
        <?php print render($page['content']); ?>

	<?php if ($page['content_bottom']): ?>
              <div id="content-bottom">
              <?php print render ($page['content_bottom']); ?>
              </div><!-- /content-bottom -->
              <?php endif; ?>
              
        <?php print $feed_icons; ?>

</div><!-- /#middle-content -->

<?php if ($page['sidebar_second']): ?>
		<div id="sidebar-second" class="<?php print render($sb_second_grid_classes); ?>">
			<?php print render($page['sidebar_second']); ?>
			</div><!-- /#sidebar-second -->
			<?php endif; ?>
</div><!-- /#main -->
</div><!-- /#content-wrapper -->

<div id="footer" class="grid_12">
	<?php if ($page['footer_top']): ?>
	<div id="footer-top">
		<?php print render($page['footer_top']); ?>
	</div><!-- /#footer-top -->
	<?php endif; ?>
	
	<?php if ($page['footer_first']): ?>
	<div class="grid_3 first-block">
		<?php print render($page['footer_first']); ?>
	</div><!-- /.first-block -->
	<?php endif; ?>
	
	<?php if ($page['footer_second']): ?>
	<div class="grid_3">
		<?php print render($page['footer_second']); ?>
	</div><!-- /.first-block -->
	<?php endif; ?>
	
	<?php if ($page['footer_third']): ?>
	<div class="grid_3">
		<?php print render($page['footer_third']); ?>
	</div><!-- /.first-block -->
	<?php endif; ?>
	
	<?php if ($page['footer_fourth']): ?>
	<div class="grid_3">
		<?php print render($page['footer_fourth']); ?>
	</div><!-- /.first-block -->
	<?php endif; ?>

	<?php if ($page['footer_bottom']): ?>
	<div id="footer-bottom">
		<?php print render($page['footer_bottom']); ?>
	</div><!-- /#footer-bottom -->
	<?php endif; ?>
 </div> <!-- /#footer -->
</div><!-- /#page -->
