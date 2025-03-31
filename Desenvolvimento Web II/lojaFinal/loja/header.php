<?php session_start(); ?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Loja Virtual</title>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
	<link rel="stylesheet" type="text/css" href="assets/style.css">
</head>
<body>
	<header>
		<div class="container">
			<div class="row">
				<div class="col-lg-8 text-left">
					<a href="index.php" style="text-decoration: none;">
						<img src="assets/logo.png">
					</a>
				</div> 
				<div class="col-lg-4 text-right">
					<a href="carrinho_exibir.php" style="display: flex;align-items: center;text-decoration: none;">
						<div style="">
							<img src="assets/carrinho.png" style="max-width: 40px">
						</div>
						<div style="margin-left: 10px;width: 30px;height: 30px;background-color: blue;display: flex;align-items: center;justify-content: center;color: #fff;border-radius: 30px;border-radius: 30px;">
							<?php 
								require 'Carrinho.php';
								$cart = new Carrinho();
								echo $cart->qtd();
							?>
						</div>
					</a>
				</div>
			</div>
		</div>
	</header>