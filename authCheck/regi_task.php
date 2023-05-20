<?php
session_start();
include_once "dbcon.php";

if($connection){
    echo "Yes";

        $f_name = $_POST['fname'];
        $l_name = $_POST['lname'];
        $gender = $_POST['gender'];
        $dept = $_POST['dept'];
        $pass = $_POST['pass'];
        $passHash = md5($pas);

        if($f_name && $l_name && $gender && $dept && $passHash){
                $query = "INSERT INTO authchk(fname, lname, gender, dept, pass)
                                VALUES('$f_name', '$l_name', '$gender', '$dept', '$passHash')";
            $run = mysqli_query($connection, $query);
            if($run){
                // echo "Successfully Inter";
                header("Location: ./login.php");
            }
            else{
                die("Error".mysqli_error($connection));
            }
        }else{
            header("Location: ./regi.php");
        }
}
else{
    die("Error".mysqli_error($connection));
}


?>