#include <stdio.h>
#include <string.h>
int main()
{
    int ch, num, cash = 1000, a, b, c, d, e, con;
    char user_id[50];
    char name[50] = {"TAYYAB KHAN"};
    char AC[] = "1234567890";
    char DOB[20] = {"22/11/2006"};
    char mobile_no[] = "1111111111";
    int enteredPASS = 1234;
    printf("|| LOGIN PAGE ||\n");
    printf("ENTER YOUR USER id : ");
    scanf("%s", user_id);
    if (strcmp(user_id, "tayyab@22") == 0)
    {
        printf("ENTER YOUR PASSWORD : ");
        scanf("%d", &enteredPASS);
        if (enteredPASS == 1234)
        {
            do
            {
                printf("WELCOME TO ONLINE BANK MANEGMENT SYSTEM \n1.Deposit\n2.Withdrawal\n3.Check Balance\n4.Update information\n5.Check information\n6.Exit\nCHOOSE YOUR OPTION : \n");
                scanf("%d", &num);
                if (num == 1)
                {
                    printf("Enter amount you want to Deposit : ");
                    scanf("%d", &a);
                    cash += a;
                    printf("Updated balance : %d\n", cash);
                }
                else if (num == 2)
                {
                    printf("Enter amount you want to withdrawal : ");
                    scanf("%d", &b);
                    if (b > cash)
                    {
                        printf("Insufficient balance !!");
                    }

                    else
                    {
                        cash -= b;
                        printf("Updated balance : %d", cash);
                    }
                }
                else if (num == 3)
                {
                    printf("Your current balance is : %d", cash);
                }
                else if (num == 4)
                {
                    printf("|| CHOOSE THE INFORMATION YOU WANTED TO UPDATE ||\n1.Name\n2.Mobile Number\n3.Date of birth\n4.A/C No.\n5.Confirm\n");
                    scanf("%d", &con);
                    if (con == 1)
                    {
                        printf("Enter your name : ");
                        scanf("%s", name);
                    }
                    else if (con == 2)
                    {
                        printf("Enter updated mobile number :");
                        scanf(" %s", mobile_no);
                        printf("Now your updated mobile number is %s", mobile_no);
                    }
                    else if (con == 3)
                    {
                        printf("Enter your date of birth :");
                        scanf(" %s", DOB);
                        printf("Your updated date of birth is %s", DOB);
                    }
                    else if (con == 4)
                    {
                        printf("Enter A/C number : ");
                        scanf("%s", &AC);
                        printf("YOUR A/C No. is %s", &AC);
                    }
                    else if (con == 5)
                    {
                        printf("YOU SUCCESSFULLY UPDATED YOUR INFORMATION");
                    }
                    else
                    {
                        printf("invalid input !!");
                    }
                }
                else if (num == 5)
                {
                    printf("A/C HOLDER NAME : %s\n", name);
                    printf("USER ID : %s\n", user_id);
                    printf("A/C No. : %s\n", AC);
                    printf("DATE OF BIRTH : %s\n", DOB);
                    printf("MOBILE No. : %s\n", mobile_no);
                }
                else if (num == 6)
                {
                    printf("|| THANKS FOR USING ONLINE BANK MANEGMENT SYSTEM ||");
                }
                else
                {
                    printf("Your choice is invalid \n");
                }

                printf("\nDo you want to continue press '0':");
                scanf("%d", &c);

            } while (c == 0);
        }
        else
        {
            printf("YOUR USER ID OR PASSWORD IS INCORRECT!! ");
        }
    }
    else
    {
        printf("THIS USER NAME DID NOT EXICTED !!");
    }

    return 0;
}
