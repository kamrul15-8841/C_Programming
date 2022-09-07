#include<stdio.h>
int main()
{
    int productCode, productUnit;
    int productCode2, productUnit2;
    double price,price2,totalPrice, totalPrice1,totalPrice2;

    scanf("%d %d %lf\n",&productCode,&productUnit,&price);
    totalPrice1 = productUnit*price;

    scanf("%d %d %lf",&productCode2,&productUnit2,&price2);
    totalPrice2 = productUnit2*price2;

    totalPrice = totalPrice1 + totalPrice2;

    printf("VALOR A PAGAR: R$ %.2f",totalPrice);
    return 0;
}
