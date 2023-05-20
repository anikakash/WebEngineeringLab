<?php
include "db.php";
?>

<?php
    if(isset($_GET['id'])){
        $id = $_GET['id'];

        $query = "DELETE from `auth` where `id` = '$id'";
        
        $result = mysqli_query($connection, $query);

        if(!$result){
            die("Query Failed For Delete".mysqli_error($connection));
        }else{
            // $row = mysqli_fetch_assoc($result);
            header("location:profile.php");
                // print_r($row);
            
        }
    }

?>