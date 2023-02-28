//Find the Factorial of Number

#include<iostream>
using namespace std;
//Problems on Numbers
class Numbers
{
	public:
		int iNo;
		
		Numbers(int i)
		{
			iNo = i;
		}
		
		int Factorial()		//Here you want to place function with the logic 
		{
			int iFact = 1;
			int iCnt = 0;
			
			for(iCnt = 1; iCnt <= iNo; iCnt++)
			{
				iFact = iFact * iCnt;
			}
			return iFact;
		}
};

int main()
{
	int iValue = 0,iRet = 0;
	
	cout<< "Enter Number"<<"\n";
	cin>>iValue;
	
	Numbers obj(iValue);
	
	iRet = obj.Factorial();
	
	cout<<"The Factorial of : "<<iValue <<"\n"<<iRet;
	
	return 0;
}