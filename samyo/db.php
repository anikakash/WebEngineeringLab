<?php

define("host", "localhost");
define("user", "root");
define("pass", "");
define("db", "newsweb_site");

$connection = mysqli_connect(host, user, pass, db);
if(!$connection){
    die("Yes");
}

?>