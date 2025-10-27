#include<stdio.h>
#include<string.h>
struct student
{
  int rollno;
  float marks;
  char name[40];
};


int main() {

    struct student sham = {12,77.77,"shamlal"};

    printf("the name of the student is %s with rollno %d and marks as : %.2f", sham.name,sham.rollno, sham.marks);
    
     
  
 return 0;
}