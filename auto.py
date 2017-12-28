import yagmail
email=input("Enter Email ID : ")
word=input("Enter password : ")
rec=input("Enter recepient Email ID : ")
fis=open('sub.txt','r')
sub=fis.read()
fim=open('sub.txt','r')
msg=fim.read()
try:
    yag = yagmail.SMTP(email,word)
    contents = [msg]
    yag.send(rec, sub, contents)
    print("Sent Successfully!!!")
except:
    print('Send error!')
