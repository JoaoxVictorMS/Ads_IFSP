<?php require 'header.php'; ?>

<section id="cadastro">
	<div class="container">
		<form method="POST" action="cadastro_action.php" enctype="multipart/form-data">
			<div class="row mb-2">
				<div class="col-lg-12 text-center">
					<h3>Cadastro de Produtos</h3>
				</div>
			</div>
			<div class="row mb-2">
				<div class="col-md-6">
					<label for="nome">Nome</label>
					<input type="text" name="nome" id="nome" placeholder="Nome do Produto" required class="form-control"> 
				</div>
				<div class="col-md-6">
					<label for="codigo">Código do Produto</label>
					<input type="text" id="codigo" name="codigo" placeholder="Código do Produto" required class="form-control">
				</div>
			</div>
			<div class="row mb-2">
				<div class="col-md-6">
					<label for="vlr_produto">Vlr. do Produto</label>
					<input type="text" name="vlr_produto" id="vlr_produto" placeholder="0,00" class="form-control">
				</div>
				<div class="col-md-6">
					<label for="cor">Cor</label>
					<input type="text" name="cor" id="cor" placeholder="Digite a cor" class="form-control">
				</div>
			</div>
			<div class="row mb-2">
				<div class="col-md-12">
					<label for="descricao">Descrição</label>
					<textarea id="descricao" name="descricao" rows="4" class="form-control" placeholder="Digite a descrição do produto"></textarea>
				</div>
			</div>

			<div class="row mb-2">
				<div class="col-md-12">
					<input type="file" name="arquivo" class="form-control" accept=".jpg, .jpeg, .png">
				</div>
			</div>

			<div class="row mb-2">
				<div class="col-md-12">
					<button type="submit" class="btn btn-success">Gravar Dados</button>
				</div>
			</div>
		</form>
	</div>
</section>

<?php require 'footer.php'; ?>