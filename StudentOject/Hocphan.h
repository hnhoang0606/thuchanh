#ifndef _StudentOject_Hocphan_H
#define _StudentOject_Hocphan_H

#include <iostream>
#include <string>
using namespace std;

class Hocphan 
{
    std :: string Mahocphan;
    std ::string Tenhocphan;
    int Sotinchi;
    
    public:
        Hocphan();
        Hocphan(std::string mahocphan, std::string tenhocphan, int sotinchi);
};

#endif