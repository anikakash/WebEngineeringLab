<?php
include "db.php";
    if(isset($_POST['signin'])){
        $username = $_POST['username'];
        $department = $_POST['department'];
        $gender = $_POST['gender'];
        $password = $_POST['password'];
        if($username && $department && $gender && $password){
            $query = "INSERT INTO `auth`(username,department,gender,password)
                VALUES('$username', '$department', '$gender', '$password')";

            mysqli_query($connection, $query) or die("regi task".mysqli_error());
            header("Location:login.php");
        }
    }
?>