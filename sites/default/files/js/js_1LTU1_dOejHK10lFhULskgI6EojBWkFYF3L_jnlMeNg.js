(function ($) {

function extlinkAttach(context) {
  // Strip the host name down, removing ports, subdomains, or www.
  var pattern = /^(([^\/:]+?\.)*)([^\.:]{4,})((\.[a-z]{1,4})*)(:[0-9]{1,5})?$/;
  var host = window.location.host.replace(pattern, '$3$4');
  var subdomain = window.location.host.replace(pattern, '$1');

  // Determine what subdomains are considered internal.
  if (Drupal.settings.extlink.extSubdomains) {
    var subdomains = "([^/]*\\.)?";
  }
  else if (subdomain == 'www.' || subdomain == '') {
    var subdomains = "(www\\.)?";
  }
  else {
    var subdomains = subdomain.replace(".", "\\.");
  }

  // Build regular expressions that define an internal link.
  var internal_link = new RegExp("^https?://" + subdomains + host, "i");

  // Extra internal link matching.
  var extInclude = false;
  if (Drupal.settings.extlink.extInclude) {
    extInclude = new RegExp(Drupal.settings.extlink.extInclude.replace(/\\/, '\\'));
  }

  // Extra external link matching.
  var extExclude = false;
  if (Drupal.settings.extlink.extExclude) {
    extExclude = new RegExp(Drupal.settings.extlink.extExclude.replace(/\\/, '\\'));
  }

  // Extra external link CSS selector exclusion.
  var extCssExclude = false;
  if (Drupal.settings.extlink.extCssExclude) {
    extCssExclude = Drupal.settings.extlink.extCssExclude;
  }

  // Extra external link CSS selector explicit.
  var extCssExplicit = false;
  if (Drupal.settings.extlink.extCssExplicit) {
    extCssExplicit = Drupal.settings.extlink.extCssExplicit;
  }

  // Find all links which are NOT internal and begin with http (as opposed
  // to ftp://, javascript:, etc. other kinds of links.
  // When operating on the 'this' variable, the host has been appended to
  // all links by the browser, even local ones.
  // In jQuery 1.1 and higher, we'd use a filter method here, but it is not
  // available in jQuery 1.0 (Drupal 5 default).
  var external_links = new Array();
  var mailto_links = new Array();
  $("a:not(." + Drupal.settings.extlink.extClass + ", ." + Drupal.settings.extlink.mailtoClass + "), area:not(." + Drupal.settings.extlink.extClass + ", ." + Drupal.settings.extlink.mailtoClass + ")", context).each(function(el) {
    try {
      var url = this.href.toLowerCase();
      if (url.indexOf('http') == 0 
            && (!url.match(internal_link) || (extInclude && url.match(extInclude))) 
            && !(extExclude && url.match(extExclude)) 
            && !(extCssExclude && $(this).parents(extCssExclude).length > 0)
            && !(extCssExplicit && $(this).parents(extCssExplicit).length < 1)) {
        external_links.push(this);
      }
      // Do not include area tags with begin with mailto: (this prohibits
      // icons from being added to image-maps).
      else if (this.tagName != 'AREA' 
            && url.indexOf('mailto:') == 0 
	    && !(extCssExclude && $(this).parents(extCssExclude).length > 0)
	    && !(extCssExplicit && $(this).parents(extCssExplicit).length < 1)) {
        mailto_links.push(this);
      }
    }
    // IE7 throws errors often when dealing with irregular links, such as:
    // <a href="node/10"></a> Empty tags.
    // <a href="http://user:pass@example.com">example</a> User:pass syntax.
    catch(error) {
      return false;
    }
  });

  if (Drupal.settings.extlink.extClass) {
    // Apply the "ext" class to all links not containing images.
    if (parseFloat($().jquery) < 1.2) {
      $(external_links).not('[img]').addClass(Drupal.settings.extlink.extClass).each(function() { if ($(this).css('display') == 'inline') $(this).after('<span class=' + Drupal.settings.extlink.extClass + '></span>'); });
    }
    else {
      $(external_links).not($(external_links).find('img').parents('a')).addClass(Drupal.settings.extlink.extClass).each(function() { if ($(this).css('display') == 'inline') $(this).after('<span class=' + Drupal.settings.extlink.extClass + '></span>'); });
    }
  }

  if (Drupal.settings.extlink.mailtoClass) {
    // Apply the "mailto" class to all mailto links not containing images.
    if (parseFloat($().jquery) < 1.2) {
      $(mailto_links).not('[img]').addClass(Drupal.settings.extlink.mailtoClass).each(function() { if ($(this).css('display') == 'inline') $(this).after('<span class=' + Drupal.settings.extlink.mailtoClass + '></span>'); });
    }
    else {
      $(mailto_links).not($(mailto_links).find('img').parents('a')).addClass(Drupal.settings.extlink.mailtoClass).each(function() { if ($(this).css('display') == 'inline') $(this).after('<span class=' + Drupal.settings.extlink.mailtoClass + '></span>'); });
    }
  }

  if (Drupal.settings.extlink.extTarget) {
    // Apply the target attribute to all links.
    $(external_links).attr('target', Drupal.settings.extlink.extTarget);
  }

  if (Drupal.settings.extlink.extAlert) {
    // Add pop-up click-through dialog.
    $(external_links).click(function(e) {
     return confirm(Drupal.settings.extlink.extAlertText);
    });
  }

  // Work around for Internet Explorer box model problems.
  if (($.support && !($.support.boxModel === undefined) && !$.support.boxModel) || ($.browser.msie && parseInt($.browser.version) <= 7)) {
    $('span.ext, span.mailto').css('display', 'inline-block');
  }
}

Drupal.behaviors.extlink = {
  attach: function(context){
    extlinkAttach(context);
  }
}

})(jQuery);
;
/**
 * @file
 * Set the adaptive image cookie based on the window size
 *
 */

// For older browsers that don't support filter()
if (!Array.prototype.filter)
{
  Array.prototype.filter = function(fun /*, thisp */)
  {
    "use strict";

    if (this == null)
      throw new TypeError();

    var t = Object(this);
    var len = t.length >>> 0;
    if (typeof fun != "function")
      throw new TypeError();

    var res = [];
    var thisp = arguments[1];
    for (var i = 0; i < len; i++)
    {
      if (i in t)
      {
        var val = t[i]; // in case fun mutates this
        if (fun.call(thisp, val, i, t))
          res.push(val);
      }
    }

    return res;
  };
}


/**
 * Set the cookie with the width value
 */
(function ($) {
  Drupal.behaviors.ais = function () {
    /*
      First, get the actual browser size.
      window.outerWidth/outerHeight answers honestly on Android devices, dishonestly on iOS, and not at all in IE
      window.screen.availWidth/availHeight answers honestly on iOS devices, dishonestly on Android, and not at all in pre-html5 browsers
      $(window).width()/height() will always answer (thanks jQuery!) and is the fall back
    */
    var width = [ window.outerWidth, window.screen.availWidth, $(window).width()];
    var height = [ window.outerHeight, window.screen.availHeight, $(window).height()];
    
    width = width.filter(Number);
    height = height.filter(Number);

    var width = Math.min.apply( Math, width);
    var height = Math.min.apply( Math, height);

    /* Select a method for determining the size */
    var size = width;
    if (Drupal.settings.ais_method == 'both-max') {
      size = Math.max( width, height );
    } else if (Drupal.settings.ais_method == 'both-min') {
      size = Math.min( width, height );
    } else if (Drupal.settings.ais_method == 'width') {
      size = width;
    } else if (Drupal.settings.ais_method == 'height') {
      size = height;
    }

    /* Match an image style and set the cookie */
    var style = Drupal.settings.ais[0];
    for (i in Drupal.settings.ais) {
       if (Number(Drupal.settings.ais[i].size) < size && Number(Drupal.settings.ais[i].size) > Number(style.size)) {
         style = Drupal.settings.ais[i];
       }
    }
    if (style) {
      document.cookie='ais='+style.name+'; path=/';
    } else {
      document.cookie='ais=;path=/;expires=Thu, 01-Jan-1970 00:00:01 GMT';
    }
  }
  $(window).resize(Drupal.behaviors.ais);
}(jQuery));

  // Call the cookie set function right away
  Drupal.behaviors.ais();

;
