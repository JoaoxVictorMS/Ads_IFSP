<?php require 'header.php'; ?>
<?php
	if(!isset($_SESSION['logado']) || !$_SESSION['logado']){
		header("Location: /sessao/");
		exit;
	}
?>
<section>
	<div class="container">
		<div class="row">
			<div class="col-lg-12 text-center">
				<h1>Bem Vindo ao Sistema</h1>
			</div>
		</div>

		<div class="row">
			<div class="col-lg-12 text-center">
				<a href="logout.php" class="btn btn-danger">
					Sair
				</a>
			</div>
		</div>
	</div>
</section>

<?php require 'footer.php'; ?>