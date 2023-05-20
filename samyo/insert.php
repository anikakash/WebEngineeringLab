<!DOCTYPE html>
<html lang="en" dir="ltr">
    <head>
        <meta charset="utf-8">
        <title>Insert Stories</title>
        <style media="screen">
            textarea{
                width: 550px;
                height: 300px;
                font-size: 20px;
            }
            div{
                border: 2px solid black;
                width : 600px;
                margin-left: 450px;
                margin-top: 50px;
                padding: 30px;
            }
            input[type=file]{
                font-size : 20px;
            }
            input[type=submit]{
                font-size: 20px;
                font-weight : bold;
                margin-left: 200px;

            }


            </style>
</head>
<body>
    <?php include 'index.php' ?>
    <div class="">
        <form action="./form_task.php" method="post">
            <textarea name="news" rows="20" cols="80" placeholder="Enter your dukkkho" required></textarea><br>
            <input type="file" name="image" value="" required><br><br>
            <input type="date" name="date">
            <input type="submit" name="submit" value="submit">
        </form>

    </div>
</body>
</html>