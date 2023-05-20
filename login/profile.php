<?php
include "db.php";
session_start();
if(!isset($_SESSION['userid'])){
    header("location:login.php");
}

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title><?php echo $_SESSION['userid']?>'s Profile</title>
    <style>
        body{
            padding: 0;
            margin: 0;
        }
        #customers {
        font-family: Arial, Helvetica, sans-serif;
        border-collapse: collapse;
        width: 100%;
        }

        #customers td, #customers th {
        border: 1px solid #ddd;
        padding: 8px;
        }


        #customers th {
        padding-top: 12px;
        padding-bottom: 12px;
        text-align: left;
        background-color:  rgb(74, 150, 176);;
        color: white;
        }
        div.header{
            display: flex;
            justify-content: space-between;
            padding: 0px 10px;
            background-color: rgb(118, 215, 242);
        }
        div.header button{
            width: 120px;
            background-color: aliceblue;;
            padding: 8px;
            border: none;
            font-size: 16px;
            font-weight: 500;
            margin: 15px 0px;
        }
    </style>
</head>
<body>

    <div class="header">
            <h1>Welcome <?php echo $_SESSION['userid'] ?></h1>
            <form method="post">
                <button name="logout">LOG OUT</button>
            </form>
        </div>
    <table id="customers">
        <tr>
            <th>Name</th>
            <th>Department</th>
            <th>Gender</th>
            <th>Password</th>
            <th>Update</th>
            <th>Delete</th>
        </tr>
        <tr>
            <?php
                $query = "SELECT * FROM `auth`";
                $result = mysqli_query($connection, $query);
                 if(!$result){
                    die("Query Failed".mysqli_error($connection));
                }else{
                    while($row = mysqli_fetch_assoc($result)){
                        ?>
                        <tr>
                            <th> <?php echo $row['username']; ?> </th>
                            <th> <?php echo $row['department']; ?> </th>
                            <th> <?php echo $row['gender']; ?> </th>
                            <th> <?php echo $row['password']; ?> </th>
                            <th><a href="update_page.php?id=<?php echo $row['id']; ?>">Update</a></th>
                            <th><a href="delete.php?id=<?php echo $row['id']; ?>">Delete</a></th>
                        </tr>
                        <?php
                    }
                }
            ?>
        </tr>

    </table>
        <?php
            if(isset($_POST['logout'])){
                    session_destroy();
                    header("location: login.php");
            }
        ?>
</body>
</html>