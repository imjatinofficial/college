<form>
    <label>First Name : </label><input type=text name=firstname><br>
    <label>Last Name : </label><input type=text name=lastname><br>
    <label>Email Address : </label><input type=email name=email><br>
    <label>Password : </label><input type=password name=password><br>
    <label>Confirm Password : </label><input type=confpass name=confpass><br>
    <label>Date : </label>
    <select>
        <option>Select Day</option>
        <?php for ($i = 1; $i <= 31; $i++) { ?>
            <option value=<?php echo $i ?>><?php echo $i ?></option>
        <?php } ?>
    </select>
    <select>
        <option>Select Month</option>
        <?php
        $months = array("Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec");
        foreach ($months as $month) { ?>
            <option value=<?php echo $month ?>><?php echo $month ?></option>
        <?php } ?>
    </select>
    <select>
        <option>Select Year</option>
        <?php for ($i = 1990; $i <= 2021; $i++) { ?>
            <option value=<?php echo $i ?>><?php echo $i ?></option>
        <?php } ?>
    </select>
</form>