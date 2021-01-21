#include <iostream>
using namespace std;

void quick(int A[], int n,int beg, int end,int *loc)
{
  int left,right,temp;
  left=beg;
  right=end;
  *loc=beg;
  step2:
    while(A[*loc]<=A[right]&&*loc!=right)
    right--;
    if(*loc==right)
    return;
    if(A[*loc]>A[right])
    {
      temp=A[*loc];
      A[*loc]=A[right];
      A[right]=temp;
      *loc=right;
    }
    goto step3;
    step3:
      while(A[left]<=A[*loc]&&left!=*loc)
      left++;
      if(*loc==left)
      return;
      if(A[left]>A[*loc])
      {
        temp=A[left];
        A[left]=A[*loc];
        A[*loc]=temp;
        *loc=left;
      }
      goto step2;
}
void quick_sort(int A[], int n)
{
  int beg, end, loc,top=-1;
  int lower[10],upper[10];
  if(n>1)
  {
    top++;
    lower[top]=0;
    upper[top]=n-1;
  }
  while(top!=-1)
  {
    beg=lower[top];
    end=upper[top];
    top--;
    quick(A,n,beg,end,&loc);
    if(beg<loc-1)
    {
      top++;
      lower[top]=beg;
      upper[top]=loc-1;
    }
    if(loc+1<end)
    {
      top++;
      lower[top]=loc+1;
      upper[top]=end;
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
   for(i=0;i<=n-1;i++)
    cin>>A[i];
  quick_sort(A,n);
  for(i=0;i<=n-1;i++)
    cout <<A[i]<<" ";
}

