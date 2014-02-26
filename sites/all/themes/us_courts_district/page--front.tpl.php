
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

<div class="grid_12 featured">
<?php if ($page['slideshow']): ?>
<div class="grid_8 alpha slideshow">
<?php print render ($page['slideshow']); ?>
</div><!-- /slideshow -->
<?php endif; ?>

<?php if ($page['action_buttons']): ?>
<div class="grid_4 omega action-buttons">
<?php print render ($page['action_buttons']); ?>

<!-- High Level Alert Region -->
<?php if ($page['alert']): ?>
<div class="alert-container">
<?php print render($page['alert']); ?>
</div>
<?php endif; ?>
</div>
<?php endif; ?>
</div>


<!-- main wrapper -->
<div id="content-wrapper" class="grid_12">
	<div id="main" class="clearfix">
<div id="content" class="column <?php print render($content_grid_classes); ?>">
		
	<!-- homepage main article -->
	<div id="middle-top" class="grid_12">
	<?php print $messages; ?>
	      <?php if (isset($oho_site_alerts_messages)) { print $oho_site_alerts_messages; }; ?>
	        <?php if ($page['highlighted']): ?>
	        <div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
	        <a id="main-content"></a>
	        <?php print render($title_prefix); ?>
	        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
	        <?php print render($title_suffix); ?>
	        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
	        <?php print render($page['help']); ?>
	        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
	        <?php print render($page['content']); ?>
	</div><!-- /middle-top -->

<!-- sub content blocks -->
	<div id="sub-content-blocks" class="grid_12">
	<!-- sub content blocks -->
	<?php if ($page['sub_content_left']): ?>
	  <div id="left-sub-column" class="grid_4">
	  <?php print render($page['sub_content_left']); ?>
	  </div><!-- left-sub-column -->
	<?php endif; ?>

	<?php if ($page['sub_content_center']): ?>
	  <div id="center-sub-column" class="grid_4">
	  <?php print render($page['sub_content_center']); ?>
	  </div><!-- center-sub-column -->
	<?php endif; ?>

	<?php if ($page['sub_content_right']): ?>
	  <div id="right-sub-column" class="grid_4 omega">
	  <?php print render($page['sub_content_right']); ?>
	  </div><!-- right-sub-column -->
	<?php endif; ?>
	</div>	<!-- /sub content blocks -->
</div><!-- /#content -->

<!-- right sidebar -->
      <?php if ($page['sidebar_second']): ?>
        <div id="sidebar-second" class="column sidebar <?php print render($sb_second_grid_classes); ?>">
          <?php print render($page['sidebar_second']); ?>
        </div> <!-- /sidebar-second -->
      <?php endif; ?>
</div><!-- /#main -->
</div> <!-- /#content-wrapper -->


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

    </div> <!--/#page -->

 

