<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "bca2018";
$conn = mysqli_connect($servername, $username, $password, $database);

if (!$conn) {
    die("database connection failed " . mysqli_connect_error());
}
echo "Connected successfully.<br>";

$result = mysqli_query($conn, "SELECT id, firstName, lastName, dept_id, email, gender FROM employee");
?>

<table border="1">
    <thead>
        <tr>
            <th>Employee_Id</th>
            <th>First_Name</th>
            <th>Last_Name</th>
            <th>Department_Id</th>
            <th>Email_Address</th>
            <th>Gender</th>
        </tr>
    </thead>
    <?php
    while ($row = mysqli_fetch_assoc($result)) { ?>
        <tr>
            <td><?php echo $row['id']; ?></td>
            <td><?php echo $row['firstName']; ?></td>
            <td><?php echo $row['lastName']; ?></td>
            <td><?php echo $row['dept_id']; ?></td>
            <td><?php echo $row['email']; ?></td>
            <td><?php echo $row['gender']; ?></td>
        </tr>
        <?php
            }
        ?>
</table>
<?php mysqli_close($conn); ?>