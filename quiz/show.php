<?php
include 'dbcon.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Document</title>
    <style>
        table, tr, td{
            border: 2px solid;
        }
    </style>
</head>

<form action="" method="GET">
        <input type="text" name="search" id="search">
        <input type="submit" value="search">
</form>
<table id="customers">
    <tr>
         <td>ID</td>
        <td>First Name</td>
        <td>Last Name</td>
        <td>Age</td>
        <td>CGPA</td>
        <td>Update</td>
        <td>Delete</td>
    </tr>
    <tr>
        <?php
        if(isset($_GET['search'])){
            $val = $_GET['search'];
            $query = "select * from `data` where `age` <= '$val'";
        }
        else{
            $query = "SELECT * FROM `data`";
        }
            $query_run = mysqli_query($connection, $query);

            while($row = mysqli_fetch_assoc($query_run)){
                ?>
                
                    <tr>
                        <td> <?php echo $row['id'];?> </td>
                        <td> <?php echo $row['fname'];?> </td>
                        <td> <?php echo $row['lname'];?> </td>
                        <td> <?php echo $row['age'];?> </td>
                        <td> <?php echo $row['cgpa'];?> </td>
                        <td><a href="update.php?id=<?php echo $row['id'];?>">Update</a></td>
                        <td><a href="delete.php?id=<?php echo $row['id'];?>" >Delete</a></td>
                    </tr>

                <?php
            }
        ?>
    </tr>
</table>

<table>
    <button type="submit"><a href="index.php">Insert Data</a></button>
</table>

</body>
</html>