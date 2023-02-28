//Find The minimum Number from The Array
#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int * Arr;
		int iSize;
		
		ArrayX(int i)
		{
			cout<<"Allocating the memorey for resource\n";
			iSize = i;
			Arr = new int[iSize];
		}
		
		~ArrayX()
		{
			cout<<"Dealloacting the memorey of given resource";
			delete []Arr;
		}
		
		void Accept()
		{
			cout<<"Enter The elments of array : "<<"\n";
			
			for(int iCnt = 0; iCnt < iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		
		void Display()
		{
			cout<<"Elements of array are : "<<"\n";
			
			for(int iCnt = 0; iCnt < iSize ; iCnt++)
			{
				cout<<Arr[iCnt]<<"\t"<<"\n";
			}
			
		}
		
		int Minimum()
		{
			int iMean = Arr[0];
			
			for(int iCnt = 0;iCnt < iSize;iCnt++)
			{
				if(Arr[iCnt] < iMean)
				{
					iMean = Arr[iCnt];
				}
			}
			return iMean;
		}
};

int main()
{
	int iLength = 0,iRet = 0;
	cout<<"Eneter the size of Array : \n";
	cin>>iLength;
	
	ArrayX * obj = new ArrayX(iLength);
	
	obj->Accept();
	obj->Display();
	
	iRet = obj-> Minimum();
	
	cout<<"Smallest element is : "<<iRet<<"\n";
	
	delete obj;
	
	return 0;
}