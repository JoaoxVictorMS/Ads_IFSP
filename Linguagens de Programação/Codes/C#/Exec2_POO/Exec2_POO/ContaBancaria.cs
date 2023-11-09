using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exec2_POO
{
    internal class ContaBancaria
    {

        private string titular;
        private double saldo;

        
        public ContaBancaria(string titular)
        {
            this.titular = titular;
            this.saldo = 0;
        }

        
        public ContaBancaria(string titular, double saldoInicial)
        {
            this.titular = titular;
            this.saldo = saldoInicial;
        }

       
        public void ExibirSaldo()
        {
            Console.WriteLine("Saldo da conta de " + titular + " R$" + saldo);
        }

        
        public void Depositar(double valor)
        {
            saldo += valor;
            Console.WriteLine("Depósito de R$" + valor + " na conta de " + titular);
        }

        
        public void Sacar(double valor)
        {
            if (valor > 0 && valor <= saldo)
            {
                saldo -= valor;
                Console.WriteLine("Saque de R$" + valor + " na conta de " + titular);
            }
            else
            {
                Console.WriteLine("Saldo insuficiente ou valor inválido para saque.");
            }
        }

        
        public void SacarComoDeposito(double valor)
        {
            if (valor < 0)
            {
                saldo -= valor;
                Console.WriteLine("Depósito de R$" + Math.Abs(valor) + " na conta de " + titular);
            }
            else
            {
                Console.WriteLine("Valor inválido para depósito.");
            }
        }



    }
}
