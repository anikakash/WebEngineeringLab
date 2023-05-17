<?php

    echo '<table><tr><td>Name</td><td>ID</td><td>Batch
            </td><td>Department</td></tr>';
    while($row = mysqli_fetch_assoc($run)){
        echo '<tr><td>'.$row['name'].'</td><td>'
            .$row['sid'].'</td><td>'.$row['batch']
            .'</td><td>'.$row['dept'].'</td></tr>';
    }
    echo '</table>';

?>