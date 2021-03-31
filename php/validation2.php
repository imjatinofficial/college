<?php
if (isset($_POST['submit'])) {
    $name = $_POST['name'];
    $contact = $_POST['contact'];
    $email = $_POST['email'];
    $url = $_POST['url'];
    if (empty($name)) 
        echo "Name cannot be empty<br>";
    else if(!preg_match("/^[a-zA-Z]*$/", $name))
        echo "Name can only contain characters<br>";
    else 
        echo "Name is $name <br>";

    if (empty($email)) 
        echo "Email cannot be empty<br>";
    else if(!preg_match("/^([a-z0-9A-Z_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]{2-5})$/", $email)) 
        echo "Email is invalid.<br>";
    else 
        echo "Email is $email <br>";
    
    if (empty($url)) 
        echo "URL cannot be empty<br>";
    else if(!preg_match("/^((https?|ftp|smtp):\/\/)?(www.)?[a-z0-9A-Z]+\.[a-zA-Z]+(\/[a-zA-Z0-9#]+\/?)*$/", $url)) 
        echo "URL is invalid.<br>";
    else 
        echo "URL is $url <br>";

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
<input type=text name="email" placeholder="Email"><br>
<input type=text name="url" placeholder="Website URL"><br>
<input type=text name="contact" placeholder="Contact No."><br>
<input type="submit" name="submit">
</form>