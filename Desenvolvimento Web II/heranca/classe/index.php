<?php
	require 'Veiculo.php';
	require 'Carro.php';
	require 'Moto.php';

	//instanciar classe Carro
	$carro = new Carro("BMW X5","Preta","2021","SUV");
	$carro->detalhes();

	echo '<br/>';
	$carro->acelerar();

	echo '<br/>';
	$veiculo = new Veiculo('Audi A5','Prata','2024');
	$veiculo->Acelerar();
	
	echo '<br/>';
	$moto = new Moto('Tiger GT','Preto','2024',900);
	$moto->acelerar();

	echo '<br/>';
	$moto->getModelo();
?>