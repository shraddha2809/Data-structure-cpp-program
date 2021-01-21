#include<iostream>
using namespace std;
void merge(int A[],int n1, int B[], int n2)
{
	int index=0,index1=0,index2=0;
	int n=n1+n2,C[n];
	while(n1&&n2)
	{
		if(A[index1]<B[index2])
		{
			C[index++]=A[index1++];
			n1--;
		}
		else
		{
			C[index++]=B[index2++];
			n2--;
		}
	}
	while(n1)
	{
		C[index++]=A[index1++];
		n1--;
	}
	while(n2)
	{
		C[index++]=B[index2++];
		n2--;
	}
	cout<<"Output Array ";
	for(int i=0;i<n;i++)
	cout<<C[i]<<" ";
}
int main()
{
	int n1=5,n2=7;
	int A[n1]={1,3,5,7,9},B[n2]={0,2,4,6,8,10,12};
	merge(A,n1,B,n2);
	return 0;
}

