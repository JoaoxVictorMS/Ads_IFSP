<?php 
	
	session_start();
	
	require 'Carrinho.php';
	//recebe o index
	$index = $_GET['index'];

	$carrinho = new Carrinho();
	$carrinho->remover($index);

	header("Location: carrinho_exibir.php");
	exit;

?>