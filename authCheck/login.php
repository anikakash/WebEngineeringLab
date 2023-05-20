<?php include("head.php");?>
<?php include("dbcon.php");?>

    <div class="col-xl-5 col-lg-6 col-md-8 col-sm-10 mx-auto form p-4">
        <h1 class="text-center">
            Log In Portal
        </h1>
        <form method="POST" action="./login_task.php">
            <div class="mb-3 ">
                <label for="fname" class="form-label">Username</label>
                <input type="text" class="form-control" name="fname" id="exampleInputText1">
            </div>
            <div class="mb-3">
                <label for="pass" class="form-label">Password</label>
                <input type="password" class="form-control" name="pass" id="exampleInputPassword1">
            </div>
            <div class="login_btn"> 
                <input type="hidden" name="action" value="add">
                <button type="submit" >LogIn</button>
            </div>
        </form>
    </div>
    <?php include("footer.php"); ?>