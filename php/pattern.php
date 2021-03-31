<?php
//program 1
echo "Program for printing star pattern <br>";
for ($i = 0; $i < 4; $i++) {
    for ($j = 3; $j > $i; $j--) echo "&nbsp&nbsp";
    for ($k = 0; $k <= $i; $k++) echo "*";
    echo "<br>";
}
//program 2
echo "Program for first 20 even numbers <br>";
$sum = 0;
for($i = 1; $i <= 20; $i++) {
    echo $sum = $sum + 2;
    echo "<br>";
}


?>