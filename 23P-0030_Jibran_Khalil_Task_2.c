
#include <stdio.h>

int balance_in_count = 10000, saving_Amount = 5000;
void withdraw_amount(int amount, int submenu);
void withdraw();
void deposit_amount(int amount, int submenu);
void deposit();
void balance_query();

int main()
{
    int selected_menu;
    printf("==== ATM Menu ====");
    printf("\n1. Withdrawal\n2. Deposit\n3. Balance Inquiry\n4. Exit");

    printf("\nPlease select an option: ");
    scanf("%d", &selected_menu);

    switch (selected_menu)
    {
    case 1:
        withdraw();
        break;
    case 2:
        deposit();
        break;
    case 3:
        balance_query();

        break;
    case 4:
        break;

    default:
        printf("\nInvalid choice. Please select a valid option (1/2/3/4).");
        break;
    }

    return 0;
}

void withdraw()
{
    int amount_to_withdraw, sub_menu;
    printf("\n==== Withdraw ====");
    printf("\nselect the account type:");
    printf("\n1. Current Account\n2. Saving Account");
    printf("\nPlease select an option: ");
    scanf("%d", &sub_menu);
    switch (sub_menu)
    {
    case 1:
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &amount_to_withdraw);
        withdraw_amount(amount_to_withdraw, sub_menu);
        break;
    case 2:
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &amount_to_withdraw);
        withdraw_amount(amount_to_withdraw, sub_menu);
        break;
    default:
        printf("Invalid choice");
    }
}

void withdraw_amount(int amount, int submenu)
{
    if (submenu == 1)
    {
        if (amount <= balance_in_count)
        {
            balance_in_count -= amount;

            printf("\nCash withdraw sucessful");
            printf("\nBalance in current Accountis %d R.s", balance_in_count);
        }
        else
        {
            printf("\nAmount you entered is greater than the balance in your Current account");
        }
    }
    else
    {
        if (amount <= saving_Amount)
        {
            saving_Amount -= amount;

            printf("\nCash withdraw sucessful");
            printf("\nBalance in Saving  Accountis %d R.s", saving_Amount);
        }
        else
        {
            printf("\nAmount you entered is greater than the balance in your saving account");
        }
    }
}

void deposit()
{
    int amount_to_deposit, sub_menu;
    printf("\n==== Deposit ====");
    printf("\nselect the account type:");
    printf("\n1. Current Account\n2. Saving Account");
    printf("\nPlease select an option: ");
    scanf("%d", &sub_menu);
    switch (sub_menu)
    {
    case 1:
        printf("Enter the amount you want to deposit: ");
        scanf("%d", &amount_to_deposit);
        deposit_amount(amount_to_deposit, sub_menu);
        break;
    case 2:
        printf("Enter the amount you want to deposit: ");
        scanf("%d", &amount_to_deposit);
        deposit_amount(amount_to_deposit, sub_menu);
        break;
    default:
        printf("Invalid choice");
    }
}

void deposit_amount(int amount, int submenu)
{
    if (submenu == 1)
    {
        if (amount >= 1)
        {
            balance_in_count += amount;
            printf("\nCash deposit sucessful");
            printf("\nBalance in current Accountis %d R.s", balance_in_count);
        }
        else
        {
            printf("\nAmount you entered is Not Valid");
        }
    }
    else
    {
        if (amount >= 1)
        {
            saving_Amount += amount;
            printf("\nCash deposit sucessful");
            printf("\nBalance in current Accountis %d R.s", saving_Amount);
        }
        else
        {
                        printf("\nAmount you entered is Not Valid");

        }
    }
}

void balance_query()
{
    int sub_menu;
    printf("\n==== Balance Inquiry ====");
    printf("\nselect the account type:");
    printf("\n1. Current Account\n2. Saving Account");
    printf("\nPlease select an option: ");
    scanf("%d", &sub_menu);
    switch (sub_menu)
    {
    case 1:
        printf("Balance in current Accountis %d R.s", balance_in_count);
        break;
    case 2:
        printf("Balance in Saving Accountis %d R.s", saving_Amount);

        break;
    default:
        printf("\nInvalid choice. Please select a valid option (1/2/3/4).");
    }
}
