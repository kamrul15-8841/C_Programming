#include<stdio.h>
int main()
{
    int productCode, productUnit;

    double price,totalPrice;

    scanf("%d %d %lf\n",&productCode,&productUnit,&price);
    totalPrice = productUnit*price;

    scanf("%d %d %lf\n",&productCode,&productUnit,&price);
    totalPrice += productUnit*price;

    printf("VALOR A PAGAR: R$ %.2lf",totalPrice);
    return 0;
}



