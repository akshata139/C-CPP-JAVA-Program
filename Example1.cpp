/*

1. Write a recursive program which accept number from user and display below pattern. 
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *

*/

#include<iostream>
using namespace std;

class Pattern
{
	private:
		int iNo;
		
	public:
		
		Pattern()
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
			static int i = iNo;
			
			if(i >= 1)
			{
				cout<<i <<" * \t";
				i--;
				
				Display();
			}
		}
};

int main()
{
	Pattern obj;
	
	obj.Accept();
	
	cout<<"Pattern is : \n";
	obj.Display();

	
	return 0;
}