#include <iostream>
using namespace std;

class stack
{
  private:
    int capacity;
    int top;
    int *ptr;
    public:
      stack(int cap)
    {
      capacity =cap;
      top=-1;
      ptr= new int[cap];
    }
    ~stack()
    {
      delete []ptr;
     }
     int is_full()
     {
       if(top==capacity-1)
       return(1);
       else 
       return(0);
      }
      int is_empty()
      {
        if(top==-1)
        return(1);
       else  return(0);
       }
     void push(int val)
     {
       if(is_full())
       cout<<"Stack Overflow"<<endl;
       else
       {
         top++;
         ptr[top]=val;
         }
      }
    void pop()
    {
      if(is_empty())
      cout<<"Stack Underflow"<<endl;
      else
      {
        int i;
        i=ptr[top];
        top--;
        cout<<i<<endl;
        }
      }
    void  peep()
    {
     if(is_empty())
        cout<<"Stack Underflow"<<endl;
      else
       cout<<ptr[top]<<endl;
     }
    void  display()
    {
     if(is_empty())
        cout<<"Stack Underflow"<<endl;
      else
      {
    	int i=top;
    	while(i!=-1)
    	{
       		cout<<ptr[i]<<endl;
       		i--;
   			}
   		}
    }
    void countlements()
    {
    	cout<<"Number of elemets in the stack are "<<top+1<<endl;
	}
 };
int menu()
{
  int choice;
  cout<<"1. Push value\n2. Pop Value\n3. Peep value\n4. Count Elements of array\n5. Display Array\n6. Exit"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>choice;
  return(choice);
 }
int main()
{
  int c;
   cout << "Enter the capacity of stack"<<endl;
   cin>>c;
    stack s(c);
    int value;
    while(1)
    switch(menu())
    {
      case 1:
        cout<<"Enter a value"<<endl;
        cin>>value;
        s.push(value);
        break;
      case 2:
        s.pop();
        break;
      case 3:
        s.peep();
        break;
      case 6:
        cout<<"Thankyou"<<endl;
        exit(0);
	  case 4:
	  	s.countlements();
		break;
	  case 5:
	  	s.display();
		break;    	
      default:
        cout<<"Invalid Choice"<<endl;
    }
}

