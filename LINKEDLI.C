//Linked List

#include<stdio.h>
#include<conio.h>
typedef struct lklist
{
	int info;
	struct lklist *next;
}node;
void main()
{
	int ch,n,a;  //ch=choice , n=data , a=search element
	node *head=NULL,*temp,*ptr=NULL;
	clrscr();
	while(1)
	{
		printf("\n\n1. INSERT ELEMENT at BEGINNING:\n");
		printf("2. LINKED LIST TRAVERSING\n");
		printf("3. INSERT ELEMENT at the END:\n");
		printf("4. SEARCH an ELEMENT in LINKED LIST:\n");
		printf("5. EXIT\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter Element to be Insert:");
				scanf("%d",&n);
				temp=(node*)malloc(sizeof(node));
				if(temp==NULL)
					printf("No Memory Avaliable");
				temp->info=n;

				if(head!=NULL)
					{
					temp->next=head;
					}
				else
					{
					temp->next=NULL;
					}
				head=temp;
				break;

			case 2:
				temp=head;
				while(temp!=NULL)
				{
					printf("%d",temp->info);
					temp=temp->next;
				}
				break;

			case 3:
				ptr=head;
				printf("Enter the Element to be Insert: ");
				scanf("%d",&n);
				temp=(node*)malloc(sizeof(node));
				if(temp==NULL)
					printf("No Memory Avaliable");
					temp->info=n;

				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=temp;
				temp->next=NULL;
				break;

			case 4:
				temp=head;
				printf("Enter Data you want to SEARCH: ");
				scanf("%d",&a);
				while(temp!=NULL)
				{
					if(a==temp->info)
					{
						printf("Element is Present in this Linked List");
						break;
					}
					else
					{
						temp=temp->next;
					}
				}
				if(temp==NULL)
				{
					printf("Element NOT found in this Linked List");
				}
				break;

			case 5:
				exit(1);
		}
	}
	getch();
}