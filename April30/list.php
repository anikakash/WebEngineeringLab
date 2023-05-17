<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        table,tr,th,td{
            border: 1px solid black;
            border-collapse: collapse;
            padding: 5px;
        }
    </style>
</head>
<body>
    
</body>
</html>




<?php

include 'connection.php';

$query = "SELECT * FROM info";

$run = mysqli_query($con, $query);

if(mysqli_num_rows($run)>0){
    echo "<table><tr><td>name</td><td>email</td><td>mobile</td><td>gender</td></tr>";
    while($row = mysqli_fetch_assoc($run)){
        
        echo "<tr><td>".$row['name']."</td><td>".$row['email']."</td><td>".$row['mobile']."</td><td>".$row['gender']."</td></tr>";
    }
    echo "</table>";
}


?>
