#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H
#include<string>


class AdminLogin
{
    public:
        int pset=0;
        int uset=0;
        std::string pline;
        std::string uline;
        std::string uname;
        std::string pass;
        AdminLogin();
        bool loginValidate();
};

#endif // ADMINLOGIN_H
