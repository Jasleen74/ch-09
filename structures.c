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
    s1.marks = 77;
    strcpy(s1.name,"Sham lal");
    
    printf("%s having rollno - %d have %.2f marks ", s1.name,s1.rollno,s1.marks);
     
  
 return 0;
} 