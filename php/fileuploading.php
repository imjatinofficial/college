<?php
if (isset($_POST['submit'])) {
    $targetfolder = "C:\Users\imjat\Desktop\bca/";
    $targetfolder = $targetfolder . basename($_FILES['file']['name']);
    if (move_uploaded_file($_FILES['file']['tmp_name'], $targetfolder) && $_FILES['file']['type'] == "application/pdf") echo "The file " . basename($_FILES['file']['name']) . " is uploaded";
    else echo "Problem uploading file";
}
?>

<form action="" method="post" enctype="multipart/form-data">
    <input type="file" name="file" size="50" /><br>
    <input type="submit" value="Upload" name="submit" />
</form>