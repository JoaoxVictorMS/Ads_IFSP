using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula17_TiposDados
{
    internal class Program
    {
        // Para atribuir valores para os objetos da classe Pessoa, deve ser colocado o public para o programa poder "enxergar" tais atribu
        struct Pessoa
        {
            public string nome;
            public int idade;
            public double altura;
        }


        static void Main(string[] args)
        {
            #region INT

            // Inteiros assinados -> Suportam números negativos
            // Inteiros sem sinal -> Não suportam números negativos

            // Inteiros assinados:
            sbyte num1 = 10; // 8 bits, de -128 a 127 
            short num2 = 20; // 16 bits, de -32.768 a 32.767
            int num3 = 30; // 32, de -2.147.483.648 a 2.147.483.647
            long num4 = 40L; // 64 bits. Chuta o pal da barraca. Grande pra burro. Alguns casos é necessário colocar um "L" maiúsculo no final do valor da variável

            // Inteiros sem sinal:
            byte num5 = 15; // 8 bits, de 0 a 255
            ushort num6 = 21; // 16 bits. de 0 a 65.535
            uint num7 = 22; // 32 bits, de 0 a 4.294.967.295
            ulong num8 = 23L; // 64 bits. Chuta o pal da barraca. Grande pra burro. Alguns casos é necessário colocar um "L" maiúsculo no final do valor da variável



            // Declara e depois atribui um valor ou só atribui direto
            //sbyte numero;
            //numero = 100;
            //Console.WriteLine(numero); // printf

            #endregion

            #region REAIS

            float numeroreal1 = 50.77f;  // Coloque um "f" no final do valor da variável para não dar erro
            double numeroreal2 = 50.77; // A solução para não colocar o "f" é criar uma variável do tipo double
            decimal numeroreal3 = 50.77m; // 128 bits. Mastodôntico. "m" quando colcoa o valor da variável direto no código

            //double valor;
            //valor = numeroreal1;
            //Console.WriteLine(valor);

            #endregion

            #region CARACTERE

            char letra = 'C'; // Aspas simples armazenam apenas UM caractér

            #endregion

            #region BOOLEANOS

            bool verificar = false; // False por default.
            bool verificar2 = true;
            //Console.WriteLine(verificar);
            #endregion

            #region STRING

            string texto = "Hello\nWord!";
            string menssagem = null;
            menssagem = texto;
            // Console.WriteLine(menssagem);

            #endregion

            #region VAR
            // Recebe qualquer tipo de variável, tratando qualquer tipo de dado
            // Consome muito recursos computacional

            // Não é possível reatribuir um tipo de dado diferente ao primeiro tipo declarado, no caso uma string
            // Deve reatribuir com o mesmo tipo de dado
            var valor10 = 70;
            valor10 = 50; // CERTO
                          // valor10 = 85; ERRADO


            #endregion

            #region OBJECT

            // Dado base para todos os outros
            // Altera em tempode execução
            // Pode reatribuir com vários tipo de dados diferentes, diferentimente do var
            // Em alguns casos é necessários realizar conversões para reatribuir com outros tipos de dados
            object obj = 100;
            obj = false
            obj = "Texto"

            #endregion

            #region CONSTANTES
            // const sempre deve receber uma valor juntamente de seu tipo

            const double pi = 3.14;
            // pi = 3.15;

            #endregion

            #region STRUCTS
            // São criadas iguais em C
            // new cria um novo objeto para a classe Pessoa

            Pessoa p1 = new Pessoa();
            p1.nome = "Joao";
            p1.idade = 19;
            p1.altura = 1.84;


            #endregion


            Console.ReadKey();
        }
    }
}
