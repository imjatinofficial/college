<?php
class info
{
    protected $name, $roll, $age, $marks;
    function __construct($name, $roll, $age, $marks)
    {
        $this->name = $name;
        $this->roll = $roll;
        $this->age = $age;
        $this->marks = $marks;
    }
}
class result extends info
{
    function displayResult()
    {
        echo "Name : $this->name <br>Roll No. : $this->roll <br> Age : $this->age <br>Result : ";
        echo $this->marks / 5;
    }
}
if (isset($_POST['submit'])) {
    $name = $_POST['name'];
    $roll = $_POST['roll'];
    $age = $_POST['age'];
    $english = $_POST['english'];
    $hindi = $_POST['hindi'];
    $maths = $_POST['maths'];
    $science = $_POST['science'];
    $computer = $_POST['computer'];
    $marks = $english + $hindi + $maths + $science + $computer;
    $a = new result($name, $roll, $age, $marks);
    $a->displayResult();
}
?>
<table>
    <form action="" method=POST>
        <tr>
            <td><label>Name</label></td>
            <td><input type=text name=name></td>
        </tr>
        <tr>
            <td><label>Roll No.</label></td>
            <td><input type=number name=roll></td>
        </tr>
        <tr>
            <td><label>Age</label></td>
            <td><input type=number name=age></td>
        </tr>
        <tr>
            <td><label>English</label></td>
            <td><input type=number name=english></td>
        </tr>
        <tr>
            <td><label>Hindi</label></td>
            <td><input type=number name=hindi></td>
        </tr>
        <tr>
            <td><label>Maths</label></td>
            <td><input type=number name=maths></td>
        </tr>
        <tr>
            <td><label>Science</label></td>
            <td><input type=number name=science></td>
        </tr>
        <tr>
            <td><label>Computer</label></td>
            <td><input type=number name=computer></td>
        </tr>
        <tr>
            <td><input type=submit name=submit></td>
        </tr>
    </form>
</table>