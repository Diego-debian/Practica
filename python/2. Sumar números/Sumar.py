#*-* coding:utf-8*-*

def Sumar(a, b):
    c = a + b
    return c

print "Programa que suma números"
a = raw_input("Ingrese el primer número: ")
b= raw_input("Ingrese el segundo número: ")
a = float(a)
b = float(b)
c = Sumar(a, b)
print "la suma de: " + str(a)+ "+"+str(b)+" = "+ str(c)


