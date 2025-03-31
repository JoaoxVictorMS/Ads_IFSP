<?php
echo $_POST['nome_completo'] . "<br/>";
echo $_POST['idade'] . "<br/>";
echo $_POST['email'] . "<br/>";
echo $_POST['telefone'] . "<br/>";
echo $_POST['endereco'] . "<br/>";
echo $_POST['cidade'] . "<br/>";
echo $_POST['estado'] . "<br/>";
echo $_POST['profissao'] . "<br/>";

$sexo = isset($_POST['sexo']) ? $_POST['sexo'] : '';
echo "Sexo: $sexo<br/>";

echo $_POST['descricao'] . "<br/>";

$status = isset($_POST['status']) ? $_POST['status'] : '';
echo "Status: $status<br/>";
?>
