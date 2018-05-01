#*-* coding:utf-8*-*
#Diego Alberto Parra Garzón
#Bogotá D.C.,  Colombia;
import math

def isReal(a, b, c):
    d = b*b - 4*a*c
    d = int(d)
    output = 0
    if (d>0):
        print "Es real"
        output = 2
    if (d<0):
        print "Es complejo"
        output = 1
    if(d==0):
        print "Es real básic"
        output = 0
    return output

def numComplex(a,b,c):
    d = math.sqrt(4*a*c - b*b)
    A = b/(2*a)
    B = (d/(2*a))*(-1)
    return A, B

def numReal(a,b,c):
    d = math.sqrt(b*b-4*a*c)
    A = (-b + d)*(-1)
    B = (-b - d)*(-1)
    return A, B

print "Programa que cálcula las raices de una ecuación de grado 2"
print "Organice la ecuación de la siguiente forma: \n Ax² + Bx + C = 0"
A = raw_input("Ingrese el valor de A: ")
A = float(A)
if int(A) == 0:
    print "A no puede ser 0"
    exit()
    quit()
else:
    B = raw_input("Ingrese el valor de B: ")
    B = float(B)
    C = raw_input("Ingrese el valor de C: ")
    C = float(C)

    print "la ecuación queda de la siguiente forma: \n "+str(A)+"x² + "+str(B)+"x + "+str(C)+" = 0"

    
    NumberFamily = isReal(A,B,C)
    # 0 si es real fácil
    # 1 si es complejo
    # 2 si es real
    if (NumberFamily == 0):
        print "Las raices de la ecuaciión son: \n x1 ="+ str(B) + "/"+str(2*A) +" \t x2 = "+ str(B) + "/"+str(2*A)
        print "Realizando las operaciones. "
        print "x1 ="+ str(B/(2*A)) +" \t x2 = "+ str(B/(2*A))
        print "##############################################"
        print "Factorizando queda de la siguiente forma: "
        print str(A)+"*(x + ("+ str(B/(2*A))+"))²"
        
    if (NumberFamily == 1):
        x1, x2 =  numComplex(A,B,C)
        X1 = "(("+str(x1)+")+("+str(x2)+")i)"
        X2 =  "(("+str(x1)+"-)+("+str(x2)+")i)"
        print "Las raices de la ecuación compleja son: \n x1 = " + str(x1)+" + ("+ str(x2)+")i \n x2 = " + str(x1)+" - ("+ str(x2)+")i"
        
        print "##############################################"
        print "Factorizando queda de la siguiente forma: "
        print str(A)+"*(x +"+X1+" )*(x +"+X2+")"
        
    if (NumberFamily == 2):
        x1, x2 =  numReal(A,B,C)
        X1 =  str(x1) + "/"+str(2*A)  
        X2 =   str(x2) + "/"+str(2*A)
        X11 = str(x1/(2*A))
        X22 = str(x2/(2*A))
        print "Las raices de la ecuaciión son: \n x1 ="+X1 +" \t x2 = "+ X2
        print "Realizando las operaciones. "
        print "x1 ="+ X11 +" \t x2 = "+ X22
        print "##############################################"
        print "Factorizando queda de la siguiente forma: "
        print str(A)+"*(x +("+X1+"))*(x +("+X2+"))"

