using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exec1_POO
{
    internal class Program
    {
        static void Main()
        {
            // Criar um novo produto
            Produto produto1 = new Produto("Notebook", 2000.00);

            // Exibir detalhes iniciais do produto
            produto1.ExibirProduto();

            // Adicionar 5 unidades do produto
            produto1.AdcionarProduto(5);

            // Exibir detalhes atualizados
            produto1.ExibirProduto();

            // Subtrair 2 unidades do produto
            produto1.Quantidade -= 2;

            // Exibir detalhes atualizados
            produto1.ExibirProduto();

            // Tentar definir a quantidade como -1 (deve exibir uma mensagem de erro)
            produto1.Quantidade = -1;

            // Exibir detalhes finais do produto
            produto1.ExibirProduto();

            Console.ReadKey();
        }

    }
}
