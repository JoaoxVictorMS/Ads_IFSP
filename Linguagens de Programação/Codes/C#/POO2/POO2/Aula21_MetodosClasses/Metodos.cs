using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula21_MetodosClasses
{
    internal class Metodos
    {
        // Métodos Simples
        public void Saudar()
        {
            Console.WriteLine("Olá!");
        }

        // Métodos com Parâmetros
        public void Somar(int numero1, int numero2)
        {
            int resultado = numero1 + numero2;
            Console.WriteLine("A soma é: " + resultado);
        }

        public void Apresentar(string nome, int idade)
        {
            Console.WriteLine("Meu nome é " + nome + " e tenho "
                + idade + " anos");
        }

        // Passagem de parâmetros por valor
        public void AumentarValor(int numero1)
        {
            numero1 += 10;
            Console.WriteLine("Por valor: " + numero1);
        }

        // Passagem de parâmetros por referência
        public void AumentarRef(ref int numero1)
        {
            numero1 += 10;
            Console.WriteLine("Por referência: " + numero1);
        }

        // Métodos com retorno de valores
        public string MontaNome(string nome, string sobrenome)
        {
            //string nomeCompleto = nome + " " + sobrenome;
            return nome + " " + sobrenome;
        }

        public int CodigoChar(char caractere)
        {
            int codigo = caractere;
            return codigo;
        }
        public double ValorPI()
        {
            return 3.1415;
        }

        //Sobrecarga de Métodos (overloading)
        public void Saudar(string nome)
        {
            Console.WriteLine("Olá "+nome);
        }

        public void Saudar(string nome, int idade)
        {
            Console.WriteLine("Olá "+ nome + " "+ idade);
        }

        public bool Comparar(int num1,  int num2)
        {
            return num1 == num2;
        }

        public bool Comparar(string texto1, string texto2)
        {
            return texto1 == texto2;
        }



    }
}
