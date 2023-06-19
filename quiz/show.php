<?php
include 'dbcon.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        table, tr, td{
            border: 1px solid;
        }
    </style>
</head>
<body>
    
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
            $query = "SELECT * FROM `data`";
            $query_run = mysqli_query($connection, $query);

            while($row = mysqli_fetch_assoc($query_run)){
                ?>
                
                    <tr>
                        <td> <?php echo $row['id'];?> </td>
                        <td> <?php echo $row['fname'];?> </td>
                        <td> <?php echo $row['lname'];?> </td>
                        <td> <?php echo $row['age'];?> </td>
                        <td> <?php echo $row['cgpa'];?> </td>
                        <td><a href="update.php?id=<?php echo $row['id'];?>" class='btn btn-success'>Update</a></td>
                        <td><a href="delete.php?id=<?php echo $row['id'];?>" class='btn btn-danger'>Delete</a></td>
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