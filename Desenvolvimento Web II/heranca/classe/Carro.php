<?php
class Carro extends Veiculo{
	private $tipo;

	public function __construct($modelo, $cor, $ano, $tipo){
		parent::__construct($modelo, $cor, $ano);
		$this->tipo = $tipo;
	}

	public function detalhes(){
		echo 'O modelo eh: '.$this->modelo.' cor: '.$this->cor.' ano: '.$this->ano.' tipo: '.$this->tipo;
	}

	public function acelerar(){
		echo 'O carro '.$this->modelo.' esta acelerando';
	}
}