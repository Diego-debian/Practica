#*-* coding:utf-8 *-*
def suma(a, b):
    c = a + b
    return c

def resta(a,b):
    c = a - b
    return c

def multiplica(a,b):
    c = a*b
    return c

def divide(a, b):
    c = a/b
    return c

print "Prográma que cálcula la suma, resta, multiplicación y división de dos números."

try:
    a = raw_input("ingrese el primer número: ")
    a = float(a)
    b = raw_input("ingrese el segundo número: ")
    b = float(b)
    try:
        print "La suma de ("+ str(a) + " + " +str(b) + ") es " + str(suma(a,b))
        print "La resta de ("+ str(a) + " - " +str(b) + ") es " + str(resta(a,b))
        print "La multiplicación de ("+ str(a) + " * " +str(b) + ") es " + str(multiplica(a,b))
        print "La división de ("+ str(a) + " / " +str(b) + ") es " + str(divide(a,b))

    except:
        print "La división por cero no eta definida"
except:
    print "No puede ingresar letras, se esperan números."
