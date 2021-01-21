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
	int queue_size()
	{
		if (q->front==-1)
			return 0;
		if((q->rear+1)%q->capacity==q->front)
			return(q->capacity);
		return ((q->capacity-q->front+q->rear+1)%q->capacity);
	}
/*	int is_empty_queue()
	{
		return (q->front==-1);
	}
	int is_full_queue()
	{
		if((q->rear+1)%q->capacity==q->front)
			return 1;
		else return 0;
	}*/
	void enqueue(int data);
	void dequeue();
	void view_queue();
};
void queue::enqueue(int data)
{
	if((q->rear+1)%q->capacity==q->front)
		cout<<"Queue is full"<<endl;
	else
	{
		q->rear=(q->rear+1)%q->capacity;
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
			q->front=(q->front+1)%q->capacity;
		}
}
void queue::view_queue()
{
	if(q->front==-1)
		cout<<"Queue is empty"<<endl;
	else
	{
		int i=q->front,l=queue_size();
		for(int j=0;j<l;j++)
		{
			cout<<q->array[i]<<" ";
			if(i==q->capacity-1 && i!=q->rear)
				i=0;
			else
				i++;		
		}
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

