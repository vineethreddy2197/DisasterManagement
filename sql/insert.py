import cx_Oracle
id=input('Enter Username : ')
passw=input('Enter Password : ')
conn_str = ('%s/%s@Vineeth-PC/XE' %(id,passw))
try:
    conn = cx_Oracle.connect(conn_str)
    cursor = conn.cursor()
except:
    print("Login Failed...!")
n=str(input("Enter name : "))
b_gp=str(input("Enter Blood group : "))
a=int(input("Enter age : "))
try:
    cursor.execute("insert into victims values(:n,:b_gp,:a)",(n,b_gp,a))
    cursor.execute("commit")
    print("Insert successful")
except:
    print("Insert failed")
