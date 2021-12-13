package RowColumn;

import java.util.*;

class PatternInput
{
	Scanner sobj = new Scanner(System.in);
	int iRow = 0,iColumn = 0;

	public void Accept()
	{
		System.out.println("Enter number of rows :");
		iRow = sobj.nextInt();

		System.out.println("Enter number of columns :");
		iColumn = sobj.nextInt();
	}

	public void Display()
	{
		System.out.println("Number of rows are :"+iRow);
		System.out.println("Number of columns are :"+iColumn);
	}
}