<?php
include 'dbcon.php';
$id = $_GET['id'];
$query = "select * from `data` where `id` = '$id'";
$data = mysqli_query($connection, $query);
$row = mysqli_fetch_assoc($data);
?>

<head>
    <link rel="stylesheet" href="style.css">
</head>

<?php
    if(isset($_POST['update'])){
        $id = $_POST['id'];
        $fname = $_POST['fname'];
        $lname = $_POST['lname'];
        $age = $_POST['age'];
        $cgpa = $_POST['cgpa'];

    $update = "update `data` set `id` = '$id', `fname` = '$fname', `lname` = '$lname', `age`='$age', `cgpa`='$cgpa' WHERE `id`='$id'";
        $data = mysqli_query($connection, $update);
        if(!$data){
            die("Query Failed*a*".mysqli_error($connection));
        }else{
            header("location:show.php");
        }
    }
?>

<form action="update.php" method="post">

        <div class="input" id="finput">
            <label for="id">Your ID</label>
            <input type="text" placeholder = "Your University ID" name="id" value = "<?php echo $row['id'] ?>">
        </div>

        <div class="input">
            <label for="fname">Your First Name</label>
            <input type="text" placeholder = "Your First Name" name="fname" value = "<?php echo $row['fname'] ?>">
        </div>

        <div class="input">
            <label for="lname">Your Last Name</label>
            <input type="text" placeholder = "Your Last Name" name="lname" value = "<?php echo $row['lname'] ?>">
        </div>

        <div class="input">
            <label for="age">Your Age</label>
            <input type="text" placeholder = "Your Age" name="age" value = "<?php echo $row['age'] ?>">
        </div>

        <div class="input">
            <label for="cgpa">Your CGPA</label>
            <input type="text" placeholder = "Your CGPA" name="cgpa" value = "<?php echo $row['cgpa'] ?>">
        </div>

        <input type="submit" value="update" name = "update">

    </form>



