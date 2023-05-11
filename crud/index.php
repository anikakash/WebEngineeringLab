<?php include("header.php");?>
<?php include("dbcon.php");?>

<div class="container">
        <h2>ALL STUDENTS</h2>
    <table class="table table-hover table-bordered table-striped">
        <tr>
            <th>ID</th>
            <th>First Name</th>
            <th>Last Name</th>
            <th>Age</th>
        </tr>
        <tr>
            <?php
                $query = "select * from `students`";
                $result = mysqli_query($connection, $query);

                if(!$result){
                    die("Query Failed".mysqli_error());
                }
                else{
                    while($row = mysqli_fetch_assoc($result)){
                        ?>
                            <tr>
                                <td> <?php echo $row['id'];  ?> </td>
                                <td> <?php echo $row['first_name'];  ?> </td>
                                <td> <?php echo $row['last_name'];  ?> </td>
                                <td> <?php echo $row['age'];  ?> </td>
                            </tr>
                        <?php
                    }
                }
            ?>
    </table>
</div>
<?php include("footer.php");?>