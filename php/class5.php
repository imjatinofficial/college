<?php
class A{
    protected $x;
    function __construct($x, $y)
    {
        $this->x = $x;
        echo "Multiplication (A) : ", $x * $y;
    }
}

class B extends A{
    function sumB($z) {
        echo "<br> Sum (B) : ", $this->x + $z;
    }
}

$obj = new B(4, 5);
$obj->sumB(10);
?>