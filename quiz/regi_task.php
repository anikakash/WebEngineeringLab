<?php
include 'dbcon.php';

    $id = $_POST['id'];
    $fname = $_POST['fname'];
    $lname = $_POST['lname'];
    $age = $_POST['age'];
    $cgpa = $_POST['cgpa'];
    $query = "INSERT into `data` (id, fname, lname, age, cgpa) VALUES('$id', '$fname', '$lname', '$age', '$cgpa')";
    $res = mysqli_query($connection, $query);
    header('location:index.php?message=Your data has been added successfully');
    
?>