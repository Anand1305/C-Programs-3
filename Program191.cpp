#include<iostream>
using namespace std;

template <class T>

void Display(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    cout<<Max;
}

int main()
{
    int Data[] = {10,20,30,40};
    float fData[] = {10.1,20.2,30.3,40.4};
    char cData[] ={'A','N','A','N','D'};

    Display(Data,4);
    Display(fData,4);
    Display(cData,5);

    return 0;
}