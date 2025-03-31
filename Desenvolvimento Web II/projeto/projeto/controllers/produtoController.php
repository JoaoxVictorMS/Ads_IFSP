<?php
class produtoController extends controller{

	private $dados;

	public function __construct(){
		parent::__construct();
		$this->dados = array();
	}

	public function index(){

		$this->loadTemplate('produto',$this->dados);
	}

	public function editar(){

		$this->loadTemplate('produto_editar',$this->dados);
	}
}