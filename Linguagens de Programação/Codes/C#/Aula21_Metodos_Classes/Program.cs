using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula21_Metodos_Classes
{
    internal class Program
    {
        static void Main(string[] args)
        {

            #region Métodos com Parâmetros
            Metodos m = new Metodos();
            // Assinaturas: Formas de usar o método. Console.WriteLine possuí 19 assinaturas, ou seja, 19 formas de utiliza-lo
            //m.Saudar();
            //m.Somar(3, 5);
            //m.Apresentar("Marcelo", 28);
            #endregion

            #region Passagem de Parâmetros por Valor e Referência
            //int num1 = 10, num2 = 10;
            //m.AumentarValor(num1);
            //m.AumentarRef(ref num2); // Deve colocar 'ref' antes, indicando novamente que ele será passado por referência

            //Console.WriteLine("Numero 1:" + num1);
            //Console.WriteLine("Numero 2:" + num2);
            #endregion

            //string nomeCompleto = m.MontaNome("José", "Monteiro");
            //int codigoChar = m.CodigoChar('a');
            //double pi = m.ValorPI();

            //Console.WriteLine(nomeCompleto);
            //Console.WriteLine(codigoChar);
            //Console.WriteLine(pi);

            m.Saudar();
            m.Saudar("João");
            m.Saudar("João", 19);

            bool res1 = m.Comparar(5, 19);
            bool res2 = m.Comparar("A", "A");

            Console.WriteLine("Res1: {0}, Res2: {1}", res1, res2);

            Console.ReadKey();


        }
    }
}
