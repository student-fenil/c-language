#include<stdio.h>
#include<conio.h>
struct student
 {
  char name[50];
  int rollno;
  int m1,m2,m3;
  int total;
  float percentage;
 };

 int main()
 {
  struct student s[5];
  int i;
  for(i=0;i<5;i++)
 {
  printf("enter name:");
  scanf("%s",s[i].name);
  printf("enter rollno:");
  scanf("%d",s[i].rollno);
  printf("enter marks of 3 subjects:");
  scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
  s[i].total=s[i].m1+s[i].m2+s[i].m3;
  s[i].percentage=s[i].total/3.0;
 }
 printf("\nname\trollno\ttotal\tpercentage\n");
 for(i=0;i<5;i++)
 {
  printf("%s\t%d\t%d\t%.2f\n",s[i].name,s[i].rollno,s[i].total,s[i].percentage);
 }
 return 0;
}


/*output
enter name:ff
enter rollno:1
*/