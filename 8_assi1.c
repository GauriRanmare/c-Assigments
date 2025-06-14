/*The basic salary of an employee is decided at the time of employment, which may be
 different for different employees. Apart from basic, employee gets 10% of basic as house rent,
  30% of basic as dearness allowance. A professional tax of 5% of basic is deducted from salary. 
  Accept the employee id and basic salary for an employee and output the take home salary of the employee.*/

  #include<stdio.h>
int main()
{
    int eid;
    float bs,tax,hra,da,totalSalary;

    printf("Enter a employee details");

    printf("ID:");
    scanf("%d",&eid);

    printf("Basic Salary:");
    scanf("%f",&bs);

    printf("DA(%%):");
    scanf("%f",&da);

     printf("TAx(%%):");
    scanf("%f",&tax);

     printf("HRA(%%):");
    scanf("%f",&hra);

    totalSalary=bs+(bs*(da+hra-tax)/100);
    printf("Total Salary:%f",totalSalary);

    return 0;
}





