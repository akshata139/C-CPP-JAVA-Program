import java.util.*;

class PatternInput
{
	int iRow = 0,iColumn = 0;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number of Rows :");
		iRow = sobj.nextInt();
		System.out.println("Enter Number of Columns :");
		iColumn = sobj.nextInt();
	}

	public void Display()
	{
		System.out.println("No. of rows are :"+iRow);
		System.out.println("No. of Columns are :"+iColumn);
	}
}

class Pattern extends PatternInput
{
	public void ShhowPat()
	{
		int i = 0,j = 0;
		for(i = 0;i < iRow;i++)
		{
			for(j = 0;j < iColumn;j++)
			{
				if(((i + j) == (iRow + 1)) || (i = 1) || (j = 1) || (i = iRow) || (j = iColumn))
				{
					System.out.print("*  ");
				}

				else if((i + j) < (iRow+1))
				{
					System.out.print("#  ");
				}
			
				else
				{
					System.out.print("$  ");
				}
			System.out.println();
		    }
		}
	}
}

class Example5
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

