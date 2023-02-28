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
		
		void Function()		//Here you want to place function with the logic 
		{
			//Logic
		}
};

int main()
{
	int iValue = 0;
	
	cout<< "Enter Number"<<"\n";
	cin>>iValue;
	
	Numbers obj(iValue);
	
	return 0;
}