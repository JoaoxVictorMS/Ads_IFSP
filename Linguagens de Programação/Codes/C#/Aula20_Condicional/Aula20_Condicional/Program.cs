using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula20_Condicional
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region Condição simples

            // ***** Apenas com if e else *****

            //int val = 10;
            //if (val == 10){

            //    Console.WriteLine("Verdadeiro");


            //} else {

            //    Console.WriteLine("False");

            //}
            #endregion

            //int val = 15;

            //if (val < 5) {

            //    Console.WriteLine("Valor é menor do que 5");

            //} else if (val > 10) {

            //    Console.WriteLine("Valor é maior do que 10");

            //} else {

            //    Console.WriteLine("Valor está entre 5 e 10");

            //}

            #region Condição Encadeada
            //int val = 5;
            //if (val < 10) {

            //    Console.WriteLine("Valor é menor que 10");

            //}
            //else if (val >= 10 && val < 15) {

            //    Console.WriteLine("Valor maior que 10 e menor que 15");

            //} else if (val >= 15 && val < 20) {

            //    Console.WriteLine("Valor maior que 15 e menor que 20");

            //} else {

            //    Console.WriteLine("Valor fora das condições!");

            //}
            #endregion

            //int num = 10;

            //if(num > 5){

            //    Console.Write("Números é maior de que 5");
            //    if (num % 2 == 0) {

            //        Console.WriteLine(" e também é par");

            //    } else {

            //        Console.WriteLine(" e também é ímpar");

            //    }


            //} else {

            //    Console.WriteLine("Números é menor ou igual a 5");

            //}


            int val = 10;
            // Operador Ternário
            // Condição ? true : false;
            Console.WriteLine(val > 10 ? "Valor > 10" : "Valor <= 10"); // Os dois pontos separam a condição verdadeira da falsa





            Console.ReadKey();
        }
    }
}
