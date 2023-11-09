using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Propriedades
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Teste t1 = new Teste();
            t1.Nome = "Mario";
            t1.Idade = 8;
           // t1.Sobrenome = "Almeida";
            Console.WriteLine(t1.Nome);
            Console.ReadKey();
        }
    }
}
