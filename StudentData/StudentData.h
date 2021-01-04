#ifndef _StudentData_StudentData_H
#define _StudentData_StudentData_H
#include <fstream>
#include <iostream>
#include <vector>
#include "../StudentOject/Student.h"
using namespace std;

class StudentData 
{
    vector <Student> _Data;
    int MaxID;

    public:
        StudentData();
        StudentData(string filename);
        int GetSize();
        Student Get(int i);
        int PushBack(Student student);
        int Export(string filename);

};
#endif