#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char c;
    struct node *next;
}node;
void Recursion_print(node *tem1,node *tem2)
{
   if(tem1 == tem2) return;
   
 
   Recursion_print(tem1->next,tem2);
    printf("%c",tem1->c);
   
}
int main()
{
    node *head,*newnode,*temp;
    head=NULL;
    printf("Enter the String You have to Reverse Each Word \n");
    char str[100];scanf("%[^\n]s",str);
    int i=0;
    while(str[i]!='\0')
    {
        newnode=(node*)malloc(sizeof(node));
        newnode->c=str[i];
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        i++;
    }
    node *temp1,*temp2;
    temp=NULL;
    temp=temp1=head;
    while(temp!=NULL)
    {
        if(temp->c ==' ')
        {
            temp2=temp;
            Recursion_print(temp1,temp2);
            temp1=temp2;
            printf(" ");
        }
        else if(temp->next==NULL)
        {
            temp2=NULL;
            Recursion_print(temp1,temp2);
        }
        temp=temp->next;
    }
}
