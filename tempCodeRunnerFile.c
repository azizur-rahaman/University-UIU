#include<stdio.h>
#include<string.h>

struct Employee
{
    int Employee_Id;
    char name[50];
    int age;
};
void addEmployee(struct Employee *list,int *numEmployee)
{
    if(*numEmployee<100)
    {
        printf("Enter info for new employee :\n");
        printf("Employee ID : ");
        scanf("%d",&list[*numEmployee].Employee_Id);
        printf("\nName : ");
        scanf("%d",&list[*numEmployee].name);//use fgets
        printf("\nAge : ");
        scanf("%d",&list[*numEmployee].age);
        (*numEmployee)++;
        printf("\nNew employee added.\n");


    }
    else if(*numEmployee>100)
    {
        printf("Sorry! We cannot excced the limit of 100");
    }



}
void updateEmployee(struct Employee *list,int *numEmployee)
{
    char EmployeeName;
    int count=0;
    printf("Enter your name to update the information :\n");
    scanf("%s", &EmployeeName);

    for(int i=0; i<*numEmployee; i++)
    {
       if(strcmp(list[i].name,EmployeeName) ==0)
       {
           printf("Enter your new age : ");
           scanf("%d",&list[i].age);
           printf("your information updated");
           count++;
           break;
       }
       else if((count==0)&& *numEmployee<100)
       {
           printf("Name is not found!Adding as new employee:\n");
           addEmployee(list,&numEmployee);
       }
       else if(numEmployee>100)
       {
           printf("Limit exceed 100 ,cannot add more!");
       }
    }


}
void displayEmployee(struct Employee *list,int *numEmployee)
{
    int i;
    printf("Employee list : \n");
    for(i=0; i<*numEmployee; i++)
    {
        printf("    EMPLOYEE NO : %d\n",i+1);
        printf("Employee name :%s\n",list[i].name);
        printf("Employee Id :%d\n",list[i].Employee_Id);
        printf("Employee age :%d\n",list[i].age);
    }
    if(*numEmployee==0)
    {
        printf("You didn't add any info of employee yet:\(");
    }

}

int main()
{
    struct Employee list[100];
    int choice;
    int numEmployee=0;
    do{
    printf("\nHere is your options :\n");
    printf("   1.Add Employee\n   2.Update Employee Information\n   3.Display All Employee\n   4.Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        addEmployee(list,&numEmployee);
    }
    else if(choice==2)
    {

        updateEmployee(list,&numEmployee);

    }
    else if(choice==3)
    {
        displayEmployee(list,&numEmployee);
    }
    else if(choice==4)
    {
        printf("Here you exit!Thank you for your visit 😕)\n");
        exit(0);
    }
    else
    {
        printf("Please enter choice among the range\n");
    }
    }while(choice!=4);

    return 0;
}