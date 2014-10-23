<?php

/**
 * External Auth Register Controller interface.
 */
interface ExternalAuthRegisterController
{
  public function setup(Array $form, Array &$form_state);
  public function signup();
  public function processSignupErrors(Array $form);
}
