<?php

include 'connection.php';

$name = $_POST['name'];
$gender = $_POST['gender'];
$email = $_POST['email'];
$mobile = $_POST['mobile'];

$query ="INSERT INTO info(name, gender, email, mobile) 
            VALUES('$name', '$gender', '$email', '$mobile')";
$run = mysqli_query($con, $query);

if(!$run){
    echo "<br>submission failed!";
} else{
    echo "submission successfull!";
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <a href="list.php">try</a>
</body>
</html>