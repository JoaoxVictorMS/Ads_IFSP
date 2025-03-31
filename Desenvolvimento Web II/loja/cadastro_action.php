<?php
	
	session_start();
	$produto['nome']        = $_POST['nome'];
	$produto['codigo']      = $_POST['codigo'];
	$produto['vlr_produto'] = $_POST['vlr_produto'];
	$produto['cor']         = $_POST['cor'];
	$produto['descricao']   = $_POST['descricao'];

	//carregando imagem
	if(isset($_FILES['arquivo'])){
		$target_dir = 'uploads/';
		$file_tmp   = $_FILES['arquivo']['tmp_name'];

		$path           = pathinfo($_FILES['arquivo']['name']);
		$file_extension = strtolower($path['extension']);

		$new_filename = uniqid('file_',true).'.'.$file_extension;

		//caminho relativo final
		$target_file = $target_dir.$new_filename;

		//verificar se é uma imagem correta
		$allowed_types = array('jpg','jpeg','png');
		if(!in_array($file_extension, $allowed_types)){
			echo 'Arquivo não é um tipo válido';
			exit;
		}

		//movendo o arquivo para pasta final
		if(move_uploaded_file($file_tmp, $target_file)){
			$produto['foto'] = $target_file;
		}else{
			echo 'erro ao processar imagem';
			exit;
		}
	}

	//adicionando produto ao array
	$_SESSION['produtos'][] = $produto;

	//jogar para home após o cadastro
	header("Location: index.php");
	exit;
?>