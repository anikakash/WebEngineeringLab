<?php include("dbcon.php");
// $connection = mysqli_connect(DB_HOST, DB_USER, DB_PASSWORD, DB_NAME);
session_start();

if (!$connection) {
    throw new Exception("connection failed");
} else {
    $action = $_POST['action'] ?? '';
    if (!$action) {
        header("Location:index.php");
        die();
    } else {
        $username = $_POST['uname'];
        $password = $_POST['password'];
        if ($username && $password) {
            $query   = "SELECT * FROM `admin` WHERE username='$username' AND password='" . md5($password) . "'";
            $result = mysqli_query($connection, $query);
            include_once './login_success.php';
        }
    }
}
?>