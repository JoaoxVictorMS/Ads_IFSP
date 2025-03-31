<?php require 'header.php'; ?>

<main>
	<div class="container">
		<div class="row">
			<div class="col-lg-12">
				<div class="box-produtos">
					<?php if(isset($_SESSION['produtos']) && count($_SESSION['produtos']) > 0): ?>
						<?php foreach($_SESSION['produtos'] as $key => $item): ?>
							<div class="produto">
								<a href="abrir_item.php?index=<?php echo $key; ?>" class="abrir">
									<div class="imagem">
										<?php if(isset($item['foto'])): ?>
											<img src="<?php echo $item['foto']; ?>" style="max-width: 100px;">
										<?php endif; ?>
									</div>
									<div class="nome"><?php echo $item['nome']; ?></div>
									<div class="codigo"><?php echo $item['codigo']; ?></div>
									<div class="valor">R$ <?php echo number_format(intval($item['vlr_produto']),2,',','.'); ?></div>
								</a>
								<div class="botao">
									<a href="remover_item.php?index=<?php echo $key; ?>" class="btn btn-danger" onclick="return confirm('Deseja realmente remover?');">Remover</a>
								</div>
							</div>
						<?php endforeach; ?>
					<?php endif; ?>
				</div>
			</div>
		</div>
	</div>
</main>

<?php require 'footer.php'; ?>