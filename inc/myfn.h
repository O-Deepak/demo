#ifndef __MYFN_H__
#define __MYFN_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<conio.h>

typedef struct node
{

	float data;
	char foodname[50];
	int quantity;
	float price;
    struct node *next;

}node;
typedef struct head
{
    node *start;
}head;


void insert(head *t, float data, char foodname[25], int quantity, float price);
void foodlist(head *t);
void foodlist1(head *t);
float getbill(head *t);
void order(head *t, head *l, float fc, int qty);
void cls();


#endif
