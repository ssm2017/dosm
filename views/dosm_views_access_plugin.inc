<?php

/**
 * Access plugin that provides property based access control.
 */
class dosm_access_plugin extends views_plugin_access {

  function summary_title() {
    return t('Dosm access plugin');
  }

// summary_title()

  /**
   * Determine if the current user has access or not.
   */
  function access($account) {
    return dosm_views_access($account);
  }

  function get_access_callback() {
    return array('dosm_views_access', array());
  }
}