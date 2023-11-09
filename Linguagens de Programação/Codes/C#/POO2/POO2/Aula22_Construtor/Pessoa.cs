using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Construtor
{
    internal class Pessoa
    {
        public string nome;
        public string sobrenome;
        public double altura;
        public int anoNascimento;


        //Construtor
        public Pessoa()
        {
            nome = "Desconhecido";
            sobrenome = "Nenhum";
            altura = 1.80;
            anoNascimento = 1996;
        }
        public Pessoa(string nome, string sobrenome, double altura, int anoNascimento)
        {
            this.nome = nome;
            this.sobrenome = sobrenome;
            this.altura = altura;
            this.anoNascimento = anoNascimento;
        }

    }
}
