#ifndef ITEMCHECK_H
#define ITEMCHECK_H
#include<string>
class ItemCheck
{
    public:
        int sch;
        int quan;
        int uch;
        std::string que;
        std::string nque;
        ItemCheck();
        void simpleCheck();
        void updateList();
};

#endif // ITEMCHECK_H
