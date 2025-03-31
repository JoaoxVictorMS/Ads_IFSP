<?php
	session_start();

	$usuario = $_POST['usuario'];
	$senha   = $_POST['senha'];
	$lembrar = (!empty($_POST['lembrar']))?'S':'N';

	$_SESSION['logado'] = false;
	if($usuario == "adm" && $senha == "1234"){
		$_SESSION['logado'] = true;
	}

	//ação que veio do checkbox
	if($lembrar == "S"){
		//define o nome do cookie
		$nome_cookie = "usuario";

		//valor do cookie, o que pode ser lido
		$valor_cookie = $usuario;

		///define a duração do cookie (1 hora);
		$tempo_de_vida = time()+ 3600; //3600s = 1h

		//caminho que o cookie vai existir (/ funciona em todos);
		$caminho = "/";

		setcookie($nome_cookie, $valor_cookie, $tempo_de_vida, $caminho);
	}else{

		$nome_cookie = "usuario";
		$caminho = "/";
		setcookie($nome_cookie, "", time()-3600, $caminho);
	}

	header("Location: usuario.php");
	exit;

?>