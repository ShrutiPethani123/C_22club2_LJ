/*

structure: 


*/
#include<stdio.h>
struct Student
{
    int id;
    char name[10];
    int age;
    float height;
    char gender;
}s1;

void main()
{

    // struct Student s1;
    char c;

    printf("Enter id: ");
    scanf("%d",&s1.id);
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    printf("Enter height: ");
    scanf("%f",&s1.height);
    // fflush(stdin);
    // printf("Enter gender: ");
    // scanf("%c",&s1.gender);

    s1.gender='m';

    printf("Details...............................\n");
    printf("\nName: %s",s1.name);
    printf("\nid: %d",s1.id);
    printf("\nheight: %.2f",s1.height);
    printf("\nAge: %d",s1.age);
    printf("\nGender: %c",s1.gender);



}
