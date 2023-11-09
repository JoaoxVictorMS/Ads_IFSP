using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula21_Classes_e_objetos
{
    internal class Program
    {
        static void Main(string[] args)
        {
            MinhaClasse mClasse = new MinhaClasse();
            MinhaClasse mClasse2 = null;

            SegundaClasse segunda = new SegundaClasse(); // Instânciamento da classe SegundaClasse
            SegundaClasse segunda2 = segunda; // Instânciando um objeto que recebe outro objeto da mesma classe


            // Formas de instânciar objetos e seus atributos:

            // Forma 1
            Pessoa p1 = new Pessoa();
            p1.nome = "João";
            p1.sobrenome = "Victor";
            p1.ano_nascimento = 2004;

            // Forma 2
            Pessoa p2 = new Pessoa()
            {
                nome = "João",
                sobrenome = "Santos",
                ano_nascimento = 2004
                
            };


            Console.WriteLine("Nome: " + p1.nome + ", Sobrenome: " + p1.sobrenome + ", Ano de nascimento: " + p1.ano_nascimento);
            Console.ReadKey();

            p1.Saudar();
            p2.Saudar();
        }

        class MinhaClasse
        {





        }




    }
}
