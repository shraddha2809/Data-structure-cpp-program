#include <iostream>
using namespace std;

void bubble_sort(int A[],int n)
{
  int i=0, temp, round;
  for(round=0;round<n-1;round++)
  {
  	cout<<"Round = "<<round+1<<endl;
    for(i=0;i<n-1-round;i++)
	{
      if(A[i]>A[i+1])
       {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
        }
    cout<<"Pass = "<<i+1<<endl;
	}
	}
  }
int main()
{
  int i,n;
  cout<<"Enter the size of Array";
  cin>>n;
  int A[n];
  cout<<"Enter the values in array";
   for(i=0;i<n;i++)
    cin>>A[i];
  bubble_sort(A,n);
  for(i=0;i<n;i++)
    cout<<A[i]<<" ";
}

