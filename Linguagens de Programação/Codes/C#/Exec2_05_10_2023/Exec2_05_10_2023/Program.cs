using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exec2_05_10_2023
{
    internal class Program
    {
        static void Main(string[] args)
        {

            jump:
            Console.Write("Insira um valor inteiro positivo:  ");
            string texto = Console.ReadLine();
            int num = Convert.ToInt32(texto);
            Console.Write("\nCalculando a soma de 1 até o número inserido...\n");

            if (num < 0) { 
                Console.WriteLine("\nNúmero informado é inválido!\n");
                goto jump;
            }

            for (int i = 1; i <= num; i++)
            {
                int result = num + i;
                Console.WriteLine(num + " + " + i + " = " + result);

            }


            Console.ReadKey();




        }
    }
}
