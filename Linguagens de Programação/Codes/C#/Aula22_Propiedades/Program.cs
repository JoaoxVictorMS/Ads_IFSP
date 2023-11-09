using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Propiedades
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Teste t1 = new Teste();
            t1.Nome = "João";
            t1.Idade = 18;
            t1.Sobrenome = "Monteiro";
            Console.WriteLine(t1.Nome);
            Console.ReadKey();

        }
    }
}
