<?php
/**
 * @file
 * studio_team.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function studio_team_taxonomy_default_vocabularies() {
  return array(
    'team_member_types' => array(
      'name' => 'Team Member Types',
      'machine_name' => 'team_member_types',
      'description' => 'Use team member types to define what type of employee someone is.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
