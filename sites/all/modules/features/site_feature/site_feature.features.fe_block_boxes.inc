<?php
/**
 * @file
 * site_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function site_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home page welcome block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_page_welcome_block';
  $fe_block_boxes->body = '<p class="lede">We need your help to set <a href="https://www.gov.uk/government/publications/open-standards-principles/open-standards-principles">open standards</a> for software interoperability, data and document formats in government IT that follow <a href="https://www.gov.uk/government/publications/open-standards-principles/open-standards-principles#open-standards-principles">open standards principles</a>. These open standards will be applied across government to make services better for users and cheaper to run.</p>

<h3>Five stages of setting open standards in government IT</h3>

<ol class="standard">
	<li class="criterion" id="criterion-1">
		<div class="point">
			<h4><a href="/challenges/suggested">Suggestion stage</a></h4>

			<p>We need users to suggest areas where users of government services face problems that might be solved by open standards. We‘ll assess suggestions as they come in, look at their possible benefits and read other users’ comments on them.</p>
		</div>

		<div class="guidance">
			<div>Read suggestions other people have made and get involved by:</div>

			<div>&nbsp;</div>

			<div>• commenting on a suggestion</div>

			<div>• making a suggestion</div>
		</div>
	</li>
	<li class="criterion" id="criterion-2">
		<div class="point">
			<h4><a href="/challenges">Response stage</a></h4>

			<p>We’ll choose some suggestions to become challenges and appoint a challenge owner to act as a champion for each. We’ll publish those here so users can respond to them by suggesting standards or approaches that might solve them.</p>
		</div>

		<div class="guidance">
			<div>Read current challenges and responses other people have made to them and get involved by:</div>

			<div>&nbsp;</div>

			<div>• making a response (offering a solution)</div>

			<div>• commenting on a response</div>
		</div>
	</li>
	<li class="criterion" id="criterion-3">
		<div class="point">
			<h4><a href="/challenges/evaluation">Proposal stage</a></h4>

			<p>The challenge owner will evaluate responses to create one or more proposals for solving each challenge. You can comment on proposals to help us identify which will work best, or if there’s another proposal that might work better.</p>
		</div>

		<div class="guidance">
			<div>Read proposals for solutions to the challenges and get involved by:</div>

			<div>&nbsp;</div>

			<div>• commenting on a proposed solution</div>
		</div>
	</li>
	<li class="criterion" id="criterion-4">
		<div class="point">
			<h4><a href="/challenges/adopted">Standards profile stage</a>&nbsp;</h4>

			<p>The challenge owner will select 1 proposed solution for the challenge and create a standards profile to submit to the Open Standards Board. The board will review the profile and decide whether to it will be adopted as an open standard.</p>
		</div>

		<div class="guidance">See challenges that have been solved and learn what standards have been adopted.</div>
	</li>
	<li class="criterion" id="criterion-5">
		<div class="point">
			<h4><a href="/standards">Adopted standards</a></h4>

			<p>The same open standards for government IT are often adopted for different challenges. Similarly, 1 challenge can be solved using more than 1 standard. We list standards here along with the challenges they’ve been used to address.</p>
		</div>

		<div class="guidance">See standards that have been adopted.</div>
	</li>
</ol>
';

  $export['home_page_welcome_block'] = $fe_block_boxes;

  return $export;
}
