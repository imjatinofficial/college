<?php
$a = array(1,2,3,4,5,6,7,8,9,10);
$sum = 0;
$mul = 1;
for ($i = 0; $i < sizeof($a); $i++) {
    $sum = $sum + $a[$i];
    $mul = $mul * $a[$i];
}
echo "Sum is : $sum <br> Multiplication is : $mul";
?>