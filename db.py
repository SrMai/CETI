import sqlite3

def getNameSustancia():
    nombre = input("Ingresa el nombre de la sustancia: ")
    return nombre

def getIdSustancia():
    cursorObj = con.cursor()
    cursorObj.execute("SELECT * FROM sustancia")
    rows = cursorObj.fetchall()
    for row in rows:
        print(row)
    id = input("Ingresa el Numero de la sustancia: ")
    return id

def getNameMedicamento():
    nombre = input("Ingresa el nombre del medicamento: ")
    return nombre

def conexionSql():
    try:
        con=sqlite3.connect('farmacia.db')
        return con
    except ValueError:
        print("Error en la conexión "+ ValueError)

con = conexionSql()

def crearTablaSustancia(con):
    cursorObj = con.cursor()
    cursorObj.execute("CREATE TABLE IF NOT EXISTS sustancia(id integer PRIMARY KEY AUTOINCREMENT, name REAL)")
    con.commit()

def crearTablaMedicamento(con):
    cursorObj = con.cursor()
    cursorObj.execute("CREATE TABLE IF NOT EXISTS medicamento(id integer PRIMARY KEY AUTOINCREMENT, name REAL)")
    con.commit()

#def crearTablaMedicamento(con):
#    cursorObj = con.cursor()
#    cursorObj.execute("CREATE TABLE IF NOT EXISTS medicamento(id integer PRIMARY KEY AUTOINCREMENT, id_sustancia integer, name text, FOREING KEY(id_sustancia))")
#    con.commit()

def insertarSustancia(con, datos):
    cursorObj = con.cursor()
    cursorObj.execute("INSERT INTO sustancia(name) VALUES(?)", [datos])
    con.commit()

def insertarMedicamento(con, datos):
    cursorObj = con.cursor()
    cursorObj.execute("INSERT INTO medicamento(name) VALUES(?)", [datos])
    con.commit()

#def insertarMedicamento(con, datos):
#    cursorObj = con.cursor()
#    cursorObj.execute("INSERT INTO medicamento(id_sustancia, name) VALUES(?,?)", [datos])
#    con.commit()

def mostrarSustancia(con):
    cursorObj = con.cursor()
    cursorObj.execute("SELECT * FROM sustancia")
    rows= cursorObj.fetchall()
    for row in rows:
        print(row)

def mostrarMedicamento(con):
    cursorObj = con.cursor()
    cursorObj.execute("SELECT * FROM medicamento")
    rows= cursorObj.fetchall()
    for row in rows:
        print(row)

while True:
    try:
        op=input("Ingresa la opcion a ejecutar\n\nA) Agregar sustancia\nB) Agregar Medicamento\nC) Mostrar Sustancia\nD) Mostrar Medicamento \n-->")
    except KeyError:
        print("Utiliza caracteres Alfabeticos")

    if op=="A" or op=="a":
        crearTablaSustancia(con)
        insertarSustancia(con, getNameSustancia())

    if op=="B" or op=="b":
        crearTablaMedicamento(con)
        insertarMedicamento(con, getNameMedicamento())

    if op=="C" or op=="c":
        mostrarSustancia(con)

    if op=="D" or op=="d":
        mostrarMedicamento(con)
    cont = input("¿Deseas continuar? Y/N ")
    if cont == 'N' or cont == 'n':
        break
