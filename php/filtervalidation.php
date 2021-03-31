<?php

$a = "admin@trial.com";
if(mb_eregi("(\.)(com)", $a)) echo "True .com exists";
else echo ("False .com does not exists");


if (isset($_POST['submit'])){
$name = $_POST['name'];
$email = $_POST['email'];
$contact = $_POST['contact'];

if (filter_var($name, FILTER_VALIDATE_STRING)) echo ("$name is valid name.<br>");
else echo ("$name is invalid name.<br>");

if (filter_var($email, FILTER_VALIDATE_EMAIL)) echo ("$email is valid email address.<br>");
else echo ("$email is invalid email address.<br>");

if (filter_var($contact, FILTER_VALIDATE_INT)) echo ("$contact is valid contact.<br>");
else echo ("$contact is invalid contact.<br>");
}
?>

<form action="" method="POST">
<input type=text name=name placeholder="Name*">
<input type=text name=email placeholder="Email*">
<input type=text name=contact placeholder="Phone*">
<input type=submit value="Submit" name=submit>
</form>