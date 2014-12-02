<?php

/**
 * External Profile Sync Controller interface.
 */
interface ExternalAuthProfileSyncController
{
  public function setup(Array $form, Array &$form_state);
  public function sync();
  public function processRemoteErrors(Array $form);
}
