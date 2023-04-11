#include <stdio.h>

struct Employee
{

    int id;
    char name[10];
    int salary;
    char address[100];
};

void main()
{

    struct Employee e[30];
    int count = 0;
    int choice;

    while (1)
    {

        printf("\n0. Exit");
        printf("\n1. Add data");
        printf("\n2. Display data");
        printf("\n3. search data");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            // for (int i = 0; i < 3; i++)
            // {
            //     printf("\nEnter details for Employee %d: \n", i + 1);
            //     printf("Enter id: ");
            //     scanf("%d", &e[i].id);
            //     printf("Enter name: ");
            //     scanf("%s", e[i].name);
            // }

            printf("\nEnter details for Employee %d: \n", count + 1);
            printf("Enter id: ");
            scanf("%d", &e[count].id);
            printf("Enter name: ");
            scanf("%s", e[count].name);
            count++;

            break;
        case 2:

            printf("Data.............................");

            for (int i = 0; i < count; i++)
            {
                printf("\nDetails of %d Employee", i + 1);
                printf("\nName: %s", e[i].name);
                printf("\nid: %d", e[i].id);
            }
            break;
        case 3:
            int id1;
            printf("Enter id: ");
            scanf("%d", &id1);
            int flag=0;

            for (int i = 0; i < count; i++)
            {
                if (e[i].id == id1)
                {
                    printf("\nDetails of %d Employee", i + 1);
                    printf("\nName: %s", e[i].name);
                    printf("\nid: %d", e[i].id);
                    flag=1;
                }
            }

            if(flag==0)
            {
                printf("Id Not Found!!");
            }
            break;
        default:
            printf("Invalid choice!!!");
        }
    }
}

/*

switch

1. add data
2. display data
3. search data
    id:

*/