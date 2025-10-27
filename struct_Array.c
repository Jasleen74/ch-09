#include<stdio.h>
#include<string.h>

struct student
{
  int rollno;
  float marks;
  char name[40];
};


int main() {
    struct student reportcard[50];

    //The rollnumbers 
    reportcard[0].rollno = 1;
    reportcard[1].rollno = 2;

    printf("The marks of the students are %d and %d", reportcard[0].rollno , reportcard[1].rollno);
     
 return 0;
}