#include <iostream>
#include <string >
using namespace std;
#include "StudentOject/Student.h"
#include "StudentData/StudentData.h"

void Addstudent()
{   
    string s, s1, s2, s3;
    cout<<"ADD Student"<<endl;
    StudentData studentdata("Student.txt");
    Student student;
    cout<<"Enter New Student"<<endl;
    cout<< "Max sv"; cin >> s;
    student.SetMaSv(s);
    cout<< "Hoten"; cin >> s1;
    student.SetHoten(s1);
    cout<<"GioiTinh"; cin >> s2;
    student.SetGioitinh(s2);
    cout<<"Ngay sinh"; cin >> s3;
    student.SetNgaysinh(s3);
    studentdata.PushBack(student);
    studentdata.Export("student.txt");
}

void DisplayStudent()
{
    StudentData studentData("Student.txt");
    for(int i=0; i<studentData.GetSize(); i++)
    {
        Student student = studentData.Get(i);
        cout<< student.GetMaSV()<<endl;
        cout << student.GetHoten()<<endl;
        cout << student.GetGioitinh()<<endl;
        cout << student.GetNgaysinh()<<endl;
    }
}

void EditStudent()
{   
    string s;
    int Id;
    StudentData studentData("Student.txt");
    cout<<" Choose Id that you want to Edit"<<endl;
    cin >> Id;
    Student student = studentData.Get(Id);
    cout<< student.GetMaSV()<<endl;
    cout << student.GetHoten()<<endl;
    cout << student.GetGioitinh()<<endl;
    cout << student.GetNgaysinh()<<endl;
    int Chosee;
    cout << "please Chosse Information that you want to Edit"<<endl;
    cin >> Chosee ;
    cout<<"1. MaSV"<<endl;
    cout<<"1. Hoten"<<endl;
    cout<<"1. GioiTinh"<<endl;
    cout<<"1. Ngaysinh"<<endl;


    switch (Chosee)
    {
    case 1:
        cout<<"nhap Masv"<<endl;
        cin >> s;
        student.SetMaSv(s);
        break;
    case 2:
        cout<<"nhap hoten"<<endl;
        cin >> s;
        student.SetHoten(s);
    case 3:
        cout<<"nhap Gioitinh"<<endl;
        cin >> s;
        student.SetGioitinh(s);
    case 4:
        cout<<"nhap Ngay Sinh"<<endl;
        cin >> s;
        student.SetNgaysinh(s);
    default:
        break;
    }

    studentData.PushBack(student);
    studentData.Export("student.txt");

}



int main()
{
    StudentData studentData;

    Student student1("SV0001", "Do Thi Ha", "22/12/1999", "Fmale");
    Student student2("SV0002", "Le Binh Minh", "19/08/2000" ,"Male");
    Student student3("SV0003", "Nguyen Minh Canh", "22/12/1999", "Male");
    Student student4("SV0004", "Le Huu Cong", "22/12/1999" ,"Male");

    studentData.PushBack(student1);
    studentData.PushBack(student2);
    studentData.PushBack(student3);
    studentData.PushBack(student4);

    studentData.Export("Student.txt");



    //Addstudent();
    //DisplayStudent();
    EditStudent();


    cout<<"ok";
    return 0;
}