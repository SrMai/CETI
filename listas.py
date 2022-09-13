import os


lista_productos = list()

def agregar_producto():
    os.system("cls")
    print("||============================||")
    print("||----------Productos---------||")
    print("||============================||")
    producto=input("Ingresa el nombre del producto: ")
    lista_productos.append(producto.lower())
    print("Agregaste el producto: "+producto)

def eliminar_producto():
    print("||============================||")
    print("||------Eliminar producto-----||")
    print("||============================||")
    producto=input("Nombre del producto: ")
    lista_productos.remove(producto.lower())
    print("Agregaste el producto: "+producto)
    
def consultar_producto():
    os.system("cls")
    print("||============================||")
    print("||------Consultar producto----||")
    print("||============================||")
    producto=input("Nombre del producto: ")
    for producto in lista_productos:
        print(producto)
    print("Agregaste el producto: "+producto)

def actualizar_producto():
    os.system("cls")
    print("||============================||")
    print("||-----Actualizar producto----||")
    print("||============================||")
    producto=input("Nombre del producto que quiere actualizar: ")
    if producto in lista_productos:
        NuevoProducto=input("Ingrese el nuevo nombre del producto: ")
        lista_productos.remove(producto.lower())
        lista_productos.append(NuevoProducto.lower())
        print("Actualizaste el producto: "+producto+" a "+ NuevoProducto)
    else:
        print("El producto "+producto+" no existe.")

#Menú
while True:
    print("1.-Agregar producto")
    print("2.-Eliminar producto")
    print("3.-Consultar producto")
    print("4.-Actualizar productos")
    try:
        operacion = int(input("Elije una opcion: "))
        if operacion >= 5: #Colocar numero de opcion que no tengas
            print ("Error: "+"la opción "+str(operacion)+" no existe."+" Por favor de escribir solo numeros del menú.")
            exit()
            
    except ValueError:
        os.system("cls")
        print ("Error: Por favor de escribir solo numeros")
    
    if operacion == 1:
        agregar_producto()
    elif operacion == 2:
        eliminar_producto()
    elif operacion == 3:
        consultar_producto()
    elif operacion == 4:
        actualizar_producto()
