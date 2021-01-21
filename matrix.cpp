#include<iostream>
using namespace std;
class matrix
{
	int a[10][10], b[10][10],c[10][10],i,j,k, sum;
	public:
		void display();
		void input();
		void addition();
		void multiply();
		void transpose();
};
	void matrix::display()
		{
			cout<<"Elements of first matrix"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cout<<a[i][j]<<"\t";
					cout<<endl;
				}
			cout<<"Elements of second matrix"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cout<<b[i][j]<<"\t";
					cout<<endl;
				}
		}
	void matrix::input()
		{
			cout<<"Enter the elements of first matrix"<<endl;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					cin>>a[i][j];
			cout<<"Enter the elements of second matrix"<<endl;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					cin>>b[i][j];
		}
	void matrix::addition()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				cout<<a[i][j]+b[i][j]<<"\t";
			cout<<endl;
		}
	}
	void matrix::multiply()
	{
		sum=0;
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				for(k=0;k<3;k++)
				{
					sum=sum+(a[i])[j]*b[i][j];
					c[i][j]=sum;
				}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				cout<<c[i][j]<<"\t";
			cout<<endl;
		}		
	}
	void matrix::transpose()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				cout<<a[j][i]<<"\t";
			cout<<endl;
		}
	}
	int choice()
	{
		int i;
		cout<<"1. Addition\n2. Multiplication\n3. Transpose\n4. Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>i;
		return i;
	}
	main()
	{
		matrix m;
		m.input();
		m.display();
		while(1)
		switch(choice())
		{
			case 1:
				cout<<"Addition of two matrices is "<<endl;
				m.addition();
				break;
			case 2:
				cout<<"Multiplication of two matrices is "<<endl;
				m.multiply();
				break;
			case 3:
				cout<<"Transpose of matrix is "<<endl;
				m.transpose();
				break;
			case 4:
				cout<<"Thank you";
				exit (0);
			default:
				cout<<"Invalid Choice"<<endl;
		}
	}

