#ifndef _StudentData_Diem_H_
#define _StudentData_Diem_H_
#include <iostream>
#include <vector>
#include "../StudentOject/Diem.h"

using namespace std;

class DiemData
{
    vector <Diem> _Data;
    int MaxID;
    public:
        DiemData();
        int GetSize();
        Diem Get(int i);
};

#endif