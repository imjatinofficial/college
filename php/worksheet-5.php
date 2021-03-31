<?php
$arr = array("Seeta"=>"31","Geeta"=>"41","Jeetu"=>"39","Ramesh"=>"40");
asort($arr);
echo "<br>Ascending order sorting by value.";
print_r($arr);
ksort($arr);
echo "<br>Ascending order sorting by key.";
print_r($arr);
arsort($arr);
echo "<br>Descending order sorting by value.";
print_r($arr);
krsort($arr);
echo "<br>Descending order sorting by key.";
print_r($arr);
echo "<br>Unique names:<br>";
$arr1 = array("Raman", "Sita", "Geeta");
$arr2 = array("Geeta", "Sophia", "Sita");
print_r(array_unique(array_merge($arr1, $arr2)));
?>