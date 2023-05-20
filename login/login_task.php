<?php
include "db.php";
// session_start();

    if(isset($_POST['login'])){
        $username = $_POST['username'];
        $password = $_POST['password'];

            $query = "SELECT * FROM `auth` WHERE `username` ='$username' AND `password` = '$password'";

            $result = mysqli_query($connection, $query);
            if(mysqli_num_rows($result)==1){
                    echo "Correct";
            }else{
                echo "<script>alert('Incorrect Username or Password');</script>";
                header("Location:login.php");
            }
    }
?>