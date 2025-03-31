<?php
class Veiculo{
	//permissões de atributos
	//public = disponível para todo o projeto
	//private = disponível apenas dentro da classe
	//protected = disponível na classe e subclasses
	protected $modelo;
	protected $cor;
	protected $ano;

	//é executado antes de qualquer outro
	public function __construct($modelo, $cor, $ano){
		$this->modelo = $modelo;
		$this->cor    = $cor;
		$this->ano    = $ano;
	}
	//metodos
	public function acelerar(){
		echo "O veiculo ".$this->modelo." está acelerando";
	}

	public function getModelo(){
		echo $this->modelo;
	}
	public function setModelo($modelo){
		$this->modelo = $modelo;
	}
}