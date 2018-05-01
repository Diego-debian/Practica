import java.util.Scanner;
import java.util.InputMismatchException;
import java.util.*;
public class Coeficientes{
    public static void main(String[] args){
	Scanner mEntrada = new Scanner(System.in);
	System.out.println("Programa que factoriza una ecuación cuadrática.");
	System.out.println("Organice la ecuación de la siguiente forma: \n Ax² +Bx + C = 0");
	try{
	    System.out.println("Ingrese el valor de A");
	    float A = mEntrada.nextFloat();
	    if ((int)A == 0){
		System.out.println("A no puede ser 0.");
	    }
	    else {
		System.out.println("Ingrese el valor de B");
		float B = mEntrada.nextFloat();
		
		System.out.println("Ingrese el valor de C");
		float C = mEntrada.nextFloat();
		//		System.out.println("####################################################################################");
		System.out.println("La ecuación queda de la siguiente forma:\n" +  A+ "x² + "+B+"x + "+ C);


		int D = isReal(A,B,C);
		if (D == 0){
		    //		    System.out.println("####################################################################################");
		    System.out.println("Las raices de la ecuación son: ");
		    double x1 = (double) numReal(A,B,C).get(0);
		    double x2 = (double) numReal(A,B,C).get(1);
		    double x11 = (double) 2*A;
		    double X1 = x1/x11;
		    double X2 = x2/x11;
		    System.out.println("x1= " + x1 + "/"+ 2*A+ "\t x2= " + x2+ "/"+ 2*A);
		    //		    System.out.println("####################################################################################");
		    System.out.println("Factorizado queda de la siguiente forma: ");
		    System.out.println(A+"*(x + (" + x1 + "/"+ 2*A+ "))*(x + ("+ x2+ "/"+ 2*A+"))\t o\n" +A+"*(x + (" + X1 + "))*(x + ("+ X2+"))\n ");

		}
		
		if (D==1){
		    System.out.println("####################################################################################");
		    System.out.println("Las raices de la ecuación son: ");
		    System.out.println("x1 = "+ B +"/"+2*A+" \t x2 = "+ B +"/"+2*A);
		    //		    System.out.println("####################################################################################");

		    System.out.println("Factorizado queda de la siguiente forma: ");
		    System.out.println(A+"*(x + ("+B+"/"+2*A+"))²");		    		    System.out.println(A+"*(x + ("+B/(2*A)+"))²");
		}

		if (D == 2){
		    //		    System.out.println("####################################################################################");
		    System.out.println("Las raices de la ecuación compleja son ");
		    double x1 = (double) numComplex(A,B,C).get(0);
		    double x2 = (double) numComplex(A,B,C).get(1);
		    System.out.println("x1= " + x1 +  " + (" + x2 + ")i \t x2= " + x1 +  " - (" +x2 +")i");
		    //		    System.out.println("####################################################################################");
		    System.out.println("Factorizado queda de la siguiente forma: ");
		    System.out.println(A+ "*(x +((" + x1 +  ") + (" + x2 + ")i))*(x + ((" + x1 +  ") - (" +x2 +")i))");
		}

	    }
	    
	}catch(InputMismatchException ime){
	    System.out.println("No introduzca carecteres, se esperan números.");
	}
    }
    	 static int isReal(float a, float b, float c){
	    float D;
	    int R;
	    D = b*b - 4*a*c;
	    R = 0;
	    if (D>0){
	       R = 0;
	    }
	    if (D==0){
		R = 1;
	    }
	    if (D<0){
		R = 2;
	    }
	    return R;
	}
    
     static List numReal(float a, float b, float c){
	 List<Double> Raices = new ArrayList<Double>();
	 double D;
	 double R1;
	 double R2;
	 D = Math.sqrt(b*b - 4*a*c);
	 R1 = (D-b)*(-1);
	 R2 = (-D-b)*(-1);
	 Raices.add(R1);
	 Raices.add(R2);
	 return Raices;	
	
    }

    static List numComplex(float a, float b, float c){
	List<Double> Raices = new ArrayList<Double>();
	double D;
	double R1;
	double R2;
	double B = (double) b;
	double A = (double) a;

	D = Math.sqrt(4*a*c- b*b);
	R1 = B/(2*A);
	R2 = D*(-1)/(2*A);
	Raices.add(R1);
	Raices.add(R2);
	return Raices;	
	
    }
}
