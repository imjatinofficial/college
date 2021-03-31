<?php
if (isset($_POST['submit'])) {
    $a = $_POST['a'];
    $b = $_POST['b'];
    $pallindrome = $_POST['pallindrome'];
    $rev = $_POST['rev'];
    echo "sum of a and b is <b>", $a+$b;
    if ($pallindrome == strrev($pallindrome)) echo "<br>", $pallindrome, "</b> is pallindromic";
    else echo "<br>", $pallindrome, "</b> is not pallindromic";
    echo "<br>reverse of <b>",$rev, "</b> is <b>", strrev($rev), "</b>";
    
}
?>

<form action="" method="POST">
    <input type="number" name=a placeholder="a">
    <input type="number" name=b placeholder="b"><br>
    <input type="number" name=pallindrome placeholder="pallindrome number"><br>
    <input type="text" name=rev placeholder="reverse string"><br>
    <input type=submit name="submit">
</form>