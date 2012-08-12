<?php
/**
 * @file
 * studio_programs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function studio_programs_taxonomy_default_vocabularies() {
  return array(
    'media_kit_categories' => array(
      'name' => 'Media Kit Categories',
      'machine_name' => 'media_kit_categories',
      'description' => 'Use media kit categories to group similar kits.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
      'metatags' => array(),
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
    'project_categories' => array(
      'name' => 'Project Categories',
      'machine_name' => 'project_categories',
      'description' => 'Use project categories to group similar projects.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'metatags' => array(),
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
    'sections' => array(
      'name' => 'Sections',
      'machine_name' => 'sections',
      'description' => 'Use sections to define to which area a piece of content belongs.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'metatags' => array(),
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
