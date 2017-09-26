import yagmail
mail=input('Enter your EmailID : ')
passw=input('Enter Password : ')
recid=input('Enter receipient EmailID : ')
sub=input('Enter Subject : ')
msg=input('Enter message :')
yag = yagmail.SMTP(mail,passw)
contents = [msg]
yag.send(recid, sub, contents)
print("Sent Successfully!!!")
