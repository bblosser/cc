<!DOCTYPE html>
<html>
<head>
<script src="/cdn-cgi/apps/head/0qgk9sTk1hPaj4RmmbOPMlTGE6w.js"></script><script type="text/javascript">
    window.cookieconsent_options = {"message":"Unsurprisingly, this website uses cookies for ads and traffic analysis.","dismiss":"Got it!","learnMore":"Learn more","link":"http://orteil.dashnet.org/cookieconsentpolicy.html","target":"_blank","theme":"http://orteil.dashnet.org/cookieconsent.css","domain":"dashnet.org"};
</script>

<script type="text/javascript" src="//cdnjs.cloudflare.com/ajax/libs/cookieconsent2/1.0.9/cookieconsent.min.js"></script>

<title>Cookie Clicker</title>
<!--
Code and graphics copyright Orteil, 2013-2017
Feel free to alter this code to your liking, but please do not re-host it, do not profit from it and do not present it as your own.
-->

<link rel="shortcut icon" href="img/favicon.ico" />
<!--<link href="https://fonts.googleapis.com/css?family=Kavoon&subset=latin,latin-ext" rel="stylesheet" type="text/css">-->
<link href='https://fonts.googleapis.com/css?family=Merriweather:900&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
<link href="style.css?v=2.0042" rel="stylesheet" type="text/css">
<!--[if IE]>
<style type="text/css">
	#ifIE9{display:block;}
</style>
<![endif]-->
<!--->
<meta name="viewport"
content="initial-scale=2.0,
maximum-scale=2.0,
minimum-scale=2.0,
height=device-height,
width=device-width,
target-densityDpi=device-dpi"/>
<!---->
<!--<meta name="viewport" content="width=250"/>-->
<!--<meta name="viewport" content="user-scalable=no, initial-scale=1, maximum-scale=1, minimum-scale=1, width=250, height=device-height, target-densitydpi=device-dpi"/>-->

<!--[if lt IE9]><script src="excanvas.compiled.js"></script><![endif]-->
<script src="base64.js"></script>
<script src="ajax.js"></script>
<script src="main.js?v=2.0042"></script>

</head>
<body>

<div id="wrapper">

	<div id="topBar">
		<div><b>Cookie Clicker</b>&trade; &copy; <a href="http://orteil.dashnet.org" target="_blank">Orteil</a>, 2017 - <a href="http://dashnet.org" target="_blank">DashNet</a></div>
		<div><a href="http://twitter.com/orteil42" target="_blank">twitter</a></div>
		<div><a href="http://orteil42.tumblr.com" target="_blank">tumblr</a></div>
		<div>Help? Bugs? Ideas? Check out the <a href="http://forum.dashnet.org" target="_blank">forum</a>!</div>
		<div style="position:relative;"><div style="width:25px;height:32px;background:url(img/weeHoodie.png);position:absolute;left:-2px;top:0px;pointer-events:none;"></div><a class="blueLink" href="http://www.redbubble.com/people/dashnet" target="_blank" style="padding-left:12px;">Cookie Clicker merch & stickers!</a></div>
		<div><a href="http://orteil.dashnet.org/randomgen/" target="_blank">RandomGen</a></div>
		<div id="links" class="hoverer">
			Other versions
			<div class="hoverable">
			<a href="../" target="_blank" id="linkVersionLive">Live version</a>
			<a href="beta" target="_blank" id="linkVersionBeta">Try the beta!</a>
			<a href="http://orteil.dashnet.org/cookieclicker/v10466" target="_blank" id="linkVersionOld">v. 1.0466</a>
			<a href="http://orteil.dashnet.org/experiments/cookie/" target="_blank">Classic</a>
			</div>
		</div>
	</div>

	<div id="game">
		<div id="javascriptError">
			<div id="loader">
				<div class="spinnyBig"></div>
				<div class="spinnySmall"></div>
				<div id="loading" class="title">Loading...</div>
				<div id="failedToLoad" class="title">This is taking longer than expected.<br>
				<div style="font-size:65%;line-height:120%;">Slow connection? If not, please make sure your javascript is enabled, then refresh.<br>
				If problems persist, this might be on our side - wait a few minutes, then hit ctrl+f5!</div></div>
				<div id="ifIE9" class="title" style="font-size:100%;line-height:120%;">Your browser may not be recent enough to run Cookie Clicker.<br>You might want to update, or switch to a more modern browser such as Chrome or Firefox.</div>
				<!--<div class="title">Oops, looks like we've got a problem.</div>
				<div>Please bear with us while we fix it.<br>Your save is safe, don't worry!</div>-->
			</div>
		</div>

		<canvas id="backgroundCanvas"></canvas>
		
		<div id="goldenCookie" class="goldenCookie"></div>
		<div id="seasonPopup" class="seasonPopup"></div>
		<div id="shimmers"></div>
		<div id="alert"></div>
		<div id="particles"></div>
		<div id="sparkles" class="sparkles"></div>
		<div id="notes"></div>
		<div id="darken"></div>
		<div id="toggleBox" class="framed prompt"></div><!-- tabindex="-1" -->
		<div id="promptAnchor"><div id="prompt" class="framed"><div id="promptContent"></div><div class="close" onclick="PlaySound('snd/tick.mp3');Game.ClosePrompt();">x</div></div></div>
		<div id="versionNumber" class="title"></div>
		<div id="ascend">
			<div id="ascendBG"></div>
			<div id="ascendZoomable"><div id="ascendContent"><div id="ascendUpgrades" style="position:absolute;"></div></div></div>
			<div id="ascendOverlay"></div>
		</div>
		
		<div id="debug"><div id="devConsole" class="framed"></div><div id="debugLog"></div></div>
		
		<div id="sectionLeft" class="inset">
			<canvas id="backgroundLeftCanvas" style="z-index:5;"></canvas>
			<div class="blackFiller"></div>
			<div class="blackGradient"></div>
			<div id="sectionLeftInfo"></div>
			<div id="cookies" class="title"></div>
			<div id="bakeryNameAnchor"><div id="bakeryName" class="title"></div></div>
			<div id="specialPopup" class="framed prompt offScreen"></div>
			<div id="buffs" class="crateBox"></div>
			<div id="cookieAnchor">
				<div id="bigCookie"></div>
				<div id="cookieNumbers"></div>
			</div>
			<div id="sectionLeftExtra"></div>
		</div>

		<div class="separatorLeft"></div>
		<div class="separatorRight"></div>

		<div id="sectionMiddle" class="inset">
			<div id="comments" class="inset title">
				<div id="prefsButton" class="button">Options</div>
				<div id="statsButton" class="button">Stats</div>
				<div id="logButton" class="button">Info</div>
				<div id="legacyButton" class="button">Legacy<div id="ascendMeterContainer" class="smallFramed meterContainer"><div id="ascendMeter" class="meter filling"></div></div><div class="roundedPanel" id="ascendNumber"></div><div id="ascendTooltip" class="framed"></div></div>
				<div id="commentsTextBelow" class="commentsText"></div>
				<div id="commentsText" class="commentsText"></div>
				<div class="separatorBottom"></div>
			</div>
			<div id="centerArea">
				<div id="buildingsTitle" class="inset title zoneTitle">Buildings</div>
				<div id="rows"></div>
				<div id="menu"></div>
				<div id="donateBox">
					<form target="_blank" action="https://www.paypal.com/cgi-bin/webscr" method="post" id="donate" style="margin:0px 16px;">
					<input type="hidden" name="cmd" value="_s-xclick">
					<input type="hidden" name="hosted_button_id" value="BBN2WL3TC6QH4">
					<input type="image" src="https://www.paypalobjects.com/en_GB/i/btn/btn_donate_LG.gif" border="0" name="submit" alt="PayPal — The safer, easier way to pay online.">
					<img alt="" border="0" src="https://www.paypalobjects.com/nl_NL/i/scr/pixel.gif" width="1" height="1">
					</form>
					Help us keep developing the game!
				</div>
			</div>
		</div>

		<div id="sectionRight" class="inset">
			<div id="store">
				<div id="storeTitle" class="inset title zoneTitle">Store</div>
				<div id="toggleUpgrades" class="storeSection upgradeBox"></div>
				<div id="techUpgrades" class="storeSection upgradeBox"></div>
				<div id="upgrades" class="storeSection upgradeBox"></div>
				<div id="products" class="storeSection"></div>
			</div>
			
			
			<div id="support" style="margin-top:130px;">
				<div class="supportComment">Sponsored links</div>
				<div style="position:relative;">
				
					<div style="position:relative;z-index:100;min-height:250px;">
					
						<!-- Google ad -->
						<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
						<!-- Cookie Clicker Rectangle -->
						<ins class="adsbygoogle"
							 style="display:inline-block;width:300px;height:250px"
							 data-ad-client="ca-pub-8491708950677704"
							 data-ad-slot="9349826096"></ins>
						<script>
						(adsbygoogle = window.adsbygoogle || []).push({});
						</script>
						
						<div style="height:16px;"></div>
						
						<!-- Google ad -->
						<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
						<!-- Cookie Clicker Rectangle -->
						<ins class="adsbygoogle"
							 style="display:inline-block;width:300px;height:250px"
							 data-ad-client="ca-pub-8491708950677704"
							 data-ad-slot="9349826096"></ins>
						<script>
						(adsbygoogle = window.adsbygoogle || []).push({});
						</script>
						
						<div style="height:16px;"></div>
						
						<!-- AdventureQuest Worlds banner -->
						<a class="ad" id="aqad" href="http://www.aq.com/landing/cookie/?utm_campaign=AQW_CookieClicker&utm_source=CookieClicker" target="_blank" title="AdventureQuest Worlds" style="background:url(img/aqworldsbanner.jpg) no-repeat;width:300px;height:64px;display:block;position:relative;margin:0px auto;">
						</a>
						
					</div>
					
				</div>
			</div>
		</div>
		<!--
		<div id="sectionAd" class="inset">
		
			<div class="supportComment">Sponsored links</div>
			<div style="position:relative;">
				<div class="supportPlaceholder">
					<div>(Normally, there would be an ad here. It's fine if you want to block it, but remember - Cookie Clicker only happens because of ad revenue!)</div>
				</div>
				<div style="position:relative;z-index:100;">
					<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
					<ins class="adsbygoogle"
						 style="display:inline-block;width:160px;height:600px"
						 data-ad-client="ca-pub-8491708950677704"
						 data-ad-slot="8643839697"></ins>
					<script>
					(adsbygoogle = window.adsbygoogle || []).push({});
					</script>
				</div>
			</div>
		
		</div>
		-->
		
		<div id="focusButtons">
			<div id="focusLeft" class="title">Cookie</div>
			<div id="focusMiddle" class="title" style="font-size:80%;padding-top:18px;padding-bottom:14px;">Buildings</div>
			<div id="focusRight" class="title">Store</div>
			<div id="focusMenu" class="title">Menu</div>
		</div>
		<div id="compactOverlay" class="title">
			<div id="compactCommentsText" class="commentsText"></div>
			<div id="compactCookies"></div>
			<div class="separatorBottom"></div>
		</div>
		
		<div id="tooltipAnchor"><div id="tooltip" class="framed" onMouseOut="Game.tooltip.hide();"></div></div>

	</div>

</div>

</body>
</html>
