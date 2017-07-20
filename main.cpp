#include <iostream>
#include<cstdlib>
#include "VictimSearch.h"
#include "AdminLogin.h"
#include "VictimEntry.h"
#include "ItemCheck.h"
using namespace std;
int main()
{
    while(1)
    {
    char stat;
    cout<<"1->NEAREST MEDICAL FACILITIES "<<endl;
    cout<<"2->SEND AUTOMATED EMAIL "<<endl;
    cout<<"3->VICTIM SEARCH "<<endl;
    cout<<"4->MAGNITUDE OF DISASTER "<<endl;
    cout<<"5->ADMIN LOGIN"<<endl;
    char c;
    cout<<"Enter Choice : ";
    cin>>c;
    switch(c)
    {
    case '1':
        {
            //Hospital
            string hoscmd="python hosp.py";
            system(hoscmd.c_str());
            break;
        }
    case '2':
        {
            string mailcmd="python mail.py";
            system(mailcmd.c_str());
            //Mail
            break;
        }
    case '3':
        {
            VictimSearch *o=new VictimSearch();
            o->searchAction();
            delete o;
            break;
        }
    case '4':
        {
            //Magnitude
        }
    case ('5'):
        {

            char a;
            AdminLogin *o=new AdminLogin();
            if(o->loginValidate()==true)
            {
                delete o;
                cout<<"1->VICTIM ENTRY "<<endl;
                cout<<"2->SEND AUTOMATED MAIL "<<endl;
                cout<<"3->NEAREST RELIEF DETAILS"<<endl;
                cout<<"4->VICTIM SEARCH "<<endl;
                cout<<"5->SUPPY DETAILS"<<endl;
                cout<<"6->SEND TWITTER ALERT"<<endl;
                cout<<"SELECT OPTION : ";
                cin>>a;
                switch(a)
                {
                case '1':
                    {
                        VictimEntry *o=new VictimEntry();
                        o->getName();
                        cout<<"DONE"<<endl;
                        //Victim Entry
                        delete o;
                        break;

                    }
                case '2':
                    {
                        char op;
                        cout<<"1->AUTO MAIL"<<endl;
                        cout<<"2->CUSTOM MAIL"<<endl;
                        cout<<"SELECT OPTION : ";
                        cin>>op;
                        if(op=='1')
                        {
                            string acmd;
                            acmd="python auto.py";
                            system(acmd.c_str());
                        }
                        else if(op=='2')
                        {
                            string ccmd;
                            ccmd="python custom.py";
                            system(ccmd.c_str());
                        }
                        else
                        {

                            cout<<"INVALID OPTION"<<endl;
                        }
                        //Auto mail
                    }
                case '3':
                    {
                        //Emails
                        break;
                    }
                case '4':
                    {
                        VictimSearch *o=new VictimSearch();
                        o->searchAction();
                        delete o;
                        break;
                    }
                case '5':
                    {
                        ItemCheck *o=new ItemCheck();
                        cout<<"SELECT OPTION : ";
                        char icheck;
                        cin>>icheck;
                        if(icheck=='1')
                        {
                            o->simpleCheck();
                        }
                        else if(icheck=='2')
                        {
                            o->updateList();
                        }
                        else
                        {
                            cout<<"INVALID ERROR!!!"<<endl;
                        }
                        //supplies
                        break;
                    }
                case '6':
                    {
                        string twicmd;
                        twicmd="python twitter.py";
                        system(twicmd.c_str());
                        break;
                    }
                case '7'...'100':
                    {
                        cout<<"ERROR!!!"<<endl;
                        break;
                    }
                }
            }
            else
            {
                cout<<"LOGIN FAIL!!!"<<endl;
            }
            break;
        }
        case '6'...'100':
            {
                cout<<"ERROR!!!"<<endl;
                break;
            }
    }
    cout<<"WANT TO EXIT ?(Y/N) : ";
    cin>>stat;
    if(stat=='Y' || stat=='y')
    {
        break;
        exit(0);
    }
    else
    {
        system("CLS");
        continue;
    }
    }
    exit(0);
}
