#include<stdio.h>
struct item{
	char item_name;
	int quantity;
	float price,amount;
};
float calculate(int quantity, float price)
{
   float amount=quantity*price;
	 return amount;
}
int main()
{
	int n;
 printf("Enter number of items:\n");
 scanf("%d", &n); 
 struct item it[n];
 for (int i = 0; i <n; i++)
 {
	printf("%d item\n", i+1);
    printf("item name=");
	scanf("%s", &it[i].item_name);
	printf("quantity=");
	scanf("%d", &it[i].quantity);
	printf("price=");
	scanf("%f", &it[i].price);
	it[i].amount=calculate( it[i].quantity, it[i].price);
	printf("amount=%f\n", it[i].amount);
 }
 
}