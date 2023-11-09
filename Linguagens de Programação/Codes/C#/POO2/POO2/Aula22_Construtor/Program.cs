using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Construtor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Pessoa p1 = new Pessoa();
            //p1.nome = "Marcio";
            Console.WriteLine(p1.nome);
            Console.WriteLine(p1.sobrenome);
            Console.WriteLine(p1.altura);
            Console.WriteLine(p1.anoNascimento);

            Pessoa p2 = new Pessoa("Jhonatan", "Galante", 1.80, 1996);
            Console.WriteLine(p2.nome);
            Console.WriteLine(p2.sobrenome);
            Console.WriteLine(p2.altura);
            Console.WriteLine(p2.anoNascimento);

            Console.ReadKey();
        }
    }
}
