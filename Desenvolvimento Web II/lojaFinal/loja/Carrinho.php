<?php
 class Carrinho{

 	public function __construct(){
 		if(!isset($_SESSION)) {
    		session_start();
		}
 	}

 	public function adicionar($index){

 		if(isset($_SESSION['produtos'][$index])){
 			$produto = $_SESSION['produtos'][$index];

			if(!isset($_SESSION['carrinho']) || count($_SESSION['carrinho']) == 0){ 	
				$produto['qtd'] = 1;		
 				$_SESSION['carrinho'][] = $produto;

 			}else{

 				$achou = false;
 				foreach($_SESSION['carrinho'] as $key => $item){
 					if($item['codigo'] == $produto['codigo']){
 						$_SESSION['carrinho'][$key]['qtd'] += 1;
 						return;
 					}
 				}

 				if(!$achou){
 					$produto['qtd'] = 1;		
 					$_SESSION['carrinho'][] = $produto;
 				}

 			}
 		}
 	}

 	public function remover($index){
 		if(isset($_SESSION['carrinho'][$index])){
 			unset($_SESSION['carrinho'][$index]);
 		}
 	}

 	public function total(){
 		$total = 0;

 		if(isset($_SESSION['carrinho']) && count($_SESSION['carrinho']) > 0){ 
 			foreach($_SESSION['carrinho'] as $item){
 				$total += intval($item['vlr_produto']) * $item['qtd'];
 			}
 		}

 		return $total;

 	}

 	public function qtd(){
 		$total = 0;

 		if(isset($_SESSION['carrinho']) && count($_SESSION['carrinho']) > 0){ 
 			foreach($_SESSION['carrinho'] as $item){
 				$total += $item['qtd'];
 			}
 		}

 		return $total;
 	}

}