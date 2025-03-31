<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Projeto Base</title>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
	<link rel="stylesheet" type="text/css" href="<?php echo BASE_URL; ?>assets/css/template.css">
</head>
<body>
	<header>
		<div class="container">
			<div class="row">
				<div class="col-lg-12 text-center">
					LOGO
				</div>
			</div>
		</div>
	</header>
	
	<main>
		<?php $this->loadView($viewName,$viewData); ?>
	</main>

	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>