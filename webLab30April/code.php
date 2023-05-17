<?php

    include 'connection.php';

    $name = $_POST['name'];
    $id = $_POST['id'];
    $batch = $_POST['batch'];
    $dept = $_POST['dept'];

    $query = "INSERT INTO info(name, sid, batch, dept)
                VALUES('$name', '$id', '$batch', '$dept')";
    
    $run = mysqli_query($con, $query);
    if(!$run){
        echo "submission successful";
    } else{
        header("location: show.php");
    }

?>