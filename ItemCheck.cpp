#include "ItemCheck.h"
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

ItemCheck::ItemCheck()
{
    sch=0;
    quan=0;
    uch=0;
   cout<<"SUPPLY CHECK "<<endl;
   cout<<"1->SIMPLE CHECK"<<endl;
   cout<<"2->UPDATE FILE"<<endl;
}
void ItemCheck::simpleCheck()
{
    ifstream sup("supply.txt");
    cout<<"Enter Item : ";
    cin.ignore();
    getline(cin,que);
    while(!sup.eof())
    {
        string line;
        getline(sup,line);
        if(line.find(que)!=std::string::npos)
        {
            cout<<"SUPPLY : "<<line<<endl;
            sch++;
            break;
        }
    }
    if(sch==0)
    {
        cout<<"NO RESULT FOUND"<<endl;
    }
}
void ItemCheck::updateList()
{
    cout<<"Enter the Item :";
    cin.ignore();
    getline(cin,nque);
    cout<<"Enter quantity : ";
    cin>>quan;
    ofstream sdate("supply.txt",ios::app);
    sdate<<nque<<" "<<quan<<" bags"<<endl;
}
