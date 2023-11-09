using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula19_controle
{
    internal class Program
    {
        static void Main(string[] args)
        {

        // ***** Uso do switch case *****
        
        //int pick = 1;

        //switch (pick) {

        //    case 1:
        //        Console.WriteLine("Opc 1");
        //        break;

        //    case 2:
        //        Console.WriteLine("Opc 2");
        //        break;

        //    case 3:
        //        Console.WriteLine("Opc 3");
        //        break;

        //    default:
        //        Console.WriteLine("Opc padrão");
        //        break;
        //}

        //string pick2 = "A";

        //switch (pick2) {

        //    case "A":
        //        //
        //        break;

        //    case "B":
        //        //
        //        break;

        //    case "C":
        //        //
        //        break;

        //}

        // ***** Uso do GOTO com switch *****
        Início:
            Console.Write("Escolha a opção 1 ou 2:  ");
            int op = int.Parse(Console.ReadLine());
            int valor = 0;

            switch (op) {

                case 1:
                    valor += 100;
                    break;

                case 2:
                    valor += 50;
                    goto case 1;

                default:
                    goto Início;
                    // break; -> Nunca será executado. Código inacessível detectado
            }
            Console.WriteLine("Total: " + valor);
            Console.ReadKey();




            // Conversão de kilometros por hora para milha por hora e para nós
            // Usuário informa velocidade em km/h
            // mp/h --> km/h / 1,600 || nós --> km/h / 1,852 (TODOS DO TIPO DOUBLE)

            // double[] velocidades = new double[3];

        }
    }
}
