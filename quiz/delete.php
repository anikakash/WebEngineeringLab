<?php include("dbcon.php");?>

<?php
        if(isset($_GET['id'])){
            $id =$_GET['id']; 
            
            $query = "DELETE FROM data WHERE id = '$id'";
            $result = mysqli_query($connection, $query);
            
            if(!$result){
                die("Delete Query Failed**".mysqli_error($connection));
            }
            else{
                $row = mysqli_fetch_assoc($result);
                // print_r($row);
                header("location:show.php");
            }
        }
?>


