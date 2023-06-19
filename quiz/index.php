<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>QUIZ</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <form action="regi_task.php" method="post">

        <div class="input" id="finput">
            <label for="id">Your ID</label>
            <input type="text" placeholder = "Your University ID" name="id">
        </div>

        <div class="input">
            <label for="fname">Your First Name</label>
            <input type="text" placeholder = "Your First Name" name="fname">
        </div>

        <div class="input">
            <label for="lname">Your Last Name</label>
            <input type="text" placeholder = "Your Last Name" name="lname">
        </div>

        <div class="input">
            <label for="age">Your Age</label>
            <input type="text" placeholder = "Your Age" name="age">
        </div>

        <div class="input">
            <label for="cgpa">Your CGPA</label>
            <input type="text" placeholder = "Your CGPA" name="cgpa">
        </div>

        <input type="submit" value="Submit">

        
    </form>
    <?php
        if(isset($_GET['message'])){
            echo "<h6>".$_GET['message']."</h6>";
        }
    ?>
    <a href="show.php">Show Data</a>
</body>
</html>