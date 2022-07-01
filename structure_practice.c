#include <stdio.h>
#include <string.h>
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
int main(int argc, char const *argv[]){
    struct student s1;
    s1.cgpa = 9.9;
    //s1.name = "Ritansh";
    strcpy(s1.name,"Ritansh");
    s1.roll = 2647;

    struct student s2 = {"Kritika",16,10};

    struct student ece[100];
    ece[0].cgpa = 9.8;
    strcpy(ece[0].name,"Vidushi");
    ece[0].roll = 4726;

    printf("Student name: %s\n",s1.name);
    printf("student's cgps is %f\n",s1.cgpa);
    printf("student's roll number: %d\n", s1.roll);

    printf("student s2's name is %s\n",s2.name);
    printf("student s2's roll number is %d\n",s2.roll);
    printf("student s2's cgpa is %f\n",s2.cgpa);
    printf("the first ece student's name is: %s\n",ece[0].name);
    printf("the first ece student's roll number: %d\n",ece[0].roll);
    printf("the first ece student's cgpa is %f\n",ece[0].cgpa);
    }


