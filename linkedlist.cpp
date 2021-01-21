#include<iostream>
using namespace std;
class linked_list
{
	struct node
	{
		int item;
		node *next;
	};
	node *start;
	public:
		linked_list()
		{
			start=NULL;
		}
		void insert(int data);
		void delete_i(int i);
		int	count(int data);
		void display();
	};
void linked_list::insert(int data)
{
		node *t=new node;
		t->item=data;
	if(start==NULL)
	{
		t->next=start;
		start=t;
	}
	else
	{
		if(start->item>=data)
		{
			t->next=start;
			start=t;
		}
		else
		{
			node *n=start;
			node *m;
			while(n!=NULL)
			{
				if(n->item<data)
					m=n;
				n=n->next;
			}
			t->next=m->next;
			m->next=t;
		}
	}
}	
void linked_list::delete_i(int i)
{
	if(start==NULL)
		cout<<"List is empty"<<endl;
	else
	{ 
		int count=0;
		node *n=start;
		while(n!=NULL)
		{
			count++;
			n=n->next;
		}
		if(i>count)
			cout<<i<<"th element dose not exist"<<endl;
		else
		{
			n=start;
			if(i==1)
				{
					cout<<"Item Deleted = "<<n->item<<endl;
					start=start->next;
					delete n;
				}
			else
			{
				node *t;
				for(int j=1;j<i;j++)
				{
					t=n;
					n=n->next;
				}
					cout<<"Item Deleted = "<<n->item<<endl;
					t->next=n->next;
					delete n;
			}
		}
	}
}
void linked_list::display()
{
	if(start==NULL)
		cout<<"List is empty"<<endl;
	else if(start->next==NULL)
	{
		cout<<start->item<<endl;
	}
	else
	{
		node *t=start;
		while(t!=NULL)
		{
			cout<<t->item<<" ";
			t=t->next;
		}
		cout<<endl;
	}
}
int linked_list::count(int data)
{
	if(start==NULL)
		return 0;
	else
	{
		node *t=start;
		int c=0;
		while(t!=NULL)
		{
			if(t->item==data)
				c++;
			t=t->next;
		}
		return c;
	}
}
int choice()
{
	int i;
	cout<<"1.Insert\n2.Delete ith Node\n3.Count Number of occurrences of a number\n4.Display list\n5.Exit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>i;
	return i;
}
int main()
{
	linked_list l;
	int n;
	while(1)
	{
		switch(choice())
		{
			case 1:
				cout<<"Enter a number"<<endl;
				cin>>n;
				l.insert(n);
				break;
			case 2:
				cout<<"Enter i(i starting from 1)"<<endl;
				cin>>n;
				l.delete_i(n);
				break;	
			case 3:
				cout<<"Enter a number"<<endl;
				cin>>n;
				cout<<n<<" occurred "<<l.count(n)<<" times in the list"<<endl;
				break;
			case 4:
				l.display();
				break;
			case 5:
				cout<<"Thank You"<<endl;
				exit(0);
			default:
				cout<<"Invalid choice"<<endl;
			}
	}
}

