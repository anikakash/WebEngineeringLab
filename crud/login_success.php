<<?php include("header.php");?>
    <?php
        $rows = mysqli_num_rows($result);
        if ($rows == 1) {
            $_SESSION['username'] = $username;
            header("Location: ./admin_home.php");
        } else {
            echo "<div class='form  col-xl-5 col-lg-6 col-md-8 col-sm-10 mx-auto'>
                  <h3>Incorrect Username/password.</h3><br/>
                  <p class='link'>Click here to <a href='login.php'>Login</a> again.</p>
                  </div>";
        }
    ?>
