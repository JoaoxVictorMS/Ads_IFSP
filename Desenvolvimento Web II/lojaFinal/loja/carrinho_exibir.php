<?php require 'header.php'; ?>

<main>
	<div class="container">
		<div class="row">
			<div class="col-lg-12">
				<?php if(isset($_SESSION['carrinho']) && count($_SESSION['carrinho']) > 0): ?>
					<div class="table-responsive">
						<table class="table">
							<thead>
								<tr>
									<th>Imagem</th>
									<th>nome</th>
									<th>codigo</th>
									<th>QTd.</th>
									<th>Vlr. Unitário</th>
									<th>Vlr. Total
									<th>#</th>
								</tr>
							</thead>
							<tbody>
								<?php foreach($_SESSION['carrinho'] as $key => $item): ?>
									<tr>
										<td>
											<?php if(isset($item['foto'])): ?>
												<img src="<?php echo $item['foto']; ?>" style="max-width: 100px;">
											<?php endif; ?>
										</td>
										<td><?php echo $item['nome']; ?></td>
										<td><?php echo $item['codigo']; ?></td>
										<td><?php echo $item['qtd']; ?></td>
										<td>R$ <?php echo number_format(intval($item['vlr_produto']),2,',','.'); ?></td>
										<td>R$ <?php echo number_format(intval($item['vlr_produto'])*$item['qtd'],2,',','.'); ?></td>
										<td><a href="remover_carrinho.php?index=<?php echo $key; ?>" class="btn btn-danger">X</a>
									</tr>
								<?php endforeach; ?>
							</tbody>
						</table>
					</div>
				<?php endif; ?>
			</div>
		</div>
	</div>
</main>

<?php require 'footer.php'; ?>