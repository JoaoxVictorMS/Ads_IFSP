using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exec1_05_10_2023
{
    internal class Program
    {
        static void Main(string[] args)
        {


            Console.Write("Insira um valor inteiro positivo:  ");
            string texto = Console.ReadLine();
            int num = Convert.ToInt32(texto);
            Console.Write("\nCalculando a tabuda, de 1 a 10, do seu número...\n");

            for (int i = 1; i < 11; i++)
            {
                int result = num * i;
                Console.WriteLine(num + " X " + i + " = " + result);

            }


            Console.ReadKey();


        }
    }
}
