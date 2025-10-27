/*Quick Quiz: Write a program to store the details of 3 employees from user defined data.*/

#include<stdio.h>
#include<string.h>

struct student
{
  int rollno;
  float marks;
  char name[40];
};

int main() {
    for (int i = 0 ; i <3;i ++){
    struct student si;
    
    printf("Pls enter the rollno : ");
    scanf("%d",&si.rollno);

    printf("Pls enter the marks: ");
    scanf("%f", &si.marks);

    printf("Pls enter the name : ");
    scanf("%s", &si.name);
    
    printf("%s having rollno - %d have %.2f marks \n", si.name,si.rollno,si.marks);

    printf("\n");
    }

  
 return 0;
} 