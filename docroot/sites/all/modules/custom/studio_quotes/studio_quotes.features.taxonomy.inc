<?php
/**
 * @file
 * studio_quotes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function studio_quotes_taxonomy_default_vocabularies() {
  return array(
    'quote_categories' => array(
      'name' => 'Quote Categories',
      'machine_name' => 'quote_categories',
      'description' => 'Use quote categories to add context to quotes in the site\'s quote archive.',
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
