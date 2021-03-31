<html>
<head>
	<title></title>
</head>
<body>
	<form method="POST" action="exp9.php">
		<label> name </label>
		<input type="text" name="name" placeholder="enter the name">
		<br>
		<br>
		<br>
		<br>
		<label> user id  </label>
		<input type="text" name="userid"placeholder="enter the userid">
		<br>
		<br>
		<br>
		<label> user password   </label>
		<input type="password" name="userpass"placeholder="enter the user password ">
		<br>
		<br>
		<br>
		<label> gender </label>
		<br>
		<br>
         <input type="radio" id="male" name="gender" value="male">
         <label for="male">Male</label><br>
         <input type="radio" id="female" name="gender" value="female">
         <label for="female">Female</label>
         <br>
         <br>
         <br>
         <br>
         <br>
		<label> phone number </label>
		<input type="text" name="n1"placeholder="enter the phone">
		<br>
		<br>
		<br>
		<br>
		<br>
		<br>
		<label>Zip code </label>
		<input type="text" name="zipcode" placeholder="enter zip code">
		<br>
		<br>
		<br>
		<br>
		<br>
		<br>
		<label>email </label>
		<input type="text" name="email"placeholder="enter the email">
		<br>
		<br>
		<br>
		<br>

		<label>website </label>
		<input type="text" name="website"placeholder="enter the url">
		<br>
		<br>
		<br>

		<input type="submit" name="submit" value="click me ">
		
	</form>

</body>
</html>

<?php 

$name=$_POST["name"];
$uid=$_POST["userid"];
$pass=$_POST["userpass"];
$number=$_POST["n1"];
$email=$_POST["email"];
$website=$_POST["website"];
$zip=$_POST["zipcode"];
$gender=$_POST["gender"];

if(empty($name))
{
	echo"you have to input name ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
elseif(!preg_match("/^([A-Za-z])+$/", $name))
{
	echo "you must contain alphbat  only ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $name;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
if(empty($uid))
{
	echo"you have to input uid ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
elseif(!preg_match("/^([A-Za-z0-9]{5,12})$/", $uid))
{
	echo "you must contain 5 to 12 char ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $uid;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
if(empty($pass))
{
	echo"you have to input uid ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
elseif(!preg_match("/^([A-Za-z0-9]{7,12})$/", $pass))
{
	echo "you must contain 7 to 12 char ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $pass;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
if(empty($number))
{
	echo"you have to input number";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";echo "<br>";


}
elseif(!preg_match("/^([0-9]{10})$/", $number))
{
	echo "you must contain number (10 number) only ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $number;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";


}
if(empty($email))
{
	echo"you have to input email ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
elseif(!preg_match("/^([a-zA-Z0-9_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]{2,5})$/", $email))
{
	echo "you must contain email only ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $email;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
if(empty($website))
{
	echo"you have to input name ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
elseif(!preg_match("/^((https?|ftp|smtp):\/\/)?(www.)?[a-z0-9]+\.[a-z]+(\/[a-zA-Z0-9#]+\/?)*$/", $website))
{
	echo "you must contain website only ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $website;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
if(empty($gender))
{
	echo"you have to  gender plz";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}

else
{
	echo $gender;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
if(empty($zip))
{
	echo"you have to input number";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";echo "<br>";


}
elseif(!preg_match("/^([0-9]{10})$/", $zip))
{
	echo "you must contain number (10 number) only ";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";

}
else
{
	echo $zip;
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";
	echo "<br>";


}

 ?>