<?php
class library{
    public $name, $price, $branch, $doi; 
    public function __construct($name, $price, $branch, $doi) {
        $this->name = $name;
        $this->price = $price;
        $this->branch = $branch;
        $this->doi = $doi;
    }

    public function __destruct()
    {
        echo $this->name;
        echo "<br>";
        echo $this->price;
        echo "<br>";
        echo $this->branch;
        echo "<br>";
        echo $this->doi;
        echo "<br>";
    }
}

$got = new library("A Game of Thrones", 2000, "Literature", "1 October 2020");
?>