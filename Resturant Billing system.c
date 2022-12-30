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

void generateBillBody(char food[30],int qty, float price)
{
    printf("%s\t\t",food);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty * price);
    printf("\n");
}


void generateBillFooter(float total)
{
    printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    float VAT=0.09*netTotal,pay=netTotal + 2*VAT;//netTotal + VAT + ST
    printf(".......................................\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\nVAT @9%s\t\t\t\t%.2f","%",VAT);
    printf("\nST @9%s\t\t\t\t%.2f","%",VAT);
    printf("\n---------------------------------------");
    printf("\nPay\t\t\t\t%.2f Tk.",pay);
    printf("\n---------------------------------------\n");
}


int main()
{


    system("COLOR 70");
    int opt,n;
    struct orders ord;
    struct orders order;
    char saveBill = 'y',contFlag = 'y';
    char name[50];
    FILE *fp;


    while(contFlag == 'y')
    {

        float total = 0;
        int invoiceFound = 0;


        printf("\t** BHAI BHAI RESTAURANT **");
        printf("\n\nWhich operation do you want to perform?");
        printf("\n\n1.Generate an Invoice");
        printf("\n2.Search an Invoice");
        printf("\n3.Show all Invoices");
        printf("\n4.Exit");



        printf("\n\nYour choice is:\t");
        scanf("%d",&opt);
        fgetc(stdin);
        switch(opt)



            return 0;
    }
