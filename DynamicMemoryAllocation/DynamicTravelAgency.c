#include <stdio.h>
#include <stdlib.h>

typedef struct driver_Details
{
    char name[100];
    int license_no;
    char route[1000];
    int kms;
}Drivers;

void main()
{
    int n = 0;
    printf("How many drivers want to input their details: ");
    scanf("%d", &n);

    // struct driver_Details details[n];
    Drivers *details = (Drivers *) malloc(n*sizeof(Drivers));

    printf("Please eneter with _ instead of space\n");

    for (int i = 0; i < n; i++)
    {
        printf("Driver Name: \n");
        scanf(" %s", &details[i].name);
        printf("License no:\n");
        scanf(" %d", &details[i].license_no);
        printf("Kms\n");
        scanf(" %d", &details[i].kms);
        printf("Route\n");
        scanf(" %s", &details[i].route);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Diver Name: %s\n", details[i].name);
        printf("License Number: %d\n", details[i].license_no);
        printf("Kilometers %d\n", details[i].kms);
        printf("Route %s\n", details[i].route);
    }
}
