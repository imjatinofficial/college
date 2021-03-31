<?php
class rectangle {
    public $l = 4;
    public $b = 5;
    function perimeter(){
        return 2 * ($this->l + $this->b);
    }
    function area(){
        return $this->l * $this->b;
    }
}

$rect = new rectangle;
echo "perimeter - ";
echo $rect->perimeter();
echo "<br>area - ";
echo $rect->area();
?>