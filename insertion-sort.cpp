#include <iostream>
using namespace std;

void insertion_sort(int A[],int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
  	cout<<"Round = "<<i<<endl;
    temp=A[i];
    for(j=i-1;j>=0&&temp<A[j];j--)
    {
      A[j+1]=A[j];
     }
    A[j+1]=temp;
  }
}
int main()
{
  int i,n;
  cout<<"Enter the size of Array"<<endl;
  cin>>n;
  int A[n];
  cout<<"Enter the values in array"<<endl;
   for(i=0;i<=n-1;i++)
    cin>>A[i];
  insertion_sort(A,n);
  for(i=0;i<=n-1;i++)
    cout <<A[i]<<"  ";
}

