<?php
    include("head.php");
        $username = $_POST['fname'];
        $password = $_POST['pass'];
        if ($username && $password) {
            $query   = "SELECT * FROM `admin` WHERE fname = '$username' AND password = '" . md5($password) . "'";
            $result = mysqli_query($connection, $query);
            if ($result) {
                $rows = mysqli_num_rows($result);
                if ($rows == 1) {
                    $_SESSION['fname'] = $username;
                    header("Location: ./profile.php");
                } else {
                    echo "<div class='form  col-xl-5 col-lg-6 col-md-8 col-sm-10 mx-auto'>
                  <h3>Incorrect Username/password.</h3><br/>
                  <p class='link'>Click here to <a href='login.php'>Login</a> again.</p>
                  </div>";
                }
            } else {
                echo "Query failed Login_Success: " . mysqli_error($connection);
            }
        }
    ?>
