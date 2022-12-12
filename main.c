#include <stdio.h>
#include <stdlib.h>


typedef struct product_t
{
    char date[8];
    char count[100];
} product_t;

extern void read_data(FILE *fp);

int main(void)
{
    FILE *fp;
    int select;
    if ((fp = fopen("product.bin", "a+b")) == NULL)
    {
        fprintf(stderr, "ERROR");
        exit(1);
    }
    while (1)
    {
        product_t data1;
        printf("INPUT INTEGER VALUE  ");
        scanf("%d", &select);
        switch (select)
        {
        case 1: //get_prod
            add_record(fp,select);
            break;
        case 2: //dec_prod
            add_record(fp,select);
            break;
        case 3: //read_data
            read_data(fp);
            break;
        case 4: // QUIT
            return -1;
            break;
        }
    }
    return 0;
}
