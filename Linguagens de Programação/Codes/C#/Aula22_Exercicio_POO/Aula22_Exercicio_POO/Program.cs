using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Exercicio_POO
{
    internal class Program
    {
        static void Main(string[] args)
        {


            Produto p1 = new Produto();
            p1.Nome = Console.ReadLine("Insira o nome do produto: ");
            p1.Preco = Console.ReadLine("\nInsira o preço do produto: ");
            p1.Quantidade = Console.ReadLine("\nInsira a quantidade de produto(s): ");

            ExibirProduto(p1.Nome, p1.Preco, p1.Quantidade);







            Console.ReadKey();


        }
    }
}
