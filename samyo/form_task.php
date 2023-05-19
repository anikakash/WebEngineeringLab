<?php
session_start();
include 'dp.php';

if(isset($_POST['submit'])){

    $news=$_POST['news'];
    $image=$_FILES['image']['name'];
    $image_type=$_FILES['image']['type'];
    $image_size=$_FILES['image']['size'];
    $image_tem_loc=$_FILES['image']['tem_name'];
    $image_store="image/".$image;

    move_uploaded_file($image_tem_loc,$image_store);

    $sql="INSERT INTO news(news,image) values('$news','$image',)";
    $query=mysqli_query($conn,$sql);

}


?>


<?php
session_start();
include_once "dbcon.php";
// $connection = mysqli_connect(DB_HOST, DB_USER, DB_PASSWORD, DB_NAME);

if (!$connection) {
    throw new Exception("connection failed");
} else {
    $action = $_POST['action'] ?? '';
    if (!$action) {
        header("Location:index.php");
        die();
    } else {
        $f_name = $_POST['fname'];
        $u_name = $_POST['uname'];
        $password = $_POST['password'];
        $passwordHash = md5($password);
        if ($f_name && $u_name && $passwordHash) {
            $query = "INSERT into `admin` (fname, uname, password) VALUES ('$f_name', '$u_name', '$passwordHash')";
            mysqli_query($connection, $query);
            include_once './admin_home.php';
        }
    }
}                                                