(function (n) {
  var u = window.location.href;
  var p = u.split("/")[0];
  var t = n.createElement("script"), i;
  t.type = "text/javascript";
  t.async = !0;
  t.src = p + "//dashboard.whoisvisiting.com/who.js";
  i = n.getElementsByTagName("script")[0];
  i.parentNode.insertBefore(t, i)
})(document);

var whoparam = whoparam || [];
whoparam.push(["AcNo", Drupal.settings.whoisvisiting.account_number]);
whoparam.push(["SendHit", ""]);
