#include"Student.h"

Student :: Student ()
{

}

Student:: Student(std:: string masv,std:: string hoten,std::string ngaysinh, std::string gioitinh)
{
    Masv = masv;
    Hoten = hoten;
    Gioitinh = gioitinh;
    Ngaysinh = ngaysinh;
}

string Student :: GetHoten()
{
    return Hoten;
}

string Student :: GetGioitinh()
{
    return Gioitinh;
}

string Student :: GetNgaysinh()
{
    return Ngaysinh;
}

string Student :: GetMaSV()
{
    return Masv;
}

void Student :: SetMaSv(string s)
{
    Masv = s;
}

void Student :: SetHoten(string s)
{
    Hoten = s;
}

void Student :: SetNgaysinh(string s)
{
    Ngaysinh = s;
}

void Student :: SetGioitinh(string s)
{
    Gioitinh = s;
}