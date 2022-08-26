#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int i;
int n;
int back;
char name;
char type;
struct details
{
    int id;
    int age;
    char firstName[10];
    char lastName[10];
    int year;
    int month;
    int day;
    char mv[15];
    int ward;
    char street[10];
    int number;
    int renumber;
    int sRam;
    int ran;
};

void getData();

void noofRec();

int main()
{
    printf("\n\n\n\n");
    printf("\t\t\tWelcome to Vaccine Registration");
    printf("\n\t_____________________________________________________________________");
    printf("\n\n\t     Note: You should be at least 18 years for vaccine registration ");
    printf("\n\t_____________________________________________________________________");

label1:
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t 1) Vaccine Registration \n");
    printf("\t\t\t 2) Vaccine dose \n");
    printf("\t\t\t 3) User Profile\n");
    printf("\t\t\t 4) Exit \n");

    int choice;
    printf("\n\t......................................................................");
    printf("\n\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice)
    {
    case 1:
    {
    label2:
        printf("\n");
        printf("\n\n\n");
        printf("\t\t\t\tIdentity verification: \n");
        printf("\n\t_____________________________________________________________________\n");

        printf("\n\t\t\t 1) Natinional Identity Card \n");
        printf("  \t\t\t 2) Student Card \n");
        printf("  \t\t\t 3) Others \n");
        printf("  \t\t\t 4) Back to main menu\n");
        printf("  \t\t\t 5) Exit\n");
        printf("\n\t......................................................................");

        int choose;
        printf("\n \n\t\t\t Enter your choice: ");
        scanf("%d", &choose);
        printf("\n");

        switch (choose)
        {
        case 1:
        {
            printf("\n\n\n\n");
            printf("\t\t\t\tNational Identity Card");
            printf("\n\t_____________________________________________________________________");
            printf("\n\n\t\t\t> Number of data you want to enter: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {

                printf("\t\t\t> Enter NID Number : ");
                getData();
            }
            break;
        }
        case 2:
        {
            printf("\n\n\n\n");
            printf("\t\t\t\tStudent Card");
            printf("\n\t_____________________________________________________________________");
            printf("\t\t\t> Number of data you want to enter: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {

                printf("\t\t\t> Enter Student id: ");
                getData();
            }
            break;
        }

        case 4:
        {
            goto label1;
        }

        case 5:
        {
            exit(0);
        }
        default:
        {
            printf("\n\t......................................................................");
            printf("\n\n\t\t\t Enter correct choice!!! \n");
            goto label2;
        }
        }

        goto label2;
    }

    case 2:
    {
        printf("\n\n\n\n");
        printf("\t \t\t\t Number of vaccine dose ");
        printf("\n\t_____________________________________________________________________");

        int serial, found = 0;
        printf("\n\n\t\t\tPress 1 if you want to go back or press 2 to go next step: ");
        scanf("%d", &back);
        if (back == 1)
        {
            goto label1;
        }
        printf("\n\n\t\t\t> Enter Your serial number: ");
        scanf("%d", &serial);
        printf("\n\n\t\t\t Dose system will come soon\n");
    }

    case 3:
    {
        printf("\n\n\t\t\t Press 1 if you want to go back or press 2 to go next step: ");
        scanf("%d", &back);
        if (back == 1)
        {
            goto label2;
        }
        noofRec();
        goto label1;
    }

    case 4:
    {
        exit(0);
    }
        goto label1;

    default:
    {

        printf("\n\n\t\t\t Enter correct choice!!! ");
        goto label1;
    }
    }
    return 0;
    // getch();
}

void getData()
{

    struct details vac[10];
    scanf("%d", &vac[i].id);

    printf("\t\t\t> Enter your first and last name: ");
    scanf("%s %s", vac[i].firstName, vac[i].lastName);

date:
    printf("\t\t\t> Enter Your Date of birth (YYYY MM DD): ");
    scanf(" %d %d %d", &vac[i].year, &vac[i].month, &vac[i].day);

    if (vac[i].year < 1950 || vac[i].month > 12 || vac[i].day > 31)
    {
        printf("\t\t\tPlease enter a valid date!!\n");
        goto date;
    }

    vac[i].age = 2022 - vac[i].year;

    if (vac[i].age < 18)
    {
        printf("\t\t\tYou are not adult!!!");
    }

    printf("\t\t\t> Enter Your Address: \n");

    printf("\n\t\t\t\t> City: ");
    scanf("%s", vac[i].mv);

    printf("\t\t\t\t> Ward no: ");
    scanf("%d", &vac[i].ward);

    printf("\t\t\t\t> Street: ");
    scanf("%s", vac[i].street);

    while (1)
    {
        printf("\n\t\t\t> Enter Your Phone Number: ");
        scanf("%d", &vac[i].number);
        printf("\t\t\t> Re-Enter Your Phone Number: ");
        scanf("%d", &vac[i].renumber);
        if (vac[i].number == vac[i].renumber)
        {
            break;
        }
        else
        {
            printf("\t\t\t> Enter Your Phone Number Correctly.\n");
        }
    }

    int random;
    srand(time(NULL));
    random = rand();
    printf("\t\t\t\t|-------------|\n");
    printf("\t\t\t\t|   OTP is:   |\n");
    printf("\t\t\t\t|             |\n");
    printf("\t\t\t\t|    %d    |\n", random);
    printf("\t\t\t\t|             |\n");
    printf("\t\t\t\t|             |\n");
    printf("\t\t\t\t|-------------|\n");
    printf("\t\t\t\t|__1___2___3__|\n");
    printf("\t\t\t\t|__4___5___6__|\n");
    printf("\t\t\t\t|__7___8___9__|\n");
    printf("\t\t\t\t|__*___0___#__|\n");
    printf("\t\t\t\t|.............|\n");
    while (1)
    {
    label3:
        printf("\t\t\t> Enter Your OTP: ");
        scanf("%d", &vac[i].sRam);
        if (random == vac[i].sRam)
        {
            break;
        }
        else
        {
            printf("\n\n\t\t\tYou have entered the wrong OTP, please try again!\n\n");
            goto label3;
        }
    }

    srand(time(NULL));
    random = rand();
    vac[i].ran = random;
    printf("\t\t\t> Your Serial Number is: %d\n", random);
    printf("\n =========================================================================");
    printf("\n\n\t ---> Keep your Serial Number '%d' safely... \n", random);
    printf("\n =========================================================================");
    printf("\n\n");
}

void noofRec()
{
    struct details vac;
    printf("\n\n\n\n\n\t =========================================================================");
    printf("\n\n\t\t ---> Profile search system coming soon.\n");

    printf("\n\t =========================================================================");
}
