<div class="page-outline"><div class="header-outline">
  <div id="page-wrapper"><div id="page" class="container container_12">

    <div id="header"><div class="section clearfix">

      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <div id="name-and-slogan">
         <p id="site-court"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">United States Bankruptcy Court</a></p>
          <?php if ($site_name): ?>
            <?php if ($title): ?>
              <div id="site-name"><strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </strong></div>
            <?php else: /* Use h1 when the content title is empty */ ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <div id="site-slogan"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_slogan; ?></a></div>
		  <?php endif; ?>
        </div> <!-- /#name-and-slogan -->
      <?php endif; ?>

      <?php print render($page['header']); ?>

    </div></div> <!-- /.section, /#header -->

    <?php if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>

    <div id="main-wrapper"><div id="main" class="clearfix">
      
      <?php if ($page['sidebar_first']): ?>
        <div id="sidebar-first" class="column sidebar <?php print render($sb_first_grid_classes); ?>"><div class="section">
          <?php print render($page['sidebar_first']); ?>
        </div></div> <!-- /.section, /#sidebar-first -->
      <?php endif; ?>
      
      <!-- Content Top -->
        <div id="content-top" class="grid_12">
        
          <div class="grid_3 alpha left-top-column">
            <ul class="fp-welcome-links">
              <li><a href="<?php echo $pacer_link; ?>" target="_blank">PACER &raquo;</a></li>
              <li><a href="<?php echo $cmecf_link; ?>" target="_blank">CM/ECF &raquo;</a></li>
              <?php echo $add_welcome_btns; ?>
            </ul>
          </div><!-- / .left column top -->
          
          <?php if($welcome_img): ?>
            <div class="grid_5 center-top-column">
              <?php echo $welcome_txt; ?>
            </div><!-- / .center column top -->
          
            <div class="grid_4 omega right-top-column">
              <?php echo $welcome_img; ?>
            </div><!-- / .right column top -->
          <?php else: ?>
            <div class="grid_9 omega center-top-column">
              <?php echo $welcome_txt; ?>
            </div><!-- / .center column top -->
          <?php endif; ?>
          
        </div> <!-- /.section, /#content-top -->
      <!-- /.Content Top -->
	  
      <div id="content" class="column <?php print render($content_grid_classes); ?>"><div class="section">
      
      <?php print $messages; ?>
      <?php if (isset($oho_site_alerts_messages)) { print $oho_site_alerts_messages; }; ?>
      
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php //print render($page['content']); ?>
        
        <?php if ($page['sub_content_left']): ?>
          <div id="left-sub-column" class="grid_4 alpha">
          <?php print render($page['sub_content_left']); ?>
          </div>
        <?php endif; ?><!-- /. Left Column -->
        
        <?php if ($page['sub_content_center']): ?>
          <div id="center-sub-column" class="grid_4">
          <?php print render($page['sub_content_center']); ?>
          </div>
        <?php endif; ?><!-- /. Center Column -->

        <?php if ($page['sub_content_right']): ?>
          <div id="right-sub-column" class="grid_4 omega">
          <?php print render($page['sub_content_right']); ?>
          </div>
        <?php endif; ?><!-- /. Right Column -->
        
        
        <?php print $feed_icons; ?>
      </div></div> <!-- /.section, /#content -->

      <?php if ($page['sidebar_second']): ?>
        <div id="sidebar-second" class="column sidebar <?php print render($sb_second_grid_classes); ?>"><div class="section">
          <?php print render($page['sidebar_second']); ?>
        </div></div> <!-- /.section, /#sidebar-second -->
      <?php endif; ?>

    </div></div> <!-- /#main, /#main-wrapper -->

    <div id="footer"><div class="section">
      <?php print render($page['footer']); ?>
    </div></div> <!-- /.section, /#footer -->

 </div></div></div></div> <!-- /#page, /#page-wrapper, /.header-outline, /.page-outline -->
