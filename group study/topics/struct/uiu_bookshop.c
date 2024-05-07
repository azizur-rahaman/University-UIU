#include <stdio.h>

struct CustomerInfo
{
    char name[100];
    char id[10];
    int shopped_time;
    float spend_money[10000];
};

int main()
{

    struct CustomerInfo customer[10];

    for (int i = 0; i <10; i++)
    {
        printf("Name: ");
        scanf("%s", &customer[i].name);
        printf("ID: ");
        scanf("%s", &customer[i].id);
        printf("shopped Count: ");
        scanf("%d", &customer[i].shopped_time);
        printf("Enter the money spent by the customer: ");

        for (int j = 0; j < customer[i].shopped_time; j++)
        {
            scanf("%f", &customer[i].spend_money[j]);
        }
    }

    float max_avg = 0.0;
    int index = 0;

    for (int i = 0; i < 2; i++)
    {
        if (customer[i].shopped_time > 2)
        {
            float sum = 0.0;
            for (int j = 0; j < customer[i].shopped_time; j++)
            {
                sum += customer[i].spend_money[j];
            }

            float avg = sum / customer[i].shopped_time;

            if (avg > max_avg)
            {
                max_avg = avg;
                index = i;
            }
        }
    }

    puts(customer[index].name);
    return 0;
}