#include <stdio.h>

typedef struct product_t
{
    char date[8];
    char count[100];
} product_t;

product_t dec_product(FILE *fp)
{
    product_t data1;
    printf("DATE- : ");
    scanf("%s", data1.date);
    printf("수량 입력 :");
    scanf("%s", data1.count);
    return data1;
}