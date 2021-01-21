#include<iostream>
using namespace std;
void binary_search(int A[], int n, int item)
{
	int l=0,u=n-1,count=0;
	while(l<=u)
	{
		int m=(l+u)/2;
		if(A[m]==item)
		{
			count++;
			break;
		}
		else if(item>A[m])
			l=m+1;
		else
			u=m-1;
	}
	if(count==0)
		cout<<"Search Unsuccessful"<<endl;
	else
		cout<<"Search Successful"<<endl;
}
main ()
{
	int A[]={03,18,28,38,45,54,67,76,83,92};
	binary_search(A,10,83);
	binary_search(A,10,33);
}

