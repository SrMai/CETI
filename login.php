<?php
	/*----------  Datos del servidor  ----------*/
	$servername = "localhost";
	$database = "Tienda";
	$username = "root";
	$password = "";

	const SERVER="localhost";
	const DB="Tienda";
	const USER="root";
	const PASS="";


	const SGBD="mysql:host=".SERVER.";dbname=".DB;


// Create connection
$conn = mysqli_connect($servername, $username, $password, $database);
// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}
?>
