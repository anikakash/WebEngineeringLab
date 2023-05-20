
<div class="login-form">
    <h3>Welcome to system</h3>
    
    <form action="regi_task.php" method="POST">

    <!-- for user name -->
        <div class="input_field"> 
            <i class="fa-solid fa-user-pen"></i>
            <input type="text" name="username" placeholder="username">
        </div>

        <!-- department selection  -->
        <div class="input_field">
            <i class="fa-solid fa-list"></i>
            <select name="department" id="">
                <option value="CSE">CSE</option>
                <option value="SWE">SWE</option>
                <option value="SWE">EEE</option>
                <option value="SWE">IIT</option>
            </select>
        </div>
        
        <!-- Gender -->
        <div class="input_field">
            <i class="fa-solid fa-person-half-dress"></i>
            <input type="radio" name="gender" value="Male">
            <label for="genderM">Male</label>
            <input type="radio" name="gender" value="Female">
            <label for="genderF">Female</label>
        </div>
        
            <!-- password -->
        <div class="input_field">
            <i class="fas fa-lock"></i>
            <input type="text" name="password" placeholder="password">
        </div>
        <button type="submit" name="signin"> Sign In</button>
        <div class="extra">
            <a href="login.php">Already have an account</a>
        </div>
    </form>
</div>


