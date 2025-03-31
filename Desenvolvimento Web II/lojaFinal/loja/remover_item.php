<?php

	session_start();
	$index = $_GET['index'];

	if(isset($_SESSION['produtos'][$index])){
		unset($_SESSION['produtos'][$index]);
	}

	header("Location: index.php");
	exit;

?>