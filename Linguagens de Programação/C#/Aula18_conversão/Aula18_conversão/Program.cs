using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula18_conversão
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region Conversão implicíta
            /*
            // ***** Conversão implicíta, sem método expecífico para tal *****
            //Exemplo 1:
            byte num1 = 100;
            ushort num2;
            num2 = num1;
            // Exemplo 2
            float num3 = 50.45f;
            double num4 = num3;
            // Exemplo 3: Será impresso o número da tebala ACII referente a letra C
            char letra = 'C';
            int num5 = letra;
            */
            #endregion

            #region Conversão explicíta
            // ***** Conversão explicíta, com método para tal *****

            // CAST
            // Exemplo 1:
            /*
            ushort num1 = 100;
            byte num2 = (byte)num1;
            // Exemplo 2:
            float num3 = 2500f;
            int num4 = (int)num3;

            char letra = (char)67;

            Console.WriteLine(num2);

            Console.ReadKey();
            */

            /*
            // CONVERT CLASS
            // Exemplo 1:
            string texto = Convert.ToString(22500); // -> Int para string
            // Exemplo 2:
            double num1 = Convert.ToDouble(false); // -> Bool para double
            //Exemplo 3:
            int num2 = Convert.ToInt32('C'); // -> String para Int
            // Exemplo 4:
            // double num2 = Convert.ToDouble32('C'); // -> char para double. Erro em tempo de execução


            // Método Parse
            string txtNumero = "2023";
            int numero = int.Parse(txtNumero);
            double num3 = double.Parse("125,50"); // Coloque vírgula "," para funcionar

            Console.WriteLine(num1);
            Console.ReadKey();
            */
            #endregion

            /*
            int result = 10 + 10;

            int num10 = 50;
            int num11 = 60;
            result = num10 + num11;

            Console.WriteLine(num10+num11); // É possível realizar cálculos aritiméticos dentro da função WriteLine(), desde que não tenha uma string dentro
            Console.WriteLine(result);
            Console.ReadKey();
            */

            int a = 100;
            int b = 10;
            int c = 5;

            int result = (a + b) * c; // Conceito básico de calculo matemático


            int var = 10;
            int res = var++ // Incremento
            int res = var-- // Incremento


            Console.WriteLine(result);
            Console.ReadKey();



        }
    }
}
