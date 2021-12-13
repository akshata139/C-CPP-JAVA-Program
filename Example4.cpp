/*

4.Write a recursive program which display below pattern. 
Output : A B C D E F

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
				cout<<(char('A' + (i - 1)))<<"\t";
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