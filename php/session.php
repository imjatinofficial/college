<?php
session_start();
if (isset($_POST['submit'])) {
    $_SESSION['name'] = $_POST['name'];
    $_SESSION['age'] = $_POST['age'];
    echo "Name is " . $_SESSION['name'] . "<br>Age is " . $_SESSION['age'];
}
?>

<form action="" method=POST>
    <table>
        <tr>
            <td><label>Name</label></td>
            <td><input type=text name=name></td>
        </tr><br>
        <tr>
            <td><label>Age</label></td>
            <td><input type=number name=age></td>
        </tr><br>
        <tr>
            <td><input type=submit name=submit></td>
        </tr>
    </table>
</form>