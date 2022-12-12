#include <stdio.h>
typedef struct product_t
{
    char date[8];
    char count[100];
} product_t;

void read_data(FILE *fp)
{
    product_t data;
    fseek(fp, 0, SEEK_END);
    fread(&data, sizeof(struct product_t), 1, fp);
    printf("RESENT DATE : %s COUNT : %s", data.date, data.count);
    printf("\n");
}
