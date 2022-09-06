#Crear funciones para la calculadora
#programa con calculadora sin interfaz
from cmath import inf
import os
print("||============================||")
print("||---------Calculadora--------||")
print("||============================||")

def menu():
    print("--------------Menú--------------")
    print("1.-Suma")
    print("2.-Resta")
    print("3.-Multiplicacion")
    print("4.-Division")
    print("5.-Potencia")
    print("6.-Porcentaje")
    print("-------------------------------")
    print("Escoja una opción.")
    try:
        operacion = int(input("Elije una opcion: "))
        if operacion >= 7: #Colocar numero de opcion que no tengas
            os.system("cls")
            print ("Error: Por favor de escribir solo numeros del menú.")
            exit()
        numero1 = float(input("Numero 1: "))
        numero2 = float(input("Numero 2: "))
    except ValueError:
        print ("Error: Por favor de escribir solo numeros")
    
    operaciones(operacion, float(numero1), float(numero2))

def operaciones(operacion, numero1, numero2):
    if operacion == 1:#Suma
        print ("Suma: ")
        print(str(numero1)+"+"+str(numero2))
        print("=")
        print (numero1+numero2)
    elif operacion == 2:#Resta
        print ("Resta: ")
        print(str(numero1)+"-"+str(numero2))
        print("=")
        print (numero1-numero2)
    elif operacion == 3:#Multiplicación
        print ("Multiplicación: ")
        print(str(numero1)+"*"+str(numero2))
        print("=")
        print (numero1*numero2)
    elif operacion == 4:#División
        print ("División: ")
        print(str(numero1)+"/"+str(numero2))
        print("=")
        print (numero1/numero2)
    elif operacion == 5:#Potencia
        print ("Potencia: ")
        print(str(numero1)+"**"+str(numero2))
        print("=")
        print (numero1**numero2)
    elif operacion == 6:#Porcentaje
        print ("Porcentaje: ")
        print(str(numero1)+"*"+str(numero2)+"/100")
        print("=")
        print (numero1*numero2/100)
    

menu()
