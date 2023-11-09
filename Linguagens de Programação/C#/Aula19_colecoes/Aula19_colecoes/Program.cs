using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula19_colecoes
{
    internal class Program
    {
        static void Main(string[] args)
        {

            #region Vetores (Arrays unidimensionais)
            // Coleções de itens de determinado tipo de dado

            //int[] numeros = new int[6]; // Tipo de dado, abre fecha colchetes = a new, tipo do dado novamente, abre colchetes

            // Passando valores do array
            //numeros[0] = 8;
            //numeros[1] = 5;
            //numeros[3] = 19;
            //numeros[4] = 96;

            //Console.WriteLine(numeros[3]);
            


            //string[] nomes = new string[3];
            //nomes[0] = "Pedro";
            //nomes[1] = "Marcia";
            //nomes[2] = "João";


            //string[] pecas = {"Placa mãe", "Mouse", "Teclado"}; // Pode-se declar array desta forma


            //Console.ReadKey();
            #endregion

            #region Matrizes (Arrays Bidimensionais)

            int[,] numeros = new int[2, 4]; // Duas linhas e 4 colunas

            numeros[0, 0] = 10;
            numeros[0, 1] = 20;
            numeros[0, 2] = 30;
            numeros[0, 3] = 40;

            numeros[1, 0] = 50;
            numeros[1, 1] = 60;
            numeros[1, 2] = 70;
            numeros[1, 3] = 80;

            Console.WriteLine(numeros[0, 0] + " " + numeros[0, 1] + " " + numeros[0, 2] + " " + numeros[0, 3]);
            Console.WriteLine(numeros[1, 0] + " " + numeros[1, 1] + " " + numeros[1, 2] + " " + numeros[1, 3]);

            string[,] nomes =
            {
                // Valores da primeira linha
                { "João", "Marcia", "Pedro" },
                // Valores da segunda linha
                { "Paulo", "Lucio", "Almir" },
            };

            Console.Write(nomes[0, 1]);
            Console.ReadKey();
            #endregion



        }
    }
}
