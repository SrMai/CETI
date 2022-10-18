import sqlite3

def getNameCitas():
    nombre = input("Ingrese su nombre: ")
    return nombre

def conexionSql():
    try:
        con=sqlite3.connect('citas.db')
        return con
    except ValueError:
        print("Error en la conexión "+ ValueError)

con = conexionSql()

def crearTablaCitas(con):
    cursorObj = con.cursor()
    cursorObj.execute("CREATE TABLE IF NOT EXISTS citas(id integer PRIMARY KEY AUTOINCREMENT, name REAL, fecha REAL, dt datetime default current_timestamp)")
    con.commit()

def insertarCitas(con, datos, fecha):
    cursorObj = con.cursor()
    cursorObj.execute("INSERT INTO citas(name, fecha, dt) VALUES(?, ?, datetime('now','localtime'))", [datos, fecha])
    con.commit()
    
def mostrarCitas(con):
    cursorObj = con.cursor()
    cursorObj.execute("SELECT * FROM Citas")
    rows= cursorObj.fetchall()
    print("ID:  Nombre: Fecha de la cita:   Fecha de solicitud")
    for row in rows:
        print(row)
while True:
    try:
        op=input("Ingresa la opcion a ejecutar\n\nA) Agendar cita\nB) Mostrar citas\n-->")
    except KeyError:
        print("Utiliza caracteres Alfabeticos")

    if op=="A" or op=="a":
        crearTablaCitas(con)
        nombre=input("Ingresa tu nombre\n-->")
        eleccion=input("Ingresa la fecha de la cita\n\nA) 10 AM - 11 AM\nB) 4 PM - 5 PM\nC) 8 PM - 9 PM\n-->")
        if eleccion=="A":
            fecha="10 AM - 11 AM"
        if eleccion=="B":
            fecha="4 PM - 5 PM"
        if eleccion=="C":
            fecha="8 PM - 9 PM"
        insertarCitas(con, nombre, fecha)

    if op=="B" or op=="b":
        mostrarCitas(con)

    cont = input("¿Deseas continuar? Y/N ")
    if cont == 'N' or cont == 'n':
        exit()
