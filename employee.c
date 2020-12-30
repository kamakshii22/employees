#include<stdio.h>
#include<string.h>

struct employee
{
    int empno;
    char* empname;
    char* department;
    int salary;
};

void print_details(int no, char* name, char* dept, int sal)
{
    printf("%d\t\t",no);
    printf("%s\t\t",name);
    printf("%s\t\t",dept);
    printf("%d\n",sal);
}
int main()
{
    struct employee list_of_emp[20];
    //1. Human Resource Department
    list_of_emp[0].empno = 16501;
    list_of_emp[0].empname = "Varun Singh";
    list_of_emp[0].department = "Human Resource";
    list_of_emp[0].salary = 45000;

    list_of_emp[6].empno = 16507;
    list_of_emp[6].empname = "Ritik Pandey";
    list_of_emp[6].department = "Human Resource";
    list_of_emp[6].salary = 47500;

    list_of_emp[12].empno = 16513;
    list_of_emp[12].empname = "Arjun Thakur";
    list_of_emp[12].department = "Human Resource";
    list_of_emp[12].salary = 50000;

    //2. Accounts Department
    list_of_emp[1].empno = 16502;
    list_of_emp[1].empname = "Garry Singh";
    list_of_emp[1].department = "Accounts";
    list_of_emp[1].salary = 35000;

    list_of_emp[7].empno = 16508;
    list_of_emp[7].empname = "Ravi Verma";
    list_of_emp[7].department = "Accounts";
    list_of_emp[7].salary = 32000;

    list_of_emp[13].empno = 16514;
    list_of_emp[13].empname = "Urmila Thakur";
    list_of_emp[13].department = "Accounts";
    list_of_emp[13].salary = 30000;

    //3. Sales Department
    list_of_emp[2].empno = 16503;
    list_of_emp[2].empname = "Malik Arora";
    list_of_emp[2].department = "Sales Dept";
    list_of_emp[2].salary = 25000;

    list_of_emp[8].empno = 16509;
    list_of_emp[8].empname = "Ujwal Jaiswal";
    list_of_emp[8].department = "Sales Dept";
    list_of_emp[8].salary = 28000;

    list_of_emp[14].empno = 16515;
    list_of_emp[14].empname = "Aarti Patle";
    list_of_emp[14].department = "Sales Dept";
    list_of_emp[14].salary = 26500;

    //4. Marketing Department
    list_of_emp[3].empno = 16504;
    list_of_emp[3].empname = "Udit Sharma";
    list_of_emp[3].department = "Marketing";
    list_of_emp[3].salary = 38000;

    list_of_emp[9].empno = 16510;
    list_of_emp[9].empname = "Manya Agrawal";
    list_of_emp[9].department = "Marketing";
    list_of_emp[9].salary = 35000;

    list_of_emp[15].empno = 16516;
    list_of_emp[15].empname = "Venkatesh Raman";
    list_of_emp[15].department = "Marketing";
    list_of_emp[15].salary = 36500;

     //5. Operations Department
    list_of_emp[4].empno = 16505;
    list_of_emp[4].empname = "Avantika Mathew";
    list_of_emp[4].department = "Operations";
    list_of_emp[4].salary = 40000 ;

    list_of_emp[10].empno = 16511;
    list_of_emp[10].empname = "Suresh Agarwal";
    list_of_emp[10].department = "Operations";
    list_of_emp[10].salary = 42000;

    list_of_emp[16].empno = 16517;
    list_of_emp[16].empname = "Anmol Bathra";
    list_of_emp[16].department = "Operations";
    list_of_emp[16].salary = 44000;

    list_of_emp[17].empno = 16518;
    list_of_emp[17].empname = "Vatsal Shukla";
    list_of_emp[17].department = "Operations";
    list_of_emp[17].salary = 43000;

    //6. Purchase Department
    list_of_emp[5].empno = 16506;
    list_of_emp[5].empname = "Diya Mirza";
    list_of_emp[5].department = "Purchase";
    list_of_emp[5].salary = 20000 ;

    list_of_emp[11].empno = 16512;
    list_of_emp[11].empname = "Shoubhik Bose";
    list_of_emp[11].department = "Purchase";
    list_of_emp[11].salary = 21000;

    list_of_emp[18].empno = 16519;
    list_of_emp[18].empname = "Shubash Mishra";
    list_of_emp[18].department = "Purchase";
    list_of_emp[18].salary = 23500;

    list_of_emp[19].empno = 16520;
    list_of_emp[19].empname = "Priya Dewangan";
    list_of_emp[19].department = "Purchase";
    list_of_emp[19].salary = 25000;

    //Printing the Details
    printf("The details of the employee are as follows:\n\nEmployee no\tEmployee Name\t\tDepartment\t\tSalary\n\n");
    for (int i=0; i<20; i++)
    {print_details(list_of_emp[i].empno, list_of_emp[i].empname, list_of_emp[i].department, list_of_emp[i].salary);}
    return 0;
}
