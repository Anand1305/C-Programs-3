#include<iostream>
using namespace std;

class DigitX
{
	public:
		int iNo;
		
		DigitX()
		{
			iNo = 0;
		}
		DigitX(int i)
		{
			iNo = i;
		}
		
		int SumEvenDigit()
		{
			int iSum = 0;
			int iDigit = 0;
			
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				
				if(iDigit % 2 == 0)
				{
					iSum = iSum + iDigit;
				}
				iNo = iNo / 10;
				
			}
			return iSum;
			
		}
};

int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter number : "<<"\n";
	cin>>iValue;
	
	DigitX obj(iValue);
	
	iRet = obj.SumEvenDigit();
	
	cout<<"The Sum of the Evene Number is : "<<iRet<<"\n";
	
	cout<<obj.iNo<<"\n";
	
	return 0;
}