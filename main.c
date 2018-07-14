#include <stdio.h>
#include <string.h>

float calculateBMI(__const float *size, __const float *weight) //CALCULATE BMI
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

void printBMIresults(float size, float weight, int age, char sex[7]) //FUNCTION FOR PRINTING RESULTS
{
    float bmi = 0; //VARIABLE FOR BMI

    printf("------------------------------------------\n"); //OUTPUT SEPARATION
    printf("BMI - Body-Mass-Index-Calculator!\n"); //PRINT OUT PROGRAM TITLE
    printf("------------------------------------------\n"); //OUTPUT SEPARATION
    bmi = calculateBMI(&size, &weight); // CALL FUNCTION TO CALCULATE YOUR BMI
    checkoptimalBMI(age); // CALL FUNCTION TO CHECK YOUR OPTIMAL BMI
    checkBMI(bmi, sex); // CALL FUNCTION TO CHECK YOU BMI-STATUS
    printf("------------------------------------------\n"); //OUTPUT SEPARATION
}

int main() { //MAIL FUNCTION

    float size = 1.55; //INPUT YOUR SIZE IN M
    float weight = 50; //INPUT YOUR WEIGHT IN KG
    int age = 20; //INPUT YOUR AGE
    char sex[7] = "female"; //INPUT YOUR SEX AS MALE OR FEMALE

    printBMIresults(size, weight, age, sex); //CALL FUNCTION FOR PRINTING RESULTS
    printBMIresults(1.7, 45, 27, "female"); //TESTCASE WOMEN: 1.7M; 45KG 27YEARS
    printBMIresults(1.9, 131, 50, "male"); //TESTCASE MEN: 1.9M; 131KG 50YEARS
    printBMIresults(1.81, 69, 77, "female"); //TESTCASE WOMEN: 1.81M; 69KG 77YEARS
    printBMIresults(1.79, 87, 100, "male"); //TESTCASE MEN: 1.79M; 81KG 100YEARS

    return 0;
}