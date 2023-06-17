/*Define a Structure student with the following specifications :
roll no integer 
name characters 
dob only month 
marks of 5 subs float 
percentage float 
total float 
Write functions to read and display the details of n students
Display student with maximum mark . minimum mark , sort in asc and dsc , count number of students whose name starts with A how many born in april, how many scored above percentage.
*/
#include <stdio.h>
#include <stdlib.h>
struct date
{
    int day , month , year ;
};
struct student
{
    int roll_no ;
    char name[20];
    struct date dob ;
    float marks[3];
    float percentage;
    float total;
};

struct student read_data();
void display_data(struct student);

int main ()
{
    struct student s1[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        s1[i] = read_data();
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        display_data(s1[i]);
    }
    return 0 ;
}

struct student read_data()
{
    char extra ;
    struct student s;
    printf("Enter roll no : ");
    scanf("%d",&s.roll_no);
    scanf("%c",&extra);
    printf("Enter Name : ");
    fgets(s.name,20,stdin);
    printf("Enter Day : ");
    scanf("%d",&s.dob.day);
    printf("Enter Month : ");
    scanf("%d",&s.dob.month);
    printf("Enter Year : ");
    scanf("%d",&s.dob.year);
    printf("Enter 5 Marks of the student : \n");
    s.total = 0.0 ;
    for (int i = 0 ; i < 3 ; i++)
    {
        printf("\nMark %d : " , (i+1));
        scanf("%f",&s.marks[i]);
        s.total += s.marks[i];
    }
    s.percentage = ((s.total * 100)/300);
    return s ;
}

void display_data(struct student s)
{
    printf("Roll No : %d\n",s.roll_no);
    printf("Name : %s",s.name);
    printf("DOB : %d - %d - %d\n",s.dob.day,s.dob.month,s.dob.year);
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Mark %d : %f\n",i+1 , s.marks[i]);
    }
    printf("Total Marks : %f\n",s.total);
    printf("Percentage : %f\n",s.percentage);
}
