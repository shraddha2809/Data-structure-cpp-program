#include <iostream>
using namespace std;

void merge(int A[],int n1,int index1,int B[],int n2,int index2,int C[],int index)
{//takes 2 arrays to merge with their size and starting index
// and a destination array with it's starting index
  while(n1&&n2)//if any of the array has a element loop will run
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
  while(n1) //if second array is exhausted
  {
    C[index++]=A[index1++]; //copy first array to C
    n1--;
  }
  while(n2) //if first array is exhausted
  {
    C[index++]=B[index2++];  //copy second array to C
    n2--;
  }
}
void mergepass(int A[],int N,int L,int B[])
{ //takes source array, its size, size of sub-array, destination array.
  int j,LB; //LB=lower bound(index) of first array 
  int Q,S,R;
  Q=N/(2*L); //Q is total pair of arrays to be merged
  S=2*L*Q;    //S is total number of elements, in all pairs
  R=N-S;       //R is residual elements
  
  for(j=0;j<Q;j++)
  {
    LB=(2*j)*L;
    merge(A,L,LB,A,L,LB+L,B,LB);
  }
  if(R<=L)         //if only one sub-array is left
  {
    for(j=0;j<R;j++)
    B[S+j]=A[S+j];       //copy elements of last array to B
  }
  else                         //if last pair of arrays are of unequal size 
   merge(A,L,S,A,R-L,S+L,B,S);
}
void merge_sort(int A[],int N)
{
  int L=1,B[N];
  while(L<N) //size of sub-array is less than size of A
  {
    mergepass(A,N,L,B);      
    mergepass(B,N,L*2,A);
    L=4*L;
  }
}
int main()
{
  int i,n;
  cout<<"Enter the size of Array";
  cin>>n;
  int A[n];
  cout<<"Enter the values in array";
   for(i=0;i<=n-1;i++)
    cin>>A[i];
  merge_sort(A,n);
  for(i=0;i<=n-1;i++)
    cout<<A[i]<<" ";
}

