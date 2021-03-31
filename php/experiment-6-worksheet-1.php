<?php
class Calculator{
    protected $a, $b;
    function __construct($a, $b)
    {
        $this->a = $a;
        $this->b = $b;
    }

    function add(){
        return $this->a + $this->b;
    }

    function sub(){
        return $this->a - $this->b;
    }

    function mul(){
        return $this->a * $this->b;
    }

    function div(){
        return $this->a / $this->b;
    }
}

$obj = new Calculator(12, 5);
echo "Addition: ", $obj->add(), "<br>";
echo "Subtraction: ", $obj->sub(), "<br>";
echo "Multiplication: ", $obj->mul(), "<br>";
echo "Division: ", $obj->div(), "<br>";
?>