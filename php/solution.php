<?php
$operation = $_POST['operation'];
$num1 = $_POST['num1'];
$num2 = $_POST['num2'];
echo $num1,"&nbsp", $operation, "&nbsp", $num2, "&nbsp=&nbsp", calc($operation, $num1, $num2);
function calc($operation, $num1, $num2){
    if($operation == '*')return $num1 * $num2;
    else if($operation == "/") return $num1 / $num2;
    else if($operation == "-") return $num1 - $num2;
    return $num1 + $num2;
}
?>