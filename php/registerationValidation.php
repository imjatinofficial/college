<?php
if (isset($_POST['submit'])) {
    $userid = $_POST['userid'];
    $password = $_POST['password'];
    $name = $_POST['name'];
    $country = $_POST['country'];
    $sex = $_POST['sex'];
    $language = $_POST['language'];
    $zipcode = $_POST['zipcode'];
    $email = $_POST['email'];

    if (empty($userid)) echo "Must enter User id <br>";
    elseif(!preg_match("/^([A-Za-z0-9]{5,12})$/", $userid)) echo "User id must contain characters and numbers only <br>";
    else echo "user id is $userid <br>";

    if (empty($password)) echo "Must enter password <br>";
    elseif(!preg_match("/^([A-Za-z0-9]{7,12})$/", $password)) echo "Password must contain characters and numbers only <br>";
    else echo "password is $password <br>";

    if (empty($name)) echo "Must enter Name <br>";
    elseif(!preg_match("/^([A-Za-z])+$/", $name)) echo "Name must contain characters only <br>";
    else echo "name is $name <br>";

    if (empty($country)) echo "Must select country <br>";
    else echo "country is $country <br>";

    if (empty($zipcode)) echo "Must enter zipcode <br>";
    elseif(!preg_match("/^([0-9]{6})$/", $zipcode)) echo "Zipcode must contain 6 digits only<br>";
    else echo "zipcode is $zipcode <br>";

    if (empty($email)) echo "Must enter email <br>";
    elseif(!preg_match("/^([a-zA-Z0-9_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]{2,5})$/", $email)) echo "email is invalid <br>";
    else echo "email is $email <br>";

    if (empty($sex)) echo "Must select gender <br>";
    else echo "Gender is $sex <br>";

    if (empty($language)) echo "Must select language";
    else echo "language is $language <br>";
}
?>




<form action="" method="POST">
    <table>
        <tr>
            <td><label>User ID: </label></td>
            <td><input type=text name=userid></td>
        </tr>
        <tr>
            <td><label>Password: </label></td>
            <td><input type=text name=password></td>
        </tr>
        <tr>
            <td><label>Name: </label></td>
            <td><input type=text name=name></td>
        </tr>
        <tr>
            <td><label>Address: </label></td>
            <td><input type=text name=address></td>
        </tr>
        <tr>
            <td><label>Country: </label></td>
            <td>
                <select name=country>
                    <option value="india" selected>India</option>
                    <option value="russia">Russia</option>
                    <option value="usa">USA</option>
                    <option value="australia">Australia</option>
                    <option value="germany">Germany</option>
                </select>
            </td>
        </tr>
        <tr>
            <td><label>ZIP Code: </label></td>
            <td><input type=text name=zipcode></td>
        </tr>
        <tr>
            <td><label>Email: </label></td>
            <td><input type=text name=email></td>
        </tr>
        <tr>
            <td><label>Sex: </label></td>
            <td>
                <input type=radio name=sex checked><span>Male</span>
                <input type=radio name=sex><span>Female</span>
            </td>
        </tr>
        <tr>
            <td><label>Language: </label></td>
            <td>
                <input type="radio" name="language" checked value="en" /><span>English</span>
                <input type="radio" name="language" value="nonen" /><span>Non - English</span>
            </td>
        </tr>
        <tr>
            <td><label>About: </label></td>
            <td><input type=text name=about></td>
        </tr>
        <tr><td>
            <input type=submit name=submit value="Submit"></td>
        </tr>
    </table>
</form>