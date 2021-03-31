
<?php
    $targetfolder = "/Applications/code/college/php/fileupload/";
    $targetfolder = $targetfolder . basename($_FILES['file']['name']);
    move_uploaded_file($_FILES['file']['tmp_name'], $targetfolder);

    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "bca2018";

    $conn = mysqli_connect($servername, $username, $password, $dbname);

    $query = "INSERT INTO phpuploadfiles (file) values(LOAD_FILE('$targetfolder'))";

    if(mysqli_query($conn, $query)) {
        echo "Image is uploaded. Check the database.";
    }
    else{
        echo "ERROR: unable to store the image $sql." . mysqli_error($conn);
    }
    $result = mysqli_query($conn, "SELECT * FROM phpuploadfiles");

?>

<form action="" method="post" enctype="multipart/form-data">
    <input type="file" name="file" size="50" /><br>
    <input type="submit" value="Upload" name="submit" />
</form>