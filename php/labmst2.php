<!DOCTYPE html>
<html>

<head>
    <style>
        input {
            outline: 0;
            border-width: 0 0 2px;
            border-color: black;
        }

        .row {
            width: 100% !important;
            display: table;
        }

        .col-6 {
            width: 50% !important;
            display: table-cell;
        }
    </style>
    <title>Employee Information Sheet</title>
</head>

<body>
    <?php if ($error != "") {
        echo '<div class="alert alert-danger" role="alert">' . $error . '</div>';
    } ?>
    <div class="container my-5">
        <div class="row px-5">
            <h2 class="my-4" style="width: 100%;">Basic Employement Information Sheet</h2>
            <div class="row">
                <form method="POST">
                    <h3 class="my-3" style="width: 100%;">Employee Information</h3>
                    <p>Full Name:- <input type="text" name="fname" style="width: 90%;"></p>
                    <p>Address:- <input type="text" name="address" style="width: 90%;"></p>
                    <p>Home Phone:- <input type="number" name="home" style="width: 40%;">
                        Cell Phone:- <input type="number" name="cell" style="width: 40%;"></p>
                    <p>E-mail Address:- <input type="email" name="email" style="width: 90%;"></p>
                    <p>Social Security Number or Government ID:- <input type="text" name="security" style="width: 75%;"></p>
                    <p>Birth Date:- <input type="date" name="date" style="width: 30%;">
                        Maritial Status:- <input type="text" name="martial" style="width: 50%;"></p>
                    <p>Spouse Name:- <input type="text" name="spouse" style="width: 85%;"></p>
                    <p>Spouse Employee:- <input type="number" name="spousehome" style="width: 40%;">
                        Spouse Work Phone:- <input type="number" name="spousecell" style="width: 40%;"></p>

                    <h3 class="my-3" style="width: 100%;">Job Information</h3>
                    <p>Title:- <input type="text" name="title" style="width: 40%;">
                        Supervisor:- <input type="text" name="supervisor" style="width: 40%;"></p>
                    <p>Work Location:- <input type="text" name="work" style="width: 40%;">
                        E-mail:- <input type="email" name="email" style="width: 40%;"></p>
                    <p>Work Phone:- <input type="number" name="work" style="width: 40%;">
                        Cell Phone:- <input type="number" name="jcell" style="width: 40%;"></p>
                    <p>Start Date:- <input type="text" name="sdate" style="width: 40%;">
                        Salary:- <input type="text" name="sal" style="width: 40%;"></p>

                    <h3 class="my-3" style="width: 100%;">Emergency Contact Information</h3>
                    <p>Full Name:- <input type="text" name="efname" style="width: 90%;"></p>
                    <p>Address:- <input type="text" name="eaddress" style="width: 90%;"></p>
                    <p>Primary Phone:- <input type="number" name="eprim" style="width: 40%;">
                        Cell Phone:- <input type="number" name="ecell" style="width: 40%;"></p>
                    <p>Relationship:- <input type="text" name="erelationship" style="width: 90%;"></p>

                    <h3 class="my-3" style="width: 100%;">Dependent Information</h3>
                    <div class="w-50">
                        <p>Names(s) of Dependent(s):-
                            <br><br><input type="text" name="eone" style="width: 40%;">
                            <br><input type="text" name="etow" style="width: 40%;">
                            <br><input type="text" name="ethree" style="width: 40%;"></p>
                    </div>
                    <div class="w-50">
                        <p>Relationship of Employee(s):-
                            <br><br><input type="text" name="rone" style="width: 40%;">
                            <br><input type="text" name="rtow" style="width: 40%;">
                            <br><input type="text" name="rthree" style="width: 40%;"></p>
                    </div>
                    <input type="submit" name="submit" value="Submit" class="mb-5 py-1">
                </form>
            </div>
        </div>
    </div>




</body>

</html>