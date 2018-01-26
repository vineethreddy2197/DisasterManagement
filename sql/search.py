import cx_Oracle
id=input('Enter Username : ')
passw=input('Enter Password : ')
conn_str = ('%s/%s@Vineeth-PC/XE' %(id,passw))
conn = cx_Oracle.connect(conn_str)
cursor = conn.cursor()
ser_q=input("Enter name to search : ")
cursor.execute("select % from victims where name like '%' + :name + '%'",{'name':ser_q})
for row in cursor:
    print(row)
