<?php global $base_url;

// unset($page['content']);

// unset($page['home_first']);

// unset($page['home_third']);

// unset($page['home_four']);

// unset($page['home_five']);

// pr($page); die;

// $theme_path = $base_url.'/sites/all/themes/aitacs';

//render(metatag_metatags_view('global:frontpage', array()));

 $page_id = arg(1);

if(($node->type == 0)) {$con_type = arg(0);}else{$con_type = arg(0);}

if($node->type == "news") {$ptitle="News";}else{$ptitle = drupal_get_title();}

//if(drupal_is_front_page()):

//$page_as = "front-page";

//else:

//$page_as = "";

//endif;

?>

<script>

//var baseUrl = "<?php print $theme_path; ?>";

//var base_path = "<?php print $base_url; ?>";



</script>





<div class="mb-menu"><i class="fa fa-bars"></i></div>



<div id="mobile-menu" class="container"><?php print $custom_mobile_menu; ?></div>

  <!-- Navigation -->      

       <nav class="navbar navbar-default navbar-fixed-top">

	    <div class="container">



      	<div class="container-fluid">

        

          <div class="navbar-header">

            <?php if ($logo): ?>

              <a class="navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">

                <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" style="height:43px;"/>

              </a>

            <?php endif; ?>

            <a class="mini-logo" href="<?php print $base_url.'/nsight-10-years'; ?>" ><img src="<?php print $path_to_theme; ?>/imgs/logo-mini.png" /></a>

          </div>

        

          <div class="collapse navbar-collapse">

            <?php print $main_menu; ?> 

		<div class="social-icons-header desktop">

       		<a href="https://www.facebook.com/nsightinc" target="_blank"><div class="sm-icons"><i class="fa fa-facebook"></i></div></a>

          <a href="https://twitter.com/nsightinc" target="_blank"><div class="sm-icons"><i class="fa fa-twitter"></i></div></a>

          <a href="https://www.linkedin.com/company/nsight-inc._2?trk=tyah&trkInfo=tas%3ANsight+inc%2Cidx%3A1-2-2" target="_blank"><div class="sm-icons"><i class="fa fa-linkedin"></i></div></a>

        </div>			

          </div>

        </div>

		</div>

		<div class="container mobile">

				<div class="social-icons-header">

       		<a href="https://www.facebook.com/nsightinc" target="_blank"><div class="sm-icons"><i class="fa fa-facebook"></i></div></a>

          <a href="https://twitter.com/nsightinc" target="_blank"><div class="sm-icons"><i class="fa fa-twitter"></i></div></a>

          <a href="https://www.linkedin.com/company/nsight-inc._2?trk=tyah&trkInfo=tas%3ANsight+inc%2Cidx%3A1-2-2" target="_blank"><div class="sm-icons"><i class="fa fa-linkedin"></i></div></a>

        </div>	

		</div>

	</nav>







  

<!--  <div class="fixed-top"></div>

-->

<?php if(render($page['second_level'])): ?>

<div class="second-level-menu">

    <div class="container">

      <?php print render($page['second_level']); ?>

    </div>

  </div>

<?php else: ?>

<div class="slm"></div>

<?php endif; ?>

  <div class="clearfix"></div>

  

  

  <?php if(!$is_front): ?>

  

<?php if(render($page['inner_header'])): ?>

    <?php print render($page['inner_header']); ?>  

<?php else: ?>



<div class="inside-banner" style="background-image: url(<?php print $base_url; ?>/sites/default/files/about-us_0.jpg)">

	<div class="banner-content">

		<div class="banner-inside-text"><h1><?php print $ptitle; ?></h1>

    </div>

	</div>

</div>

<?php endif; ?>

  

    <?php if(($con_type!="node") || (current_path() == "node/174")): ?><div class="container-fluid">	

      <div class="container"> <?php endif; ?>         	

          <?php print $messages; ?>

          <?php //print render($title_prefix); ?>

          <?php //if ($title): ?><?php //print $title; ?><?php //endif; ?>

          <?php //print render($title_suffix); ?>

          <?php //if ($tabs): ?><?php //print render($tabs); ?><?php //endif; ?>

          <?php //print render($page['help']); ?>

          <?php //if ($action_links): ?><?php //print render($action_links); ?><?php //endif; ?>

          <?php print render($page['content']); ?>

            

          

     <?php if(($con_type!="node") || (current_path() == "node/174")): ?> </div>

    </div><?php endif; ?> 

    

    <?php else: ?>

    

    <!-- Banner -->

    <div class="banner">      

    	<div class="nsight-advantage">

		 <h1>The Nsight Advantage.</h1>

		 <h2>Enabling Enterprise Intelligence, Mobility, and Customer Experience through expertise, experience, and efficiency</h2>

      </div>

    </div>    

    

		<!-- Main Content -->

    <div class="container-fluid">    	

      <!-- Section 1 -->

      <div class="container-fluid gray section-spacing">

      	<div class="container">

          <h1>Practices</h1>          

          <div class="know-more-icons">  

            <?php print render($page['home_first']); ?>

          </div>          

        </div>

      </div>      

      

      <!-- Section 2 -->

      <?php print render($page['home_second']); ?>

      <div class="container-fluid ">

        <div class="container case-studies">

          <h1>Case Studies</h1>

          <div class="col-sm-12">

		<?php print views_embed_view('case_studies','block'); ?>

       <!--   <div class="row">

              <div class="col-sm-6">

                <p>A Multinational Enterprise Software Company Leverages SAP Fiori, Improves Customer Satisfaction Index by 25%</p>

                <button type="button" class="btn btn-default">Read the study</button>

              </div>

              <div class="col-sm-6">

                <p>A Multinational Enterprise Software Company Leverages SAP Fiori, Improves Customer Satisfaction Index by 25%</p>

                <button type="button" class="btn btn-default">Read the study</button>

              </div>

             </div>

             <hr />

             <div class="row">

              <div class="col-sm-6">

                <p>A Multinational Enterprise Software Company Leverages SAP Fiori, Improves Customer Satisfaction Index by 25%</p>

                <button type="button" class="btn btn-default">Read the study</button>

              </div>

              <div class="col-sm-6">

                <p>A Multinational Enterprise Software Company Leverages SAP Fiori, Improves Customer Satisfaction Index by 25%</p>

                <button type="button" class="btn btn-default">Read the study</button>

              </div>

             </div>-->

          </div>

        </div>

      </div>

      

      <!-- Section 3 -->

      <div class="container-fluid">

      <?php print render($page['home_third']); ?>       	

      </div>

      

      <!-- Section 4 -->

      <div class="container-fluid">      	

        <?php print render($page['home_four']); ?>      	

      </div>

      

      <!-- Section 5 -->      

      <div class="container section-spacing">

      <?php print render($page['home_five']); ?>     

    </div>

    <?php endif; ?>

    

    <!-- Footer -->

    <footer class="footer">

      <div class="container">

      	<div class="col-sm-6">

        	<p class="text-muted">&copy; 2016 Nsight. All rights reserved.</p>

        </div>

        <div class="col-sm-6">

          <p class="text-muted links footer-contact"><a href="<?php print $base_url; ?>/contactus#contact_form">Contact Us</a></p>

        </div>

        

      </div>

      <?php print render($page['footer']); ?>

    </footer>



		<!-- Javascript -->

    <!--<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.2/jquery.min.js"></script>-->

  	<script src="<?php print $path_to_theme; ?>/js/bootstrap.min.js"></script>

  	<script src="<?php print $path_to_theme; ?>/js/classie.js"></script>

    <script src="<?php print $path_to_theme; ?>/js/native.js"></script>

    <script src="<?php print $path_to_theme; ?>/js/common.js"></script>

