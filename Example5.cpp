/*

5.Write a recursive program which display below pattern. 
Output : a b c d e f

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
				cout<<(char('a' + (i - 1)))<<"\t";
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