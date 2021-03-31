<?php
if (isset($_POST['submit'])) {
    $taxCode = $_POST['taxCode'];
    $opCode = $_POST['opCode'];
    $currentNumber = $_POST['currentNumber'];
    $year = $_POST['year'];
    $leapYear = false;
    $cost = 0.0;
    $distance = $_POST['distance'];

    // a
    if ($taxCode == 'TC' || $taxCode == 'tc') echo "Character variable taxCode is 'TC'";
    else echo "Character variable taxCode is not 'TC'";
    // b
    if ($opCode == 1) echo "<br>Integer variable opCode is 1";
    else echo "<br>Integer variable opCode is not 1";
    // c
    if ($currentNumber % 2 == 1) {
        $currentNumber = $currentNumber * 3 + 1;
    } else {
        $currentNumber = $currentNumber / 2;
    }
    // d
    if ($year % 400 == 0 || $year % 100 == 0 || $year % 4 == 0) $leapYear = true;
    // e
    if ($distance >= 900) $cost = 12.00;
    else if ($distance >= 300) $cost = 10.00;
    else if ($distance >= 90) $cost = 8.00;
    else if ($distance >= 0) $cost = 5.00;

    echo "<br>currentNumber is set to: ", $currentNumber;
    echo "<br>leapYear is set to: ", $leapYear;
    echo "<br>Cost is set to: ", $cost;
}
?>

<form action="" method="POST">
<input type=text name=taxCode placeholder="TAX CODE"> <br>
<input type=text name=opCode placeholder="OP CODE"> <br>
<input type=text name=currentNumber placeholder="CURRENT NUMBER"> <br>
<input type=text name=year placeholder="YEAR"> <br>
<input type=text name=distance placeholder="DISTANCE"> <br>
<input type=submit name=submit>
</form>