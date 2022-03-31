#include <stdio.h>
struct student{
    char name[50];
    int age;
};
struct student studentinformation();
int main()
{
    struct student s;
    s = studentinformation();
       
    printf("display information");
    printf("\nname : %s",s.name);
    printf("\n roll no  : %d",s.age);
    

    return 0;
}
struct student studentinformation()
{
    struct student s1;
    printf("enter name : ");
    scanf("%[^\n]%*c",s1.name);
printf("Enter age: ");
  scanf("%d", &s1.age);
    return s1;
}
