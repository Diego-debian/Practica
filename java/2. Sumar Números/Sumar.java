//correr con "javac Sumar.cpp"
//"java Sumar"
//Se import el paquete scanner para interactuar con el usuario
import java.util.Scanner;

//Se crea la clase Sumar
public class Sumar{
    //Se crea la función main
    public static void main(String[] arg){
	//varable de tipo float para almacenar la suma
	float S;

	//Se crea una instancia de Scanner con el nombre de lectura
	Scanner lectura = new Scanner(System.in);

	//Se solicita un número al usuario, si es decimal use la coma
	System.out.println("Ingrese el primer número");
	//Se lee y almacena la entrada del usuario en una variable
	float num1 = lectura.nextFloat();

	//Se solicita un número al usuario, si es decimal use la coma
	System.out.println("Ingrese el segundo número");
	//Se lee y almacena la entrada del usuario en una variable
	float num2 = lectura.nextFloat();

	//Se invoca a la función suma con los parametros ingresados por usuario.
	S = sumas(num1,num2);

	//Se imprime la suma 
	System.out.println("La suma es: "+ S);
    }

    //función sumas, recibe dos parametros y devuelve uno
    //Se reconoce que es una función por el parametro static
    static float sumas(float a, float b){
	float c;
	c = a+b;
	return c;
    }
}
