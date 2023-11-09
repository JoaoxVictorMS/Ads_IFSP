using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Exercicio_POO
{
    internal class Produto
    {

        string Nome;
        double Preco;

        private string _quantidade;
        public int Quantidade
        {
            get
            {
                return _quantidade;     
            }
            set
            {
                if (value < 0)
                {
                    Console.WriteLine("Não existe quantidade negativa de produtos!");
                } else
                {
                    _quantidade = value;
                }
            }
        }

        
        public Produto(string Nome, double Preco, int Quantidade)
        {
            this.Nome = Nome;
            this.Preco = Preco;
            this.Quantidade = Quantidade;
        }
    
        public string ExibirProduto(string Nome, double Preco, int Quantidade)
        {

            Console.WriteLine("Nome :\n" + Nome + "Preço :\n" + Preco + "Quantidade :\n" Quantidade);  
            
        }

        public void AdcionarProduto(int Quantidade, int add)
        {
            Quantidade = Quantidade + add;
 
        }

        public void SubtrairProduto(int Quantidade, int sub)
        {
            Quantidade = Quantidade - sub;

        }

        public void AdcionarProduto(double Quantidade, int add)
        {
            Quantidade = Quantidade + add;

        }

    }





}
