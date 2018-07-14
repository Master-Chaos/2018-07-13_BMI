#include <stdio.h>
#include <string.h>

float calculateBMI(float *size, float *weight) //CALCULATE BMI
{
    float bmi = 0; //INIT VARIABLE BMI

    bmi = (*weight / (*size * *size)); //FORMULA TO CALCULATE BMI

    printf("Your BMI is: %.1f\n", bmi); //PRINT OUT RESULT OF BMI

return bmi;
}

void checkoptimalBMI (int age) //CHECK OPTIMAL BMI BY AGE
{
    printf("Your optimal BMI is: "); //PRINT OUT FIRST PART
    switch(age) //TAKE CASE BY AGE AND DO THE INSTRUCTION OF THE USED CASE
    {
        case 0 ... 18: printf("-\n");break;
        case 19 ... 24: printf("19-24\n");break;
        case 25 ... 34: printf("20-25\n");break;
        case 35 ... 44: printf("21-26\n");break;
        case 45 ... 54: printf("22-27\n");break;
        case 55 ... 64: printf("23-28\n");break;
        default: printf("24-29\n");break;;
    }
}

void checkBMI(float bmi, char sex[]) //CHECK BMI BY CALCULATED BMI AND BY SEX
{
    int bmitoint = (int) (bmi+0.5); //CONVERT BMI FROM FLOAT TO INT

    if(strcmp(sex, "male") == 0) //COMPARE SEX WITH MALE; IF CONDITION IS TRUE DO THIS
    {
        switch(bmitoint) //TAKE CASE BY BMI AND DO THE INSTRUCTION OF THE USED CASE
        {
            case 0 ... 19: printf("You are underweight!\n"); break;
            case 20 ... 25: printf("You have normal weight.\n"); break;
            case 26 ... 30: printf("You have overweight!\n"); break;
            case 31 ... 40: printf("You have adiposity!!\n"); break;
            default: printf("You have massive adiposity!!!\n"); break;
        }

    }
    else if (strcmp(sex,"female") == 0) //COMPARE SEX WITH FEMALE; IF CONDITION IS TRUE DO THIS
    {
        switch(bmitoint) //TAKE CASE BY BMI AND DO THE INSTRUCTION OF THE USED CASE
        {
            case 0 ... 18: printf("You are underweight!\n"); break;
            case 19 ... 24: printf("You have normal weight.\n"); break;
            case 25 ... 30: printf("You have overweight!\n"); break;
            case 31 ... 40: printf("You have adiposity!!\n"); break;
            default: printf("You have massive adiposity!!!\n"); break;
        }
    }
    else //IF SEX IS NOT MALE OR FEMALE; THAN PRINT OUT THE FOLLOWING INFO
    {
        printf("Your could not be deceived! Please try again.\n");
    }
}


int main() { //MAIL FUNCTION

    float size = 1.5; //INPUT YOUR SIZE IN M
    float weight = 50; //INPUT YOUR WEIGHT IN KG
    float bmi; //VARIABLE FOR BMI
    int age = 20; //INPUT YOUR AGE
    char sex[7] = "female"; //INPUT YOUR SEX AS MALE OR FEMALE

    printf("------------------------------------------\n"); //OUTPUT SEPARATION
    printf("BMI - Body-Mass-Index-Calculator!\n"); //PRINT OUT PROGRAM TITLE
    printf("------------------------------------------\n"); //OUTPUT SEPARATION
    bmi = calculateBMI(&size, &weight); // PRINT OUT YOUR BMI
    checkoptimalBMI(age); // PRINT OUT YOUR OPTIMAL BMI
    checkBMI(bmi, sex); // PRINT OUT YOU BMI-STATUS
    printf("------------------------------------------\n"); //OUTPUT SEPARATION

    return 0;
}