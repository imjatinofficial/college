<form action="registeroutput.php" method="post">
    <label>First name: </label>
    <input type="text" name="fname" required><br>

    <label>Last name: </label>
    <input type="text" name="lname" ><br>
    
    <label>Username: </label>
    <input type="text" name="uname" required><br>
    
    <label>Password: </label>
    <input type="password" name="passwd" required><br>
    
    <label>Email: </label>
    <input type="email" name="email" required><br>
    
    <label>Mobile No.: </label>
    <input type="text" name="mobile" required><br>
    
    <label>City: </label>
    <select name="city">
    <option value="Chandigarh">Chandigarh</option>
    <option value="Delhi">Delhi</option>
    <option value="Hyderabad">Hyderabad</option>
    </select><br>
    
    <input type="submit" value="Register">
</form>