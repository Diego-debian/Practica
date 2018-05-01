import java.util.Scanner;
import java.util.InputMismatchException;

public class calcular{
    public static void main(String[] args){
	Scanner Lectura = new Scanner(System.in);
	System.out.println("Programa que calcula la suma, resta, multiplicación y división de dos números");
	try{
	    System.out.println("Ingrese el primer número: ");
	    float num1 = Lectura.nextFloat();
	    System.out.println("ingrese el segundo número");
	    float num2 = Lectura.nextFloat();

	    float Suma;
	    float Resta;
	    float Multi;
	    float Divi;
	    Suma = suma(num1, num2);
	    Resta = resta(num1, num2);
	    Multi = multiplica(num1, num2);
	    Divi = divide(num1, num2);
	    System.out.println("La suma de "+ num1 + " + "+ num2+ " es " + Suma);
	    System.out.println("La resta de "+ num1 + " + "+ num2+ " es " + Resta);
	    System.out.println("La multiplicación de "+ num1 + " + "+ num2+ " es " + Multi);
	    System.out.println("La división de "+ num1 + " + "+ num2+ " es " + Divi);

	}

	catch(InputMismatchException e){
	    System.out.println("No introduzca carecteres, se esperan números.");
	}
	
    }

    static float suma(float a, float b){
	float c;
	c = a+b;
	return c;
    }
    
    static float resta(float a, float b){
	float c;
	c= a-b;
	return c;
    }
    
    static float multiplica(float a, float b){
	float c;
	c = a*b;
	return c;	    
    }
    
    static float divide(float a, float b){
	float c;
	c = a/b;
	return c;
    }
}
