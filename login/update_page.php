<?php
include "db.php";
?>

<?php
    if(isset($_GET['id'])){
        $id = $_GET['id'];

        $query = "select * from `auth` where `id` = '$id'";
        $result = mysqli_query($connection, $query);

        if(!$result){
            die("Query Failed For Update".mysqli_error($connection));
        }else{
            $row = mysqli_fetch_assoc($result);
                // print_r($row);
            
        }
    }

?>

<form method="post">
    <!-- for user name -->
        <div class="input_field"> 
            <i class="fa-solid fa-user-pen"></i>
            <input type="text" name="username" placeholder="username" value="<?php echo $row['username']?>">
        </div>

        <!-- department selection  -->
        <div class="input_field">
            <i class="fa-solid fa-list"></i>
            <select name="department" id="">
                <option value="CSE">CSE</option>
                <option value="SWE">SWE</option>
                <option value="EEE>">EEE</option>
                <option value="IIT">IIT</option>
            </select>
        </div>
        
        <!-- Gender -->
        <div class="input_field">
            <i class="fa-solid fa-person-half-dress"></i>
            <input type="radio" name="gender" value="Male">
            <label for="genderM">Male</label>
            <input type="radio" name="gender" value="Female">
            <label for="genderF">Female</label>
        </div>
        
            <!-- password -->
        <div class="input_field">
            <i class="fas fa-lock"></i>
            <input type="text" name="password" placeholder="password" value="<?php echo $row['password']?>">
        </div>
        <button type="submit" name="update">UPDATE</button>
</form>

<?php
    if(isset($_POST['update'])){
        $id = $_GET['id'];
        $username = $_POST['username'];
        $department = $_POST['department'];
        $gender = $_POST['gender'];

        // if (isset($_POST['gender'])) {
        //   $gender = $_POST['gender'];
        // }

        // if (empty($gender)) {
        //   $gender = "Male";
        // }

        // if (empty($department)) {
        //   $department = "CSE";
        // }

        $password = $_POST['password'];
        $query = "UPDATE `auth` SET `username` = '$username', `department` = '$department', `gender` = '$gender', `password` = '$password' where `id` = '$id'";
        $result = mysqli_query($connection, $query);
        if($result){
            header("location:profile.php");
        }
    }

?>
