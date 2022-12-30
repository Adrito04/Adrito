/** WELCOME TO GROUP B-7's LAB PROJECT **/
/**  RESTAURANT BILLING SYSTEM **/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>

struct foods
{
    char food[20];
    float price;
    int qty;
};

struct orders
{
    char customer[50];
    char date[50];
    int numOfFoods;
    struct foods f[50];
};
//functions to generate biils
void generateBillHeader(char name[50],char date[30])
{
    printf("\n\n");
    printf("\t    Bhai Bhai Restaurant");
    printf("\n\t  ...................");
    printf("\nDate:%s",date);
    printf("\nInvoice To: %s",name);
    printf("\n");
    printf(".......................................\n");
    printf("Foods\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n.......................................");
    printf("\n\n");
}

}
int main()
{

    system("COLOR 70");


    return 0;
}
