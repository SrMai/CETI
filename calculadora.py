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
    print("-------------------------------")
    print("Escoja una opción.")
    
    operacion = input("")
    os.system("cls")
    print("Escribe el número 1.")
    numero1 = input("")
    print("Escribe el número 2.")
    numero2 = input("")
    operaciones(operacion, numero1, numero2)

def operaciones(operacion, numero1, numero2):
    if operacion == '1':#Suma
        return numero1+numero2
    elif operacion == '2':#Resta
        return numero1-numero2
    elif operacion == '2':#Multiplicación
        return numero1*numero2
    elif operacion == '2':#División
        return numero1/numero2
    
menu()
#if '*' in opcion:
#    print ("Multiplicacion")
#elif '+' in opcion:
#    print ("Suma")
#elif '-' in opcion:
#    print ("Resta")
#elif '/' in opcion:
#    print ("Division")
    
