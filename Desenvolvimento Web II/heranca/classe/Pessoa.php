<?php
class Pessoa{
	//CRIE UMA CLASSE PESSOA
	//COM OS SEGUITNES ATRIBUTOS (NOME, IDADE, CIDADE, TELEFONE);
	//CRIE UM METODO QUE RECEBA O ANO ATUAL E RETORNO ANO NASCIMENTO
	private $nome;
	private $idade;
	private $cidade;
	private $telefone;

	public function __construct($nome, $cidade, $telefone){
		$this->nome     = $nome;
		$this->cidade   = $cidade;
		$this->telefone = $telefone;
	}

	public function setIdade($idade){
		$this->idade = $idade;
	}

	public function getAnoNascimento(){
		echo 'O ano de nascimento eh: '.(intval(date('Y')) - intval($this->idade));
	}
}