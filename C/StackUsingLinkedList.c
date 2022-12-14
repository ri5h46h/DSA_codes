#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
void peep();
struct node   
{  
    int val;  
    struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\nChoose any one option from the following: \n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Peep\n5.Exit");  
        printf("\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                peep(); 
                break;   
            }  
            case 5:
            {
                printf("exiting...");
                break;
            }
            default:  
            {  
                printf("Please Enter valid choice");  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("cannot push the element");   
    }  
    else   
    {  
        printf("Enter the value: ");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed successfully.");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow (stack is empty)");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped.");  
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Underflow (stack is empty)");  
    }  
    else  
    {  
        printf("Printing Stack elements:\n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}  

void peep()
{
    int i;
    struct node *ptr;
    ptr=head;
    if (ptr== NULL)
    {
        printf("Underflow (stack is empty)");
    }
    else
    {
        printf("the top element in the stack is: %d",ptr->val);
    }
    
}
