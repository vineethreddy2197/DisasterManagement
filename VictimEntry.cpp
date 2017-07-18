#include "VictimEntry.h"
#include<fstream>
#include<iostream>
using namespace std;
VictimEntry::VictimEntry()
{
    cout<<"Enter the name : ";
}
void VictimEntry::getName()
{
    cin.ignore();
    getline(cin,name);
    ofstream ne;
    ne.open("victim.txt",ios::app);
    ne<<name<<endl;
}

