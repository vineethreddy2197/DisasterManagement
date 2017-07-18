#include "VictimSearch.h"
#include<iostream>
#include<fstream>
using namespace std;
VictimSearch::VictimSearch()
{
    c=0;
    cout<<"Enter name : ";
}
void VictimSearch::searchAction()
{
    cin.ignore();
    getline(cin,quer);
    ifstream sear("victim.txt");
    while(!sear.eof())
    {
        getline(sear,line);
        if(line.find(quer)!=string::npos)
        {
            c++;
            cout<<"FOUND : "<<line<<endl;
        }
    }
    if(c==0)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else
    {
        cout<<"TOTAL "<<c<<" RESULTS"<<endl;
    }
}
