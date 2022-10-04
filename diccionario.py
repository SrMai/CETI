print("------ Agenda Telefonica -------")
#dict son una coleccion en que los indices en vez de ser un numerico corresponden a un "idendificador"
agenda_telefonica = dict()
 
def agregar_contacto():
    nombre = input("Nombre del nuevo contacto: ")
    numero = input("Numero del contacto: ")
    agenda_telefonica [nombre] = numero
    print()
    print("-------Nuevo Contacto-----------")
    print("Contacto Agregado")
    print("--------------------------------")
    print()
 
def remover_contacto():
    nombre = input("Nombre del contacto a borrar: ")
    try:
        del agenda_telefonica[nombre]
    except KeyError:
        print()
        print("-------------Warning--------------")
        print("Contacto no existe")
        print("----------------------------------")
        print()
    else:
        print()
        print("-------Agenda Telefoncia---------")
        print("Contacto Eliminado")
        print("---------------------------------")
        print()
 
def actualizar_contacto():
    nombre = input("Nombre del contacto a actualizar: ")
    numero = input("Nuevo Numero")
    agenda_telefonica[nombre] = numero
    print()
    print("-------Agenda Telefoncia---------")
    print("Contacto Actualizado")
    print("---------------------------------")
    print()
 
def ver_contacto():
    nombre = input("Nombre del contacto: ")
    print()
    print("---------------Contacto-----------------")
    try:
        print("Nombre: "+ nombre +" - Numero Tel: "+agenda_telefonica[nombre])
    except KeyError:
        print("Ese contacto no existe")
        print("------------------------------------")
        print()
 
def ver_todo():
    print()
    print("--------------Todos los contactos------")
    if len(agenda_telefonica) == 0:
        print("Agenda Vacia")
    else:
        for contacto in agenda_telefonica:
            print("Nombre: "+contacto+"- Numero Tel: "+agenda_telefonica[contacto])
            print("--------------------------------")
            print()
 
while True:
    print("1 - agregar Contacto")
    print("2 - remover contacto")
    print("3 - actualizar contacto")
    print("4 - Ver contacto")
    print("5 - Ver todos los contactos")
    print("6 - Salir")
 
    try:
        operacion = int(input(": "))    
    except ValueError:
        print()
        print("Selecciona un numero del 1 al 6")
        print()
    else:
        if operacion == 1:
            agregar_contacto()
        elif operacion == 2:
            remover_contacto()
        elif operacion == 3:
            actualizar_contacto()
        elif operacion == 4:
            ver_contacto()
        elif operacion == 5:
            ver_todo()
        elif operacion == 6:
            break
        else:
            print("Operacion Desconocida")
print()
print("Bye - Adios -")
print()
