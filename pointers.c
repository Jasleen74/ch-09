#include<stdio.h>
#include<string.h>

struct student
{
  int rollno;
  float marks;
  char name[40];
};

int main() {

    struct student s1;
    s1.rollno = 7;
    
    struct student *ptr;
    ptr = &s1;

    printf("The marks of the student are : %d", (*ptr).rollno);

    
     
  
 return 0;
}