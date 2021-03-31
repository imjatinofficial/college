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

    $id = $_POST['id'];
    $firstName = $_POST['firstName'];
    $lastName = $_POST['lastName'];
    $deptId = $_POST['deptId'];
    $email = $_POST['email'];
    $gender = $_POST['gender'];

    $query = "INSERT INTO employee (id, firstName, lastName, dept_id, email, gender) VALUES ('$id','$firstName', '$lastName', '$deptId', '$email', '$gender')";

    if (mysqli_query($conn, $query)) {
        echo "Records added successfully.";
    } else {
        echo "ERROR: could not able to execute $query" . mysqli_error($conn);
    }
    header('location:retrieve.php');
    mysqli_close($conn);
}
?>

<form action="" method="POST">
    <table>
        <tr>
            <td><input type=number name=id placeholder="Employee ID"></td>
        </tr>
        <tr>
            <td><input type=text name=firstName placeholder="First Name"></td>
        </tr>
        <tr>
            <td><input type=text name=lastName placeholder="Last Name"></td>
        </tr>
        <tr>
            <td><input type=number name=deptId placeholder="Department ID"></td>
        </tr>
        <tr>
            <td><input type=email name=email placeholder="Email Address"></td>
        </tr>
        <tr>
            <td><label>Gender:</label></td>
            <td>
                <input type=radio name=gender value=Male><label>Male</label>
                <input type=radio name=gender value=Female><label>Female</label>
            </td>
        </tr>
        <tr>
            <td><input type=submit value=Submit name=submit></td>
        </tr>
    </table>
</form>

