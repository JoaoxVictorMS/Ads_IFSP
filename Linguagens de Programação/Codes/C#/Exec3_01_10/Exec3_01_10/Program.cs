using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace Exec3_01_10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int enum1, enum2, dec_enum1, dec_enum2;
            double snum1;
            float snum2;
            double soma, sub, div, mult, dec_soma, dec_sub, dec_div, dec_mult;

            // Entrada dos dados
            Console.Write("Insira o primeiro valor inteiro:  ");
            enum1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Insira o segundo valor inteiro:  ");
            enum2 = Convert.ToInt32(Console.ReadLine());

            // Conversões
            snum1 = Convert.ToDouble(enum1);
            snum2 = (float)enum2;

            // Operações aritiméticas
            soma = snum1 + snum2;
            sub = snum1 - snum1;
            div = snum1 / snum2;
            mult = snum1 * snum1;


            // Exibindo os resultados das operações
            Console.WriteLine("\nSoma: " + soma);
            Console.WriteLine("\nSubtração: " + sub);
            Console.WriteLine("\nMultiplicação: " + mult);
            Console.WriteLine("\nDivisão: " + div);

            // Incremento e decremento
            enum1++;
            enum2++;
            dec_enum1 = enum1;
            dec_enum1--;
            dec_enum2 = enum2;
            dec_enum2--;

            dec_soma = soma;
            dec_soma--;
            dec_sub = sub;
            dec_sub--;
            dec_div = div;
            dec_div--;
            dec_mult = mult;
            dec_mult--;

            soma++;
            sub++;
            div++;
            mult++;


            // Exibindo os valores depois das operações de incremento e decremento
            Console.WriteLine("\nValor do primeiro número após incremento: " + enum1 + "\nDecremento:  " + dec_enum1);
            Console.WriteLine("\nValor do segundo número após incremento: " + enum2 + "\nDecremento:  " + dec_enum2);

            Console.WriteLine("\nValor da soma incrementado:  " + soma + "\nDecrementado:  " + dec_soma);
            Console.WriteLine("\nValor da subtração incrementado:  " + sub + "\nDecrementado:  " + dec_sub);
            Console.WriteLine("\nValor da divisão incrementado:  " + div + "\nDecrementado:  " + dec_div);
            Console.WriteLine("\nValor da mutiplicação incrementado:  " + mult + "\nDecrementado:  " + dec_mult);


            Console.ReadKey();
        }
    }
}
