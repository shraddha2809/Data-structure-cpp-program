#include<iostream>
using namespace std;

class queue
{
	struct array_queue
	{
		int front, rear, capacity,*array;
	};
	array_queue *q;
	public:
	queue(int cap)
	{
		q=new array_queue;
		q->front=q->rear=-1;
		q->capacity=cap;
		q->array= new int[cap];
		}	
	~queue()
	{
		if(q)
		{
			if(q->array)
			delete (q->array);
		}
		delete q;
	}
/*	int is_empty_queue()
	{
		return (q->front==-1);
	}
	int is_full_queue()
	{
		return (q->rear==q->capacity-1);
	}*/
	void enqueue(int data);
	void dequeue();
	void view_queue();
};
void queue::enqueue(int data)
{
	if(q->rear==q->capacity-1)
		cout<<"Queue is full"<<endl;
	else
	{
		q->rear++;
		q->array[q->rear]=data;
		if(q->front==-1)
			q->front=q->rear;
	}
}
void queue::dequeue()
{
	if(q->front==-1)
		cout<<"Queue is empty"<<endl;
	else
	{
		cout<<"Item Deleted = "<<q->array[q->front]<<endl;
		if(q->front==q->rear)
			q->front=q->rear=-1;
		else
			q->front++;
		}
}
void queue::view_queue()
{
	if(q->front==-1)
		cout<<"Queue is empty"<<endl;
	else
	{
		for(int i=q->front;i<=q->rear;i++)
			cout<<q->array[i]<<" ";
		cout<<endl;
	}
}
int choice()
{
	int i;
	cout<<"1. Enqueue\n2. Dequeue\n3. View Queue\n4. Exit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>i;
	return i;
}
int main()
{
	int n,data;
	cout<<"Enter the size of queue"<<endl;
	cin>>n;
	queue Q(n);
	while(1)
	{
		switch(choice())
		{
			case 1:
				cout<<"Enter a value"<<endl;
				cin>>data;
				Q.enqueue(data);
				break;
			case 2:
				Q.dequeue();
				break;
			case 3:
				Q.view_queue();
				break;
			case 4:
				cout<<"Thank You";
				exit(0);
			default:
				cout<<"Invalid Choice"<<endl;
			}
	}
}

