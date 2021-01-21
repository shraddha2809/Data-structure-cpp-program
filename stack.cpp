1.	#include<stdio.h>  
2.	#include<stdlib.h>  
3.	void beg_insert(int);  
4.	struct node  
5.	{  
6.	    int data;  
7.	    struct node *next;  
8.	};  
9.	struct node *head;  
10.	void main ()  
11.	{  
12.	    int choice,item;  
13.	    do   
14.	    {  
15.	        cout<<"\nEnter the item which you want to insert?\n";  
16.	        cin>>item;  
17.	        beg_insert(item);  
18.	        printf("\nPress 0 to insert more ?\n");  
19.	        scanf("%d",&choice);  
20.	    }while(choice == 0);  
21.	}  
22.	void beg_insert(int item)    
23.	{    
24.	        
25.	    struct node *ptr = (struct node *)malloc(sizeof(struct node));    
26.	    struct node *temp;  
27.	    if(ptr == NULL)    
28.	    {    
29.	        printf("\nOVERFLOW");    
30.	    }    
31.	    else     
32.	    {    
33.	        ptr -> data = item;    
34.	        if(head == NULL)    
35.	        {    
36.	            head = ptr;    
37.	            ptr -> next = head;    
38.	        }    
39.	        else     
40.	        {       
41.	            temp = head;    
42.	            while(temp->next != head)    
43.	                temp = temp->next;    
44.	            ptr->next = head;     
45.	            temp -> next = ptr;     
46.	            head = ptr;    
47.	        }     
48.	    printf("\nNode Inserted\n");  
49.	    }    
50.	                
51.	}    
52.	      
________________________________________

