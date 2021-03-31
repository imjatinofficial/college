<?php
if (isset($_POST['submit'])) {
    $name = $_POST['name'];
    $contact = $_POST['contact'];
    if (empty($name)) 
        echo "Name cannot be empty<br>";
    else if(!preg_match("/^[a-zA-Z]*$/", $name))
        echo "Name can only contain characters<br>";
    else 
        echo "Name is $name <br>";

    if (empty($contact)) 
        echo "Contact No. cannot be empty<br>";
    else if(!preg_match("/^[0-9]*$/", $contact)) 
        echo "Contact No. can only contain Numbers<br>";
    else 
        echo "Contact No. is $contact <br>";

}
?>

<form action="" method="POST">
<input type=text name="name" placeholder="Name"><br>
<input type=text name="contact" placeholder="Contact No."><br>
<input type="submit" name="submit">
</form>