// Returns the minimum number of coins based on user-inputted number of cents

#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate how many quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate how many dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate how many nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate how many pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins together
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    int coins;

    do
    {
        // Prompt user for how many cents they are owed
        cents = get_int("Change owed: ");
    }

    // Continue prompting until input is greater than or equal to 0
    while (cents < 0);

    // Return input cents value
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters;

    // Calculate number of quarters
    quarters = cents / 25;

    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes;

    // Calculate number of dimes
    dimes = cents / 10;

    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels;

    // Calculate number of nickels
    nickels = cents / 5;

    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies;

    // Calculate number of pennies
    pennies = cents;

    return pennies;
}
