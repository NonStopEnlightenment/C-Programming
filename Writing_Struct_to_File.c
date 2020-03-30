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
    
    //Getting Employee Information
    printf("Enter Name:");
    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter Emp ID:");
        scanf("%d",&Emp[i].id);
        printf("Enter Emp Name:");
        scanf("%s",Emp[i].name);
        printf("Enter Emp Salary:");
        scanf("%f",&Emp[i].salary);
    }
    
    fp = fopen("Employee.txt","wb");    //Creating a new file for writing Information
    fwrite(Emp, sizeof(struct Employee),n,fp); //writing content to the File
    fclose(fp);       //Closing the File
    return 0;
}
