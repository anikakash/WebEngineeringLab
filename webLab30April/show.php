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
        }
    </style>
</head>
<body>
    <form action="search.php">
        <input type="text" name="search" id="search">
        <input type="submit" value="Search">
    </form>
    <br><br>
</body>
</html>

<?php

    include 'connection.php';

    $query = 'SELECT * FROM info';
    
    $run = mysqli_query($con, $query);
   
    if(mysqli_num_rows($run) > 0){
        include 'try.php';
    } else {
        echo 'No data found!';
    }

?>