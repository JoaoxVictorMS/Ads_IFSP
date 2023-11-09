using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exec2_POO
{
    internal class Program
    {
        static void Main(string[] args)
        {

                
                ContaBancaria conta1 = new ContaBancaria("João");

                
                conta1.ExibirSaldo();

                
                conta1.Depositar(100);

                
                conta1.ExibirSaldo();

                
                conta1.Sacar(50);

                
                conta1.ExibirSaldo();

                
                ContaBancaria conta2 = new ContaBancaria("Maria", 500);

               
                conta2.ExibirSaldo();

                
                conta2.SacarComoDeposito(-200);

                
                conta2.ExibirSaldo();

            Console.ReadKey();
        }
    }
}
