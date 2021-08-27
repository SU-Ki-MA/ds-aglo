#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* structure to store employee salary details */
struct employee
{
  int empId;
  char name[32];
  int basic, hra, da, ma;
  int pf, insurance;
  float gross, net;
};
/* prints payslip for the requested employee */
void printSalary(struct employee e1)
{
  printf("Salary Slip of %s:\n", e1.name);
  printf("Employee ID: %d\n", e1.empId);
  printf("Basic Salary: %d\n", e1.basic);
  printf("House Rent Allowance: %d\n", e1.hra);
  printf("Dearness Allowance: %d\n", e1.da);
  printf("Medical Allowance: %d\n", e1.ma);
  printf("Gross Salary: %.2f Rupees\n", e1.gross);
  printf("\nDeductions: \n");
  printf("Provident fund: %d\n", e1.pf);
  printf("Insurance: %d\n", e1.insurance);
  printf("\nNet Salary: %.2f Rupees\n\n", e1.net);
  return;
}

int main()
{
  int i, ch, num, flag, empID;
  struct employee *e1;
  /* get the number of employees from the user  */
  printf("Enter the number of employees:");
  scanf("%d", &num);
  /* dynamically allocate memory to store employee salary details */
  e1 = (struct employee *)malloc(sizeof(struct employee) * num);
  /* get the employee salary details from the customer */
  printf("Enter your input for every employee:\n");
  for (i = 0; i < num; i++)
  {
    printf("Employee ID:");
    scanf("%d", &(e1[i].empId));
    getchar();
    printf("Employee Name:");
    fgets(e1[i].name, 32, stdin);
    e1[i].name[strlen(e1[i].name) - 1] = '\0';
    printf("Basic Salary, HRA:");
    scanf("%d%d", &(e1[i].basic), &(e1[i].hra));
    printf("DA, Medical Allowance:");
    scanf("%d%d", &(e1[i].da), &(e1[i].ma));
    printf("PF and Insurance:");
    scanf("%d%d", &(e1[i].pf), &(e1[i].insurance));
    printf("\n");
  }
  /* gross and net salary calculation */
  for (i = 0; i < num; i++)
  {
    e1[i].gross = e1[i].basic + (e1[i].hra * e1[i].basic) / 100 + (e1[i].da * e1[i].basic) / 100 +
                  (e1[i].ma * e1[i].basic) / 100;
    e1[i].net = e1[i].gross - (e1[i].pf + e1[i].insurance);
  }
  /* printing payslip for the given employee ID */
  while (1)
  {
    printf("Enter employee ID to get payslip:");
    scanf("%d", &empID);
    flag = 0;
    for (i = 0; i < num; i++)
    {
      if (empID == e1[i].empId)
      {
        printSalary(e1[i]);
        flag = 1;
      }
    }

    if (!flag)
    {
      printf("No Record Found!!\n");
    }

    printf("Do You Want To Continue(1/0):");
    scanf("%d", &ch);
    if (!ch)
    {
      break;
    }
  }
  return 0;
}
