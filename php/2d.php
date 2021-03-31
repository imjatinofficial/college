<?php
$a = array(
    array(1,2,3),
    array(6,7,8)
);
$sum = 0;
$mul = 1;
for ($i = 0; $i < sizeof($a); $i++) {
    for ($j = 0; $j < sizeof($a[$i]); $j++) {
        $sum = $sum + $a[$i][$j];
        $mul = $mul * $a[$i][$j]; 
    }
}

echo "Sum is : $sum <br> Multiplication is : $mul";
?>