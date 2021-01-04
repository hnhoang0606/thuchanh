#include "HocphanData.h"

HocphanData :: HocphanData()
{
    _Data.resize(0);
    MaxID = 0;
}


int HocphanData :: GetSize()
{
    return _Data.size();
}

Hocphan HocphanData :: Get(int i)
{
    return _Data[i];
}