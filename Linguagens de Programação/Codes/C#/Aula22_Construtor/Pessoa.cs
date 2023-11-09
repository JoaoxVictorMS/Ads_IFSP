using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Aula22_Construtor
{
    internal class Pessoa
    {

        public string nome;
        public string sobrenome;
        public double altura;
        public int ano_nascimento;
        
        // Atributos primeiro, construtores depois
        // Construtor -> Toda vez que instaciar objetos desta classe, esses valores virão por padrão. Deafult class values
        public Pessoa()
        {

            nome = "Desconhecido";
            sobrenome = "Nenhum";
            altura = 1.84;
            ano_nascimento = 2004;

        }

        // Pode fazer sobrecarga dos construtures
        public Pessoa(string nome, string sobrenome, double altura, int ano_nascimento)
        {

            this.nome = nome; // this -> Indica para o interpretador qual varável está se referindo, no caso os da classe Pessoa
            this.sobrenome = sobrenome;
            this.altura = altura;
            this.ano_nascimento = ano_nascimento;


        }

    }
}
