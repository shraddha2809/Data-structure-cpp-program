#include <iostream>
using namespace std;
int find_max(int A[],int N);
void counting_sort(int A[],int N,int p);
void radix_sort(int A[],int N)
{
  int max  = find_max(A,N);
  int pos;
  for(pos=1;max/pos>0;pos*=10)
    counting_sort(A,N,pos);
}
void counting_sort(int A[],int N,int pos)
{
  int i, B[N];
  int C[10]={0};
  for(i=0;i<N;i++)
        C[(A[i]/pos)%10]++; 
  for(i=1;i<10;i++)
        C[i]=C[i]+C[i-1];
  for(i=N-1;i>=0;i--)
        B[--C[(A[i]/pos)%10]]=A[i];
  for(i=0;i<N;i++)
        A[i]=B[i];
}
int find_max(int A[],int N)
{
  int i,max=A[0];
  for(i=1;i<N;i++)
    if(A[i]>max)
    max=A[i];
  return max;
}
int main()
{
  int i,N;
  cout<<"Enter the size of Array"<<endl;
  cin>>N;
  int A[N];
  cout<<"Enter the value in Array"<<endl;
  for(i=0;i<N;i++)
  cin>>A[i];
  radix_sort(A,N);
  for(i=0;i<N;i++)
    cout<<A[i]<<" ";
}

