/*Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K).
 (Hint: C=5/9(F- 32), K = C + 273.15)*/

 #include<stdio.h>
int main()
{
    float f,C,K;

    printf("enter a temperature");
    scanf("%f",&f);

    C=(f-32)*0.55;
    printf("\nTemperataure in celsius:%f",C);

    K=C+273.15;
    printf("\nTemperature in kelvin%f",K);
    return 0;
}

