#ifndef _StudentOject_Hocphan_H
#define _StudentOject_Hocphan_H
#include <iostream>
using namespace std;

class Diem 
{
    std::string Masinhvien;
    std::string Mahocphan;
    float Diemsv;
    std::string Ngaythi;

    public:
        Diem();
        Diem(std::string masinhvien, std::string mahocphan, float diemsv, std::string ngaythi);
};

#endif