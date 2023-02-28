#include<iostream>
using namespace std;
//Problems on N numbers

class ArrayX
{
	public:
		int * Arr;
		int iSize;
		
		ArrayX(int i)
		{
			iSize = i;
			Arr = new int[iSize];
		}
		
		void Accept()
		{
			cout<<"Please enter the Numbers : "<<"\n";
			int iCnt = 0;
			
			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cin>> Arr[iCnt];
			}
		}
		
		void Display()
		{
			cout<<"elements of array are  : "<<"\n";
			int iCnt = 0;
			
			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cout<< Arr[iCnt]<<"\t";
			}
			cout<<"\n";
		}
};

int main()
{
	int iLength = 0;
	cout<<"Enter the Number of Elements"<< "\n";
	cin>> iLength;
	
	ArrayX obj(iLength);
	
	obj.Accept();
	obj.Display();
	
	return 0;
}