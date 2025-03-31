<?php
class Core{

	public function exec(){
		//criando uma instancia do roteador
		$router = new Router();

		//configurar rotas
		$router->addRoute('/',array(new homeController(), 'index'));
		$router->addRoute('/produto',array(new produtoController(), 'index'));
		$router->addRoute('/produto/editar',array(new produtoController(), 'editar'));

		
		
		//lidando com a requisição
		$route = isset($_GET['route'])?'/'.$_GET['route']:'/';
		$router->handleRequest($route);
	}

}