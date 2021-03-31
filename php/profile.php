<?php
//  if user submitted the form
if (isset($_POST['submit'])){

    //  variables to store the mysql connection details
    $servername = 'localhost';
    $dbuser = "root";
    $dbpass = "";
    $dbname = "bca2018";

    //  connecting to database
    $conn = mysqli_connect($servername, $dbuser, $dbpass, $dbname);

    //  if failed to connect
    if (!$conn) {
        die("database connection failed " . mysqli_connect_error());
    }

    $username = $_POST['username']; //username passed in by the user in form
    $password = $_POST['password']; //password passed in by the user in form

    //  executing the query for checking if the user exists
    $query = "select * from logindata where username = '$username' and password = '$password'";
    $result = mysqli_query($conn, $query);

    //  if the user exists, create a session using the user id
    if($result != NULL) {
        $re = mysqli_fetch_assoc($result);
        $_SESSION['id'] = $re['id']; //session created using user id

        echo 'Username is ', $re['username'];   //printing the username
        echo '<br>Session id is ',  $_SESSION['id'];    //printing the session id
    }

    //  if the user does not exists
    else {
        echo "User Does Not Exist!";
    }

    //  closing the connection
    mysqli_close($conn);
}
?>