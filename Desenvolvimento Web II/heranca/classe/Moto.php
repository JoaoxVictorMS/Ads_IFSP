<?php
require 'Combustivel.php';
class Moto extends Veiculo implements Combustivel{
	private $cilindrada;

	public function __construct($modelo, $cor, $ano, $cilindrada){
		parent::__construct($modelo, $cor, $ano);
		$this->cilindrada = $cilindrada;
	}

	public function acelerar(){
		echo 'A moto '.$this->modelo.' esta acelerando';
	}

	public function tanque($quantidade){
		echo 'tanque de combustivel';
	}

	public function esvaziar(){
		return;
	}
}