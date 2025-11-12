#include<stdio.h>
struct Student
{
  char name[50];
  int marks;
};

int main()
{
    struct Student s1,s2;
    printf("Enter the name of first student: \n");
    scanf("%s", &s1.name);
    printf("Enter the name of second student: \n");
    scanf("%s", &s2.name);
    printf("Enter the marks of first student: \n");
    scanf("%d", &s1.marks);
    printf("Enter the marks of second student: \n");
    scanf("%d", &s1.marks);
    printf(" The name of first student is %s\n ", s1.name);
    printf(" The marks of first student is %d\n ", s1.marks);
    printf(" The name of second student is %s\n ", s2.name);
    printf(" The marks of second student is %d\n ", s2.marks);
    
    
}
