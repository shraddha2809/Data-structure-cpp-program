#include <iostream>
using namespace std;
int min(int A[], int k, int n)
{
  int j, loc, min;
  min=A[k];
  loc=k;
  for(j=k+1;j<=n-1;j++)
	if(min>A[j])
	{
    	min=A[j];
    	loc=j;
  	}
return loc;
}

int main()
{
  int loc,k,temp,n;
  cout<<"Enter the size of Array"<<endl;
  cin>>n;
  int A[n];
  cout<<"Enter the values in array"<<endl;
   for(k=0;k<=n-1;k++)
    cin>>A[k];
  for(k=0;k<=n-2;k++)
  {
    loc=min(A,k,n);
    temp=A[k];
    A[k]=A[loc];
    A[loc]=temp;
  	cout<<"Pass = "<<k+1<<endl;
  }
  for(k=0;k<=n-1;k++)
    cout <<A[k]<<"  ";
}

