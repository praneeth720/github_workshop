#include<stdio.h>
#include<stdlib.h>
int count=0;

void push();
void pop();
void peek();
void display();

struct node
{
       int data;
       struct node *next;
}*nn,*top=NULL,*temp;
int main()
{
    int ch ,i;
    while(1)
    {
        printf("1.push 2.pop 3.peek 4.display 5.exit \n");
        printf("enter your option \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                   break;
            case 2: pop();
                   break;
            case 3: peek();
                   break;
            case 4: display();
                   break;
            case 5: exit(0);
                  break;
            default:
            printf("invalid option!!!!\n");
        }
    }
    return 0;
}


void push()
{
       int a ;
      // struct node *top=NULL;
       struct node *nn=(struct node*)malloc(sizeof(struct node*));
       printf("enter the data :\n");
       scanf("%d",&a);
       nn->data=a;
       nn->next=top;
       top=nn;
}

void pop()
{
       //struct node *temp;
       //struct node *top=NULL;
       temp=top;
       if(top==NULL)
       {
              printf("stack is empty......");
       }
       else
       {
              printf("element %d is deleted.......\n",top->data);
              top=top->next;
              free(temp);
       }
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("The peek value in the stack is: %d\n", top->data);
    }
}

void display()
{
       //struct node *temp;
       //struct node *top=NULL;
       temp=top;
       printf("elements in the stack are :");
       while(temp!=0)
       {
              printf("%d ",temp->data);
              temp=temp->next;
       }
       printf("\n");
}
