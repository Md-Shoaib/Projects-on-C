/*Author: Md Shoaib
  Purpose: Units and conversion
           kms to miles
           inches to foot
           cms to inches 
           pound to kgs
           inches to meters
  Date: 07/07/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int user, unit1;
    float result1;
    //Input from user
    printf("What type of conversion you want?\n");
    printf("Type 1 for kms to miles or miles to kms\nType 2 for inches to foot or foot to inches\nType 3 for cms to inches or inches to cms\nType 4 for pound to kgs or kgs to pound\nType 5 for inches to meters or meters to inches\n");
    scanf("%d", &user);
    //conditions
    switch (user)
    {
    //kms to miles or miles to kms
    case 1:
        printf("You selected 1 for kms to miles or miles to kms.(Type 1 for kms to miles or 2 for miles to kms)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f kms = %f miles", result1, result1 / 1.609);
        }
        else if (unit1 == 2)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f miles = %f kms", result1, result1 * 1.609);
        }
        break;
    //inches to foot or foot to inches
    case 2:
        printf("You selected 2 for inches to foot or foot to inches.(Type 1 for inches to foot or 2 for foot to inches)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f inches = %f foot", result1, result1 / 12);
        }
        else if (unit1 == 2)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f foot = %f inches", result1, result1 * 12);
        }
        break;
    //cms to inches or inches to cms
    case 3:
        printf("You selected 3 for cms to inches or inches to cms.(Type 1 for cms to inches or 2 for inches to cms)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f cms = %f inches", result1, result1 / 2.54);
        }
        else if (unit1 == 2)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f inches = %f cms", result1, result1 * 2.54);
        }
        break;
        //pound to kgs or kgs to pound
    case 4:
        printf("You selected 4 for pound to kgs or kgs to pound.(Type 1 for pound to kgs or 2 for kgs to pound)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter you mass value:");
            scanf("%f", &result1);
            printf("%f pound = %f kgs", result1, result1 / 2.205);
        }
        else if (unit1 == 2)
        {
            printf("Enter you mass value:");
            scanf("%f", &result1);
            printf("%f kgs = %f pound", result1, result1 * 2.205);
        }
        break;
        //inches to meters or meters to inches
    case 5:
        printf("You selected 5 for inches to meters or meters to inches.(Type 1 for inches to meters or 2 for meters to inches)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter you length:");
            scanf("%f", &result1);
            printf("%f inches = %f meters", result1, result1 / 39.37);
        }
        else if (unit1 == 2)
        {
            printf("Enter you mass value:");
            scanf("%f", &result1);
            printf("%f meters = %f inches", result1, result1 * 39.37);
        }
        break;

    default:
        printf("You typed an invalied no.\n");
        break;
    }

    return 0;
}
