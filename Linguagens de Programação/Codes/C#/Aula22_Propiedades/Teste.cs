using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Text;
using System.Threading.Tasks;

namespace Aula22_Propiedades
{
    internal class Teste
    {
        // private -> esse atributo não será visto fora desta classe. Evita que outros devs façam alterações direto no atributo
        private string _nome; // "_" antes do nome  do atributo privado
        /*private string Sobrenome { get; set; }*/ // É possível criar get e set diretamente no atributo

        public string Sobrenome { get; } = "Victor"; // Agora é possível pegar a varíavel, mas não manipula-la

        private int _idade;


        public string Nome
        {

            get
            {
                return _nome;

            }

            set
            {
                _nome = value;
            }
        }

        public int Idade
        {

            get
            {
                return _idade;
            }
            set
            {
                if(value < 18)
                {
                    Console.WriteLine("Idade não pode ser menor qie 18 anos");
                } else
                {
                    _idade = value;
                }
            }

        }


        public void Apresentar()
        {

            if(_nome != "")
            {
                Console.WriteLine("Bem-vindo, " + _nome);
            };

        }
    }

}
