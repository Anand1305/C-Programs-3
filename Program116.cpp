#include<iostream>
using namespace std;

class Arithmatic
{
	public:		//Access Specifier
		int iValue1; 	//Charterstics
		int iValue2;	//Charterstics
		
		Arithmatic()	//Default Constructor
		{
			iValue1 = 0;
			iValue2 = 0;
		}
		
		Arithmatic(int A, int B)	//Parametrised Constructor
		{
			iValue1 = A;
			iValue2 = B;
		}
		
		int Addition()
		{
			int iRet;
			iRet = iValue1 + iValue2;
			
			return iRet;
		}
};
int main()
{
	int iRet = 0;
	
	Arithmatic obj1;
	Arithmatic obj2(10,11);
	Arithmatic obj3(20,21);
	
	iRet = obj1.Addition();		
	cout<<"Addition is : "<<iRet<<"\n";
	
	iRet = obj2.Addition();
	cout<<"Addition is : "<<iRet<<"\n";
	
	iRet = obj3.Addition();
	cout<<"Addition is : "<<iRet<<"\n";
	
	return 0;
}