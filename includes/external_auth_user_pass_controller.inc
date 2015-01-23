<?php

/**
 * External User Pass Controller interface.
 */
interface ExternalAuthUserPassController
{
  public function ensure_local_user_exists(Array $form, Array &$form_state);
}
