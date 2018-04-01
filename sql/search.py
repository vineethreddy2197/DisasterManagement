import cx_Oracle
id=input('Enter Username : ')
passw=input('Enter Password : ')
try:
    conn_str = ('%s/%s@Vineeth-PC/XE' %(id,passw))
    conn = cx_Oracle.connect(conn_str)
except:
    print("Login Failed")
cursor = conn.cursor()
ser_q=input("Enter name to search : ")
qu_det={"n":ser_q}
try:
    cursor.execute("select * from victims where instr(name,:n)>0",qu_det)
except:
    print("Exception Occured")
for row in cursor:
    print("Name : " + row[0] + " Blood Group : " + row[1] +" Age : "+ str(row[2]) )

