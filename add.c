#include <stdio.h>
typedef struct product_t
{
    char date[8];
    char count[100];
} product_t;

extern product_t get_product(FILE *fp);
extern product_t dec_product(FILE *fp);

void add_record(FILE *fp, int n)
{
    product_t data1;

    switch (n)
    {
    case 1:
        data1 = get_product(fp);
        break;

    case 2:
        data1 = dec_product(fp);
        break;
    default:
        break;
    }
    fseek(fp, 0, SEEK_END);
    fwrite(&data1, sizeof(data1), 1, fp);
}