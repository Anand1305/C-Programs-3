#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

template <class T>

int Display(T Arr[], int iSize)
{
    int iCnt = 0;
    T iSum = 0;

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int ret = 0;
    float iret = 0.0;
    char cret = '\0';
    int Data[] = {10,20,30,40};
    float fData[] = {10.1,20.2,30.3,40.4};
    char cData[] ={'A','N','A','N','D'};

    ret = Display(Data,4);
    cout<<ret<<"\n";
    iret = Display(fData,4);
    cout<<iret<<"\n";
    cret = Display(cData,5);
    cout<<cret<<"\n";

    return 0;
}
