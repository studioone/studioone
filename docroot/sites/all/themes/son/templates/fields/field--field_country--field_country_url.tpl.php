<?php

echo l($element[0]['#markup'], $element['#object']->field_url[ $element['#language'] ][0]['safe_value'], array('html' => TRUE, 'absolute' => TRUE));
?>