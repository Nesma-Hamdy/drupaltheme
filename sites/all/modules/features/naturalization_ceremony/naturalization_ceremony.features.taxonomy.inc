<?php
/**
 * @file
 * naturalization_ceremony.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function naturalization_ceremony_taxonomy_default_vocabularies() {
  return array(
    'announcement_type' => array(
      'name' => 'Announcement Type',
      'machine_name' => 'announcement_type',
      'description' => 'Type of announcements such as News, Notices from the Clerk or Press Releases',
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
