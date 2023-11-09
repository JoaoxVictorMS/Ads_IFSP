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
            // Construtores: Criar objetos padrão que preenchem aquela classe
            Pessoa p1 = new Pessoa();
            //p1.nome = "João";
            Console.WriteLine(p1.nome);
            Console.WriteLine(p1.sobrenome);
            Console.WriteLine(p1.altura);
            Console.WriteLine(p1.ano_nascimento);

            // Pode colocar todos os atributos do objeto na mesma linha
            Pessoa p2 = new Pessoa("João", "Victor", 1.84, 2004);
            Console.WriteLine(p2.nome);
            Console.WriteLine(p2.sobrenome);
            Console.WriteLine(p2.altura);
            Console.WriteLine(p2.ano_nascimento);

            Console.ReadKey();

        }
    }
}
