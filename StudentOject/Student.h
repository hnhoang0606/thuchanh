#ifndef _StudentOject_student_H_
#define _StudentOject_student_H_

#include<iostream>
#include <string>
using namespace std;


class Student
{
    std::string Masv;
    std::string Hoten;
    std::string Ngaysinh;
    std::string Gioitinh;

    public:
        Student();
        Student(std::string masv, std::string hoten,std::string ngaysinh, std::string gioitinh);
        string GetMaSV();
        string GetHoten();
        string GetNgaysinh();
        string GetGioitinh();
        void SetMaSv(string s);
        void SetHoten(string s);
        void SetGioitinh(string s);
        void SetNgaysinh(string s);


};

#endif