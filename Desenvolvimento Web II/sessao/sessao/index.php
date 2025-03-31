<?php require 'header.php'; ?>

<section id="wrap">
	<div class="box">
		<form method="POST" action="login.php">
			<div class="form-row">
				<div class="form-group col-md-12">
					<label>Usuário</label>
					<input type="text" name="usuario" required class="form-control" value="<?php echo (isset($_COOKIE['usuario']))?$_COOKIE['usuario']:null; ?>">
				</div>
			</div>
			<div class="form-row">
				<div class="form-group col-md-12">
					<label>Password</label>
					<input type="password" name="senha" required class="form-control">
				</div>
			</div>
			<div class="form-row" style="margin-top: 20px;">
				<input type="checkbox" name="lembrar" id="lembrar" value="S"
				<?php echo (isset($_COOKIE['usuario']))?'checked':null; ?> >
				<label for="lembrar">Lembrar meu usuário?</label>
			</div>
			<div class="form-row">
				<div class="form-group col-md-12 text-center">
					<button type="submit" class="btn btn-success">Login</button>
				</div>
			</div>
		</form>
	</div>
</section>

<?php require 'footer.php'; ?>