<?php
$a = 33;
$b = 11;
$c = 10;
if($a > $b){
    if($a > $c) echo ("$a is greatest.");
    else echo ("$c is greatest");
}
else if($b > $c) echo ("$b is greatest");
else echo ("$c is greatest");
?>