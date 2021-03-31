<?php
if (isset($_POST['submit'])) {
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database = "bca2018";
    $conn = mysqli_connect($servername, $username, $password, $database);

    if (!$conn) {
        die("database connection failed " . mysqli_connect_error());
    }
    echo "Connected successfully.<br>";

    $name = $_POST['name'];
    $age = $_POST['age'];
    $address = $_POST['address'];
    $email = $_POST['email'];
    $gender = $_POST['gender'];

    $query = "INSERT INTO employee (name, age, address, email, gender) VALUES ('$name', '$age', '$address', '$email', '$gender')";

    if (mysqli_query($conn, $query)) {
        echo "Records added successfully.";
    } else {
        echo "ERROR: could not able to execute $query" . mysqli_error($conn);
    }

    mysqli_close($conn);
}
?>

<form action="" method="POST">
    <table>
        <tr>
            <td><label>Name:</label></td>
            <td><input type=text name=name></td>
        </tr>
        <tr>
            <td><label>Age:</label></td>
            <td><input type=number name=age></td>
        </tr>
        <tr>
            <td><label>Address:</label></td>
            <td><input type=text name=address></td>
        </tr>
        <tr>
            <td><label>Email:</label></td>
            <td><input type=email name=email></td>
        </tr>
        <tr>
            <td><label>Gender:</label></td>
            <td>
                <input type=radio name=gender value=male><label>Male</label>
                <input type=radio name=gender value=female><label>Female</label>
            </td>
        </tr>
        <tr>
            <td><input type=submit value=Submit name=submit></td>
        </tr>
    </table>
</form>