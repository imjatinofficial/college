<?php
if (isset($_POST['submit'])) {
    $n = $_POST['n'];
    $f = $_POST['fibo'];
    $prime = $_POST['prime'];
    function fact($n)
    {
        if ($n <= 1) return 1;
        return $n * fact($n - 1);
    }

    echo "factorial of ", $n, " is ", fact($n);

    $first = 0;
    $second = 1;
    $third = 1;
    echo "<br> 0, 1,";
    for ($i = 1; $i <= $f; $i++){
        $third = $first + $second;
        $second = $first;
        $first = $third;
        echo $third, ", ";
    }
    
    echo "are the first ", $f, " fibonacci numbers.<br>";

    $count = 0;
    $i = 2;
    while ($count < $prime) {
        $isprime = true;
        for ($j = 2; $j <= $i/2; $j++) {
            if ($i%$j == 0){
                $isprime = false;
            }
        }
        if ($isprime) {
            echo $i, ", ";
            $count++;     
        }
        $i++;
    }
    echo " are the first ", $prime, " numbers.";
}
?>

<form action="" method="POST">
    <input type=number name=n placeholder="Factorial" width="50"><br>
    <input type=number name=fibo placeholder="No. of fib numbers"><br>
    <input type=number name=prime placeholder="How many prime numbers"><br>
    <input type="submit" name='submit'>
</form>