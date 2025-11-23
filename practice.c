#include<stdio.h>
typedef struct {
    char title[100];
    char author[100];
    int price;
}books;
int main()
{
    books b1,b2,b3;
    printf("Enter the name of first book\n");
    scanf("%s",&b1.title);
    printf("Enter the name of second book\n");
    scanf("%s",&b2.title);
    printf("Enter the name of third book\n");
    scanf("%s",&b3.title);
    
    printf("Enter the author of first book\n");
    scanf("%s",&b1.author);
    printf("Enter the author of second book\n");
    scanf("%s",&b2.author);
    printf("Enter the name of author book\n");
    scanf("%s",&b3.author);
    
    printf("Enter the price of first book\n");
    scanf("%d",&b1.price);
    printf("Enter the price of second book\n");
    scanf("%d",&b2.price);
    printf("Enter the price of third book\n");
    scanf("%d",&b3.price);
    
    if(b1.price> b2.price && b1.price>b3.price)
        printf("The most expensive book is %s and the author is %s of price %d", b1.title,b1.author,b1.price);
    else if(b2.price> b1.price && b2.price>b3.price)
        printf("The most expensive book is %s and the author is %s of price %d \n", b2.title,b2.author,b2.price);
    else 
        printf("The most expensive book is %s and the author is %s of price %d\n", b3.title,b3.author,b3.price);
        
    
    
    
}
