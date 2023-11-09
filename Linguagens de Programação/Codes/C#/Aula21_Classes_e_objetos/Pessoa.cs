using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula21_Classes_e_objetos
{
    internal class Pessoa
    {

        // Atributos
        // public: pode ser acessado fora da classe
        public string nome;
        public string sobrenome;
        public int ano_nascimento;

        // Métodos simples
        public void Saudar()
        {

            Console.WriteLine("Olá! Me chamo " + nome + " " + sobrenome + ".");

        }


    }
}
