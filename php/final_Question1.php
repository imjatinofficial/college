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
    $email = $_POST['email'];
    $contact = $_POST['contact'];
    $website = $_POST['website'];
    $message = $_POST['message'];
    $query = "INSERT INTO final VALUES ('$name', '$email', '$contact', '$website', '$message')";
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
        <caption style="background-color: black; color:white;">Contact Us</caption>
        <tr>
            <td><label>Name</label></td>
            <td><input type=text name=name required></td>
        </tr>
        <tr>
            <td><label>Email</label></td>
            <td><input type=email name=email required></td>
        </tr>
        <tr>
            <td><label>Contact Number</label></td>
            <td><input type=text name=contact required></td>
        </tr>
        <tr>
            <td><label>Website</label></td>
            <td><input type=text name=website required></td>
        </tr>
        <tr>
            <td><label>Message</label></td>
            <td><input type=text name=message required></td>
        </tr>
        <tr>
            <td><input type=submit name=submit required></td>
        </tr>
    </table>
</form>