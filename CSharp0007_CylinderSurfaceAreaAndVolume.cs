using System;

namespace CSharp0007_CylinderSurfaceAreaAndVolume
{
    class CSharp0007_CylinderSurfaceAreaAndVolume
    {
        static void Main(string[] args)
        {
            double Feet = 3.2808399;

            Console.Write("Type the radius of cylinder: ");
            float radius = float.Parse(Console.ReadLine());
            Console.Write("Type the high of cyclinder: ");
            float high = float.Parse(Console.ReadLine());

            float result = (float)(2 * Math.PI * radius * (high + radius));
            float result2 = (float)(Math.PI * radius * radius * high);

            Console.WriteLine("The surface area of cylinder is " + result + " meters^2 and " + result * Feet * Feet + " feets^2.");
            Console.WriteLine("The volume of cylinder is " + result2 + " meters^3 and " + result2 * Feet * Feet * Feet + " feets^3.");
        }
    }
}
