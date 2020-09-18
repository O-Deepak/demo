#include<myfn.h>

void insertend(head *t, float data, char foodname[25], int quantity, float price)
{
    node *p, *q;
    p=(node *)malloc(sizeof(node));
    p->data=data;
    p->quantity=quantity;
    p->price=price;
    strcpy(p->foodname, foodname);
    p->next=NULL;
    if(t->start==NULL)
    {
        t->start=p;
    }
    else
    {
        q=t->start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
}
void ccolor(int clr)
{

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

}
void foodlist(head *t)
{

	printf("\n\t"); ccolor(240);
	printf("_______________________________________________________");ccolor(26);
	printf("\n\t"); ccolor(240);
	printf("  Food Code          Name                Price         ");ccolor(26);
	printf("\n\t"); ccolor(240);
	printf("-------------------------------------------------------");ccolor(26);

	node *p;
    p=t->start;
    while(p!= NULL)
    {
        printf("\n\t");
        printf("  %0.1f   |  %-25s     |    %0.2f   ",p->data,p->foodname,p->price);
		ccolor(26);
		printf("\n\t");
        printf("-------------------------------------------------------");
        p=p->next;
    }
}
void foodlist1(head *t)
{
	printf("\n\t"); ccolor(240);
	printf("___________________________________________________________________");ccolor(26);
	printf("\n\t"); ccolor(240);
	printf("  Food Code       Name                       Quantity      Price   ");ccolor(26);
	printf("\n\t"); ccolor(240);
	printf("-------------------------------------------------------------------");ccolor(26);

	node *p;
    p=t->start;
    while(p!= NULL)
    {
		printf("\n\t");
        printf("  %0.1f   |  %-25s      |    %2d      |  %0.2f   ",p->data,p->foodname, p->quantity, p->price);
		printf("\n\t");
		printf("------------------------------------------------------------------");
        p=p->next;
    }
}
float getbill(head *t)
{
    node *p;
    float b=0;
    p=t->start;
    while(p!=NULL)
    {
        b=b+p->price;
        p=p->next;
    }
    return b;
}
void order(head *t, head *l, float fc, int qty)
{
    node *p;
    p=t->start;
    while(p->data!=fc)
    {
        p=p->next;
    }
    insertend(l, fc, p->foodname, qty, (p->price*qty));
    return;
}
void cls()
{
    system("cls");
}

