using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula21_ClassesObjetos
{
    internal class Program
    {
        static void Main(string[] args)
        {
            MinhaClasse mClasse = new MinhaClasse();
            MinhaClasse mClasse2 = null;

            SegundaClasse segunda = new SegundaClasse();
            SegundaClasse segunda1 = segunda;

            Pessoa p1 = new Pessoa();
            p1.nome = "Jhonatan";
            p1.sobrenome = "Galante";
            p1.anoNascimento = 1996;

            Pessoa p2 = new Pessoa()
            {
                nome = "João",
                sobrenome = "Santos",
                anoNascimento = 2002
            };

            Console.WriteLine("Nome: " + p1.nome + ", Sobrenome: " +
                p1.sobrenome + ", Ano de nascimento: " +
                p1.anoNascimento);

            p1.Saudar();
            p2.Saudar();


            Console.ReadKey();
        }
    }
    class MinhaClasse
    {

    }

}
