<?php include("dbcon.php");

session_start();

if (!$connection) {
    throw new Exception("connection failed");
} else {
    $action = $_POST['action'] ?? '';
    if (!$action) {
        header("Location:index.php");
        die();
    } else {
        $username = $_POST['fname'];
        $password = $_POST['pass'];
        if ($username && $password) {
            $query   = "SELECT * FROM `authchk` WHERE fname='$username' AND pass='" . md5($password) . "'";
            $result = mysqli_query($connection, $query);
            include_once './login_success.php';
        }
    }
}
?>