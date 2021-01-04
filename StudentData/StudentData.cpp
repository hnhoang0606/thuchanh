#include "StudentData.h"

StudentData :: StudentData ()
{
    _Data.resize(0);
    MaxID = 0;
}

StudentData :: StudentData(string filename)
{
    MaxID =0;
    _Data.resize(0);
    ifstream fileIn(filename);
    int NumberStudent;
    fileIn >> NumberStudent;
    std::string Masv;
    std::string Hoten;
    std::string Ngaysinh;
    std::string Gioitinh;
    
    for(int i=0; i<NumberStudent; i++)
    {
        fileIn >>Masv;
        fileIn >>Hoten;
        fileIn >>Ngaysinh;
        fileIn >>Gioitinh;

        Student student(Masv,Hoten,Ngaysinh,Gioitinh);
        _Data.push_back(student);
    }
}



int StudentData :: GetSize()
{
    return _Data.size();
}

Student StudentData :: Get(int i)
{
    return _Data[i];
}

int StudentData :: PushBack(Student student)
{ 
    MaxID ++;
    _Data.push_back(student);
    return MaxID;

}

int StudentData :: Export(string filename)
{
    ofstream fileOut(filename);
    fileOut << _Data.size() <<endl;
    for(Student student: _Data)
    {
        fileOut << student.GetMaSV()<<endl;
        fileOut << student.GetHoten()<<endl;
        fileOut << student.GetNgaysinh()<<endl;
        fileOut << student.GetGioitinh()<<endl;
    }

    fileOut.close();
    return 1;
}
