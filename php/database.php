<?php
if(isset($_POST['submit'])){
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database = "bca2018";
    $conn = mysqli_connect($servername,$username,$password,$database);

    if(!$conn) {
        die("database connection failed ".mysqli_connect_error());
    }
    echo "Connected successfully.<br>";
    $name = $_POST['name'];
    $id = $_POST['id'];
    $age = $_POST['age'];
    $query = "INSERT INTO student (id, name, age) VALUES ('$id', '$name', '$age')";
    if(mysqli_query($conn, $query)){
        echo "Records added successfully.";
    } else {
        echo "ERROR: could not able to execute $sql." . mysqli_error($conn);
    }
    mysqli_close($conn);
}
?>

<form action="" method="POST">
<table>
<tr>
<td><input type=text name=name placeholder="Name"></td>
</tr>
<tr>
<td><input type=number name=id placeholder="ID"></td>
</tr>
<tr>
<td><input type=number name=age placeholder="Age"></td>
</tr>
<tr>
<td><input type=submit name=submit></td>
</tr>
</table>
</form>