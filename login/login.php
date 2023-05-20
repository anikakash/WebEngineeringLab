<?php
include "head.php";
include "db.php";
?>
<div class="login-form">
    <h3>Welcome to system</h3>
    <form method="POST">
        <div class="input_field">
            <i class="fa-solid fa-user"></i>
            <input type="text" name="username" placeholder="username">
        </div>
        <div class="input_field">
            <i class="fas fa-lock"></i>
            <input type="text" name="password" placeholder="password">
        </div>
        <button name="login">Login</button>
        <div class="extra">
            <a href="#">Forget password ?</a>
            <a href="./index.php">Create an Account</a>
        </div>
    </form>
</div>
<?php
 if(isset($_POST['login'])){
    $username = $_POST['username'];
    $password = $_POST['password'];

        $query = "SELECT * FROM `auth` WHERE `username` ='$username' AND `password` = '$password'";

        $result = mysqli_query($connection, $query);
        if(mysqli_num_rows($result)==1){
               
        }else{
            echo "<script>alert('Incorrect Username or Password');</script>";
        }
}
?>