package Beginner;

import java.util.Scanner;
import java.lang.Math;

public class Java0007_CylinderSurfaceAreaAndVolume {

    public static void main(String[] args) {

        double Feet = 3.2808399;

        System.out.print("Type the radius of cylinder: ");
        Scanner scan = new Scanner(System.in);
        float radius = scan.nextFloat();
        System.out.print("Type the high of cyclinder: ");
        float high = scan.nextFloat();

        float result = (float) (2 * Math.PI * radius * (high+radius));
        float result2 = (float) (Math.PI * radius * radius * high);

        System.out.println("The surface area of cylinder is "+ result +" meters^2 and "+ result * Feet * Feet +" feets^2.");
        System.out.print("The volume of cylinder is "+ result2 +" meters^3 and "+ result2 * Feet * Feet * Feet +" feets^3.");
    }
}
