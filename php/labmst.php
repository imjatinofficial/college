<?php
if (isset($_POST['submit'])) {
    $fullname = $_POST['fullname'];
    $address = $_POST['address'];
    $homephone = $_POST['homephone'];
    $cellphone = $_POST['cellphone'];
    $email = $_POST['email'];
    $govid = $_POST['govid'];
    $birthdate = $_POST['birthdate'];
    $martialstatus = $_POST['martialstatus'];
    $fullname = $_POST['fullname'];
    $spousename = $_POST['spousename'];
    $spouseemployer = $_POST['spouseemployer'];
    $spouseworkphone = $_POST['spouseworkphone'];
    $jobtitle = $_POST['jobtitle'];
    $supervisor = $_POST['supervisor'];
    $worklocation = $_POST['worklocation'];
    $jobemail = $_POST['jobemail'];
    $workphone = $_POST['workphone'];
    $workcellphone = $_POST['workcellphone'];
    $jobstartdate = $_POST['jobstartdate'];
    $salary = $_POST['salary'];
    $fullname = $_POST['fullname'];
}
?>

<form action="" method="POST">
    <table>
        <th>Employee Information</th>
        <tr>
            <td>Full Name:</td>
            <td><input type=text name=fullname></td>
        </tr>
        <tr>
            <td>Address:</td>
            <td><input type=text name=address></td>
        </tr>
        <tr>
            <td>Home Phone:</td>
            <td><input type=text name=homephone></td>
            <td>Cell Phone:</td>
            <td><input type=text name=cellphone></td>
        </tr>
        <tr>
            <td>Email Address:</td>
            <td><input type=text name=email></td>
        </tr>
        <tr>
            <td>Social Security Number or Government ID:</td>
            <td><input type=text name=govid></td>
        </tr>
        <tr>
            <td>Birth Date:</td>
            <td><input type=text name=birthdate></td>
            <td>Martial Status:</td>
            <td><input type=text name=martialstatus></td>
        </tr>
        <tr>
            <td>Spouse's Name:</td>
            <td><input type=text name=spousename></td>
        </tr>
        <tr>
            <td>Spouse's Employer:</td>
            <td><input type=text name=spouseemployer></td>
            <td>Spouse's Work Phone:</td>
            <td><input type=text name=spouseworkphone</td>
        </tr>
        <th>Job Information</th>
        <tr>
            <td>Title:</td>
            <td><input type=text name=jobtitle></td>
            <td>Supervisor</td>
            <td><input type=text name=supervisor</td>
        </tr>
        <tr>
            <td>Work Location:</td>
            <td><input type=text name=worklocation></td>
            <td>E-mail Address</td>
            <td><input type=text name=jobemail</td>
        </tr>
        <tr>
            <td>Work Phone:</td>
            <td><input type=text name=workphone></td>
            <td>Cell Phone</td>
            <td><input type=text name=workcellphone</td>
        </tr>
        <tr>
            <td>Start Date:</td>
            <td><input type=date name=jobstartdate></td>
            <td>Salary</td>
            <td><input type=text name=salary</td>
        </tr>
        <th>Emergency Contact Informtation</th>
        <tr>
            <td>Full Name:</td>
            <td><input type=text name=emergencyfullname></td>
        </tr>
        <tr>
            <td>Address:</td>
            <td><input type=text name=emergencyaddress></td>
        </tr>
        <tr>
            <td>Primary Phone:</td>
            <td><input type=text name=emergencyprimaryphone></td>
            <td>Cell Phone</td>
            <td><input type=text name=emergencycellphone</td>
        </tr>
        <tr>
            <td>Relationship:</td>
            <td><input type=text name=emergencyrelationship></td>
        </tr>
        <th>Dependent Information (For insurance purposes only)</th>
        <tr>
            <td>Name of Dependent:</td>
            <td>Relationship to Employee</td>
        </tr>
        <tr>
            <td><input type=text name=nameofdependent></td>
            <td><input type=text name=relationtoemployee</td>
        </tr>
    </table>
</form>