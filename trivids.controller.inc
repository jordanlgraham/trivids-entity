<?php
// $Id$

/**
 * @file
 * Specifies the controller class for TriVids.module
 *
 */
 
class TriVidsController extends DrupalDefaultEntityController{
	
/**
 * adds save function to this controller
 */
  public function save($trivids) {
    drupal_write_record('trivids', $trivids);
    field_attach_insert('trivids', $trivids);
    module_invoke_all('entity_insert', 'trivids', $trivids);
    return $trivids;
  }
}
