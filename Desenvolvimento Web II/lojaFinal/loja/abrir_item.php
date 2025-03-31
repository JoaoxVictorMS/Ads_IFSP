<?php require 'header.php'; ?>
<?php
	$dados   = array();
	$produto = $_GET['index'];

	if(isset($_SESSION['produtos'][$produto])){
		$dados = $_SESSION['produtos'][$produto];
	}else{
		header("Location: index.php");
		exit;
	}
?>
<main id="cadastro">
	<div class="container">
		<div class="row">
			<div class="col-lg-6 col-md-6 col-sm-12 text-center">
				<figure>
					<img src="<?php echo $dados['foto']; ?>">
				</figure>
			</div>
			<div class="col-lg-6 col-md-6 col-sm-12">
				<div class="nome"><?php echo $dados['nome']; ?></div>
				<div class="codigo"><?php echo $dados['codigo']; ?></div>
				<div class="stars">
					<?php for($i=1;$i<=rand(1,5);$i++): ?>
						<div class="star"><img src="assets/star.png"></div>
					<?php endfor; ?>
				</div>
				<div class="valor">R$ <?php echo $dados['vlr_produto']; ?></div>

				<div class="botao">
					<a href="add_carrinho.php?index=<?php echo $produto; ?>" class="btn btn-success">Adicionar no Carrinho</a>
			</div>
		</div>
		<div class="row">
			<div class="col-lg-12 col-md-12 col-sm-12">
				<?php echo $dados['descricao']; ?>
			</div>
		</div>
	</div>
</main>
<?php require 'footer.php'; ?>