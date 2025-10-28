#include<stdio.h>
#include<string.h>

struct student
{
  int rollno;
  float marks;
  char name[40];
};

void show(struct student s ){
    printf("The name of the student is : %s\n",s.name);
    printf("Roll no is : %d\n",s.rollno);
    printf("Marks are : %.2f\n",s.marks);
}
int main() {
       struct student s1;
       s1.rollno = 7;
       s1.marks = 77.7;
       strcpy (s1.name,"Sham");

       show(s1);
     
  
 return 0;
}