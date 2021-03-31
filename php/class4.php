<?php
class employee{
    protected $name, $age, $gender;
    function __construct($name, $age, $gender)
    {
        $this->name = $name;
        $this->age = $age;
        $this->gender = $gender;
    }
}
trait department{
    protected $department;
    function setDepartment($department)
    {
        $this->department = $department;
    }
}
class empData extends employee{
    use department;
    function displayData() {
        echo "Name : ", $this->name, "<br>Age : ", $this->age, "<br>Gender : ", $this->gender, "<br>Department : ", $this->department;   
    }
}

$emp1 = new empData("Tom", 21, "Male");
$emp1->setDepartment("Accounting");
$emp1->displayData();
?>