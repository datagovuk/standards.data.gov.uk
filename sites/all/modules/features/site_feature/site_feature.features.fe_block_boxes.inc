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
  $fe_block_boxes->body = '<p class="lede">We need your help to set standards for software interoperability, data and document formats in government IT. These will follow <a href="https://www.gov.uk/government/publications/open-standards-principles/open-standards-principles#open-standards-principles">open standards principles</a> and will be applied across government to make services better for users and cheaper to run. Get involved in any of the 4 stages of the process for determining the <a href="/standards">adopted standards</a>.</p>

<h3>Four stages of setting open standards in government IT</h3>

<ol class="standard">
	<li class="criterion" id="criterion-1">
		<div class="point">
			<h4><a href="/challenges/suggested">Suggestion stage</a></h4>

			<p>We need you to suggest areas where users of government services face problems that might be solved by open standards. We\'ll assess suggestions as they come in, look at their possible benefits and read other users’ comments on them.</p>
		</div>

		<div class="guidance">
			<div><strong>How you can get involved:</strong></div>

			<div>&nbsp;</div>

			<div>• read other people’s suggestions</div>

			<div>• comment on a suggestion</div>

			<div>• make a suggestion</div>
		</div>
	</li>
	<li class="criterion" id="criterion-2">
		<div class="point">
			<h4><a href="/challenges">Response stage</a></h4>

			<p>A panel of technology experts will choose some suggestions to become challenges and appoint a challenge owner to act as a champion for each. We’ll publish those here so users can respond to them by recommending standards or approaches that might solve them.</p>
		</div>

		<div class="guidance">
			<div><strong>How you can get involved:</strong></div>

			<div>&nbsp;</div>

			<div>• read current challenges</div>

			<div>• make a response (offer a solution)</div>

			<div>• read other people’s responses to the challenges</div>

			<div>• comment on a response</div>
		</div>
	</li>
	<li class="criterion" id="criterion-3">
		<div class="point">
			<h4><a href="/challenges/evaluation">Proposal stage</a></h4>

			<p>The challenge owner will evaluate responses and draw on them to create proposals for solving each challenge. You can comment on these proposals, which will help the challenge owner and standards panel to assess them and identify 1 that they will submit to the Open Standards Panel for review.</p>
		</div>

		<div class="guidance">
			<div><strong>How you can get involved:</strong></div>

			<div>&nbsp;</div>

			<div>• read current proposals (for solutions to challenges)</div>

			<div>• comment on a proposed solution</div>
		</div>
	</li>
	<li class="criterion" id="criterion-4">
		<div class="point">
			<h4><a href="/challenges/adopted">Solution stage</a>&nbsp;</h4>

			<p>The Open Standards Board will review the proposal and decide whether its approach to solving a challenge and the open standard or collection of standards involved should be adopted across government.</p>
		</div>

		<div class="guidance">
			<div><strong>How you can get involved:</strong></div>

			<div>&nbsp;</div>

			<div>• see the challenge solutions that have been adopted for use across government</div>
		</div>
	</li>
</ol>

<div id="adopted-standards">
	<h3><a href="https://www.gov.uk/government/publications/open-standards-for-government">Adopted standards</a></h3>

	<p>See all the open standards that have been adopted across government, along with the challenges they’ve been used to address. The same standards are often adopted for solutions to different challenges. Similarly, 1 challenge can be solved using more than 1 standard.</p>
</div>
';

  $export['home_page_welcome_block'] = $fe_block_boxes;

  return $export;
}
