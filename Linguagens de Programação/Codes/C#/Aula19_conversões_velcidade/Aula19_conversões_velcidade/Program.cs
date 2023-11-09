using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula19_conversões_velcidade
{
    internal class Program
    {
        static void Main(string[] args)
        {

            double[] velocidades = new double[3];
            Console.Write("Informe a velocidade em km/h: ");
            velocidades[0] = double.Parse(Console.ReadLine());

            // Mp/h = km/h / 1.609
            velocidades[1] = velocidades[0] / 1.609;


            // Knots = km/h / 1,852
            velocidades[2] = velocidades[0] / 1.852;

            Console.WriteLine("Mp/h: " + velocidades[1]);
            Console.WriteLine("Knots: " + velocidades[2]);
            Console.ReadKey();
        }
    }
}
