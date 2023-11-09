using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace Exec1_POO
{
    internal class Produto
    {

        private string nome;
        private double preco;
        private int quantidade;
        
        public Produto(string nome, double preco)
        {
            this.nome = nome;
            this.preco = preco;
            this.quantidade = 0;
        }

        public void ExibirProduto()
        {

            Console.WriteLine("Nome: " + nome + "\nPreço: " + preco + "\nQuantidade: " + quantidade);

        }

        public void AdcionarProduto(int quantidade)
        {
            if (quantidade > 0)
            {
                this.quantidade += quantidade;
            }

        }

        public void AdcionarProduto(double quantidade)
        {
            if (quantidade > 0)
            {
                this.quantidade += (int)quantidade;
            }

        }

        public void SubtrairProduto(int Quantidade, int sub)
        {
            Quantidade = Quantidade - sub;

        }

        public int Quantidade
        {
            get
            {
                return quantidade;
            }
            set
            {
                if (value >= 0)
                {
                    quantidade = value;
                }
                else
                {
                    Console.WriteLine("Não existe quantidade negativa de produtos!");
                }
            }
        }

    }
}
