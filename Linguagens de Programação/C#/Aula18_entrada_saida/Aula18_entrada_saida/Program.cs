using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula18_entrada_saida
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*
            Console.WriteLine("João");
            Console.Write("IFSP");
            

            int codigo = Console.Read(); // Read() irá capturar apenas o primeiro valor
            Console.WriteLine(codigo); // Será impresso o valor do número correspondente na tabela ASCII. Ex: 50 = 53
            */

            // Aqui será impresso na faixa
            string texto = Console.ReadLine();
            Console.WriteLine(texto);

            Console.ReadKey();


        }
    }
}
