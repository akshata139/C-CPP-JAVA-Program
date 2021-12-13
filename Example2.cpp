/*

2. Write a recursive program which accept number from user and return summation of its digits.
Input : 879
Output : 24

*/

#include<iostream>
using namespace std;

class Digits
{
	private:
		int iNo;
		
	public:
		
		Digits()
		{
			iNo = 0;
		}
		
		void Accept()
		{
			cout<<"Enter Number \n";
			cin>>iNo;
		}
		
		void Display()
		{
			cout<<"Number is : "<<iNo<<"\n";
		}
		
		int Addition()
		{
			static int iDigit = 0,iSum = 0;
			
			if(iNo != 0)
			{
				iDigit = iNo % 10;
				
				iSum = iSum + iDigit;
				
				iNo = iNo / 10;
				
				Addition();
			}
			return iSum;
		}
};

int main()
{
	Digits obj;
	int iRet = 0;
	
	obj.Accept();
	obj.Display();
	iRet = obj.Addition();
	cout<<"Summation of digits is : "<<iRet<<"\n";
	
	return 0;
}