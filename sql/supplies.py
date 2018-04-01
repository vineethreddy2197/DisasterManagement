import cx_Oracle
id=input('Enter Username : ')
passw=input('Enter Password : ')
conn_str = ('%s/%s@Vineeth-PC/XE' %(id,passw))
try:
    conn = cx_Oracle.connect(conn_str)
    cursor = conn.cursor()
except:
    print("Login failed!")
try:
    cursor.execute("select * from supply")
    for n,q in cursor:
        print("ProductName : " + n + "  ProductQuantity : " + str(q))
except:
    print("Request failed")
