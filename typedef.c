#include<stdio.h>
#include<string.h>


 typedef struct student                    
{ 
  int rollno;
  float marks;
  char name[40];
}stu ;

int main() {
    stu s1;          // instead of writting struct student we can simply write stu 
    
     stu *ptr = &s1;
    s1.rollno = 7;
    s1.marks = 77;
    strcpy(s1.name,"Sham lal");
    
    printf("%s having rollno - %d have %.2f marks ", s1.name,s1.rollno,s1.marks);
     printf("%s having rollno - %d have %.2f marks ", ptr->name,ptr->rollno,ptr->marks);
     
  
 return 0;
}  