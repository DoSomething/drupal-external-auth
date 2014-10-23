<?php

/**
 * External Auth Login Controller interface.
 */
interface ExternalAuthLoginController
{
    public function setup(Array $form, Array &$form_state);
    public function loginExists();
    public function loginExistingUser();
    public function getRemoteUser();
    public function createFromRemote();
}
