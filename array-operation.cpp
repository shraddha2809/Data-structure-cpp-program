#include<iostream>
using namespace std;
int sum(int A[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	s=s+A[i];
	return s;
}
float average(int A[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	s=s+A[i];
	s=s/n;
	return s;
}
int maximum(int A[],int n)
{
	int max=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]>max)
		max=A[i];
		}	
	return max;
}
int minimum(int A[],int n)
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		min=A[i];
		}	
	return min;
}
int mode(int A[],int n)
{
	int num=A[0],mode=num, countMode=1, Count=1,i;
	for(i=1;i<n;i++)
	{
		
		if(A[i]==num)
		++Count;
		else
		{
			if(Count>countMode)
			{
				Count=countMode;
				mode=num;
			}
		}
		Count=1;
	}
	return mode;
}
int choice()
{
	int n;
	cout<<"1. Sum\n2. Average\n3. Maximum\n4. Minimum\n5. Mean\n6. Mode\n7. Exit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>n;
	return n;
}
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int A[n];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
		cin>>A[i];
	while(1)
	{
		switch(choice())
		{
		case 1:
			cout<<"Sum of all the elements of array is "<<sum(A,n)<<endl;
			break;
		case 2:
			cout<<"Average of all the elements of array is "<<average(A,n)<<endl;
			break;
		case 3:
			cout<<"Maximum of all the elements of array is "<<maximum(A,n)<<endl;
			break;
		case 4:
			cout<<"Minimum of all the elements of array is "<<minimum(A,n)<<endl;
			break;
		case 5:
			cout<<"Mean of all the elements of array is "<<average(A,n)<<endl;
			break;
		case 6:
			cout<<"Mode of all the elements of array is "<<mode(A,n)<<endl;
			break;
		case 7:
			cout<<"Thank You"<<endl;
			exit(0);
		default:
			cout<<"Invalid choice"<<endl;
		}
	}
}

