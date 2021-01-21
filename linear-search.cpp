#include<iostream>
using namespace std;
void linear_search(int A[],int n, int item)
{
	int k,count=0,i=0;
	for(k=0;k<n;k++)
	{
		if(A[k]==item)
		{
			count++;
		}
	}
	for(k=0;k<n;k++)
	{
		if(A[k]==item)
		{
			i=k;
			break;
		}
	}
	if(count==0)
		cout<<"Search Unsuccessful"<<endl;
	else
		cout<<"Search Successful\nFirst occerance at index "<<i<<"\nNumber of occerance = "<<count<<endl;
}
main()
{
	int A[]={23,42,76,23,87,23,51,38,23,23};
	linear_search(A,10,23);
}

