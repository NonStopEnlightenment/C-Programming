#include <stdio.h>
struct Employee
{
    int id;
    char name[25];
    float salary;
};
int main()
{
    FILE* fp;       //File Pointer 
    struct Employee Emp[10];    //Array of Structure 
    int n;
    printf("Ennter the num of Employee:");
    scanf("%d",&n);             //Getting the number of Employee
    
    fp = fopen("Employee.txt","rb");    //Opening an existing file for reading Information
    if (fp == NULL)
    {
        perror("");
        return 0;
    }
    fread(Emp, sizeof(struct Employee),n,fp); //Reading content from the File
    
    //Displaying Employee Information
    printf("Enter Name:");
    for (int i = 0 ; i < n ; i++)
    {
        printf("\nEmp ID: %d",Emp[i].id);
        printf("\nEnter Emp Name: %s",Emp[i].name);
        printf("\nEnter Emp Salary: %f",Emp[i].salary);
        printf("\n");
    }
    
    fclose(fp);       //Closing the File
    return 0;
}
