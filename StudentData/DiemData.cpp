#include "DiemData.h"

DiemData :: DiemData()
{
    _Data.resize(0);
    MaxID = 0;
}


int DiemData :: GetSize()
{
    return _Data.size();
}

Diem DiemData :: Get(int i)
{
    return _Data[i];
}