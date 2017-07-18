#include "AdminLogin.h"
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
AdminLogin::AdminLogin()
{
    cout<<"Enter Username : ";
    cin.ignore();
    getline(cin,uname);
    cout<<"Enter password : ";
    cin>>pass;
}
bool AdminLogin::loginValidate()
{
    ifstream ufile("username.txt");
    while(1)
    {
        getline(ufile,uline);
        if(strcmp(uname.c_str(),uline.c_str())==0)
        {
            uset=1;
            break;
        }
        else
        {
            break;
        }
    }
    ifstream pfile("password.txt");
    while(1)
    {
        getline(pfile,pline);
        if(strcmp(pass.c_str(),pline.c_str())==0)
        {
            pset=1;
            break;
        }
        else
        {
            break;
        }
    }
    if(pset==1 && uset==1)
    {
        cout<<"LOGIN SUCCESSFUL"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
