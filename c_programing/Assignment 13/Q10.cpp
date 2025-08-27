#include<stdio.h>

struct product
{
	int id;
	char name[20];
	int quantity;
    float price;
};
int main()
{

struct product p1;
	printf("enter id name quantity price of p1");
	scanf("%d",&p1.id);
	scanf("%s",&p1.name);
	scanf("%d",&p1.quantity);
	scanf("%f",&p1.price);
	

	
	printf("id=%d name=%s quantity=%d price=%f",p1.id, p1.name, p1.quantity, p1.price);
}
	