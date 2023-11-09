using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula21_ClassesObjetos
{
    internal class Pessoa
    {
        //Atributos
        public string nome;
        public string sobrenome;
        public int anoNascimento;

        // Métodos Simples
        public void Saudar()
        {
            Console.WriteLine("Olá! Me chamo " + nome + " " +
                sobrenome + ".");
        }

    }
}
