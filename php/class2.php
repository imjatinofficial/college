<?php
class circle
{
    function area($radius)
    {
        return (22 / 7) * $radius * $radius;
    }
}
if (isset($_POST['submit'])) {
    $a = new circle;
    $radius = $_POST['radius'];
    echo $a->area($radius);
}
?>

<form action="" method=POST>
    <label>radius</label>
    <input type=number name=radius>
    <input type=submit name=submit>
</form>