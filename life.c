#include <stdio.h>
#include <cs50.h>

float discount(float expense,  int percent );
long oldr(int age);
long hours(int sleep_hours_per_day);

int main(void)
{
    string name = get_string("What is Your name? ");
    int age = get_int("How old are you? ");

    if(age <= 0)
    {
        printf("invalid age\n");
        return 0;
    }
    int sleep_hours_per_day = get_int("How many hours do you sleep per day? ");
    if(sleep_hours_per_day < 0 || sleep_hours_per_day > 24)
    {
        printf("invalid housr\n");
        return 0;
    }
    float expense = get_float("Monthly expense? ");
    if(expense <0 )
    {
        printf("invalide money\n");
        return 0;
    }
    int percent = get_int("Discount percent? ");
    if(percent < 0 || percent > 100)
    {
        printf("invalide input\n");
        return 0;
    }


        long lived_hours = oldr(age);
        long sleep_hours_per_year = hours(sleep_hours_per_day);
        float money = discount( expense, percent);
        printf("Hello, %s\n", name);
        printf("You lived approximately %li hours\n", lived_hours);
        printf("You sleep %li hours per year\n", sleep_hours_per_year);
        printf("Your monthly expense after discount: %.2f\n", money);
    

}

 long oldr(int age)
 {
    return age * 365 * 24;

 }

long hours(int sleep_hours_per_day)
{
   return sleep_hours_per_day * 365;
}

 float discount(float expense,  int percent )
 {
    return expense * (1 - percent /100.0);
}

