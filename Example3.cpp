/*

2. Write a recursive program which display below pattern. 
Output : 1 2 3 4 5

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
			static int i = 1;
			
			if(i <= iNo)
			{
				cout<<i<<"\t";
				i++;
				
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