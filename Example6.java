import java.util.*;

class PatternInput
{
	int iRow = 0,iColumn = 0;
	String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string :");
		str = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("String is :"+str);
	}
}

class Pattern extends PatternInput
{
	public void ShhowPat()
	{
		char Arr[] = str.toCharArray();
		int i = 0,j = 0;
		for(i = 0;i <= Arr.length;i++)
		{

			for(j = 0;j <= Arr.length;j++)
			{
				if(i >= j)
				{
					System.out.print(Arr[j] + "  ");
				}
			}
			System.out.println();
		}
		for(i = 0;i <= Arr.length;i++)
		{

			for(j = 0;j <= Arr.length;j++)
			{
				if((i + j)<= Arr.length)
				{
					System.out.print(Arr[j] + "  ");
				}
			}
			System.out.println();
		}
	}
}

class Example6
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();
		pobj.Accept();
		pobj.Display();

		System.out.println("Expected pattern is :");

		pobj.ShhowPat();

	}
}

