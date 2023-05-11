<?php
include 'dbcon.php';
if(isset($_POST['add_students'])){
    $fname  = $_POST['f_name'];
    $lname = $_POST['l_name'];
    $age = $_POST['age']; 

    if($fname == "" || empty($fname)){
        header('location:index.php?message=You need to fill in the first name');
    }
    else{
        $query = "insert into `students` (`first_name`, `last_name`, `age`) 
                values('$fname', '$lname', '$age')";
            
        $result = mysqli_query($connection,$query);

        if(!$result){
            die("Query Failed".mysqli_error($connection));
        }
        else{
            header('location:index.php?insert_msg=Your data has been added successfully');
        }
    }
}
 ?>