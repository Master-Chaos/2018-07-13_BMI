#include <stdio.h>
#include <string.h>

float calulateBMI(float *size, float *weigth)
{
    float bmi = 0;

    bmi = (*weigth / (*size * *size));

    printf("Your BMI is: %.2f\n", bmi);

return bmi;
}

void checkoptimalBMI (int age)
{
    printf("Your optimal BMI is: ");
    switch(age)
    {
        case 0 ... 18: printf("\n");
        case 19 ... 24: printf("19-24\n");
        case 25 ... 34: printf("20-25\n");
        case 35 ... 44: printf("21-26\n");
        case 45 ... 54: printf("22-27\n");
        case 55 ... 64: printf("23-28\n");
        default: printf("24-29\n");
    }
}

void checkBMI(float bmi, char sex[])
{
    int bmivalue = (int) (bmi+0.5);

    if(strcmp(sex, "male") == 0)
    {
        switch(bmivalue)
        {
            case 0 ... 19: printf("You are underweight\n"); break;
            case 20 ... 25: printf("You have normal weight\n"); break;
            case 26 ... 30: printf("You have overweight\n"); break;
            case 31 ... 40: printf("You have adiposity\n"); break;
            default: printf("You have massive adiposity\n"); break;
        }

    }
    else if (strcmp(sex,"female") == 0)
    {
        switch(bmivalue)
        {
            case 0 ... 18: printf("You are underweight\n"); break;
            case 19 ... 24: printf("You have normal weight\n"); break;
            case 25 ... 30: printf("You have overweight\n"); break;
            case 31 ... 40: printf("You have adiposity\n"); break;
            default: printf("You have massive adiposity\n"); break;
        }
    }
    else
    {
        printf("Your could not be deceived! Please try again.\n");
    }
}


int main() {

    float size = 1.84;
    float weigth = 94;
    float bmi;
    int age = 26;
    char sex[10] = "male";


    printf("BMI - Body-Mass-Index-Calculator!\n");

    bmi = calulateBMI(&size, &weigth);
    checkoptimalBMI(age);

    checkBMI(bmi, sex);




    return 0;
}