using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aul18_exercicio_inveter_strings
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1, str2, str3, str4, auxl;
            Console.Write("Digite a primeira string:  ");
            str1 = Console.ReadLine();
            Console.Write("Digite a segunda string:  ");
            str2 = Console.ReadLine();
            Console.Write("Digite a terceira string:  ");
            str3 = Console.ReadLine();
            Console.Write("Digite a quarta string:  ");
            str4 = Console.ReadLine();

            // ***** Inversão do conteúdo das variáveis *****
            auxl = str1; // Guarada o conteúdo de str1 para deixa-lo seguro
            str1 = str4;
            str4 = auxl;

            auxl = str2; // Guarada o conteúdo de str2 para deixa-lo seguro
            str2 = str3;
            str3 = auxl;

            Console.WriteLine("\nStrings invertidas: \n" + str1+ "\n" +str2+ "\n" +str3+ "\n" +str4+ "\n"); // Deve-se concatenar com o símbolo de mais

            Console.ReadKey();

        }
    }
}
