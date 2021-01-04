#ifndef _StudentData_Hocphan_H
#define _StudentData_Hocphan_H
#include <iostream>
#include <vector>
#include "../StudentOject/Hocphan.h"
using namespace std;
class HocphanData 
{
    vector <Hocphan> _Data;
    int MaxID;
    public:
        HocphanData();
        int GetSize();
        Hocphan Get(int i);

};

#endif