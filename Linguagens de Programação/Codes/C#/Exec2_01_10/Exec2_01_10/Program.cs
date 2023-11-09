using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exec2_01_10
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.Write("Insira um valor em decimal no formarto de texto:  ");
            string str = Console.ReadLine();

            
            decimal conv = Decimal.Parse(str);
            Console.WriteLine("\nValor convetido de string para decimal  :" + conv);
            Console.ReadKey();


        }
    }
}
