<?php
class NumArraySort{
    function __construct($a)
    {
        sort($a);
        print_r($a);
    }
}

$arr = array(11, -2, 4, 35, 0, 8, -9);
$a = new NumArraySort($arr);
?>