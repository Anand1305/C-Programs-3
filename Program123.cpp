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
};

int main()
{
	int iLength = 0;
	cout<<"Eneter the size of Array : \n";
	cin>>iLength;
	
	ArrayX * obj = new ArrayX(iLength);
	
	obj->Accept();
	obj->Display();
	
	delete obj;
	
	return 0;
}