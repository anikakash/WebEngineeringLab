<?php include("head.php");
include("dbcon.php");
?>

<form action="./regi_task.php" method="post" >
    <div class="iform">
        <label for="fname">First Name</label>
        <input type="text" name="fname" id="fname">
    </div>
    <div class="iform">
        <label for="lname">Last Name</label>
        <input type="text" name="lname" id="lname">
    </div>
    <div class="iform">
        <label for="gender">Gender</label>
        <input type="radio" name="gender" id="genderM" value="Male">
        <label for="genderM">Male</label>

        <input type="radio" name="gender" id="genderF" value="Female">
        <label for="genderf">Female</label>
    </div>
    <div class="iform">
        <label for="pass">Passowrd</label>
        <input type="text" name="pass" id="pass">
    </div>
    <div class="iform">
        <select name="dept" id="dept" class="iform">
            <option value="CSE">CSE</option>
            <option value="SWE">SWE</option>
        </select>
    </div>
    <a class = "sup-btn"><button type="submit" class = "sup-btn" name="signup">SingUp</button></a>
</form>

<?php include("footer.php")?>