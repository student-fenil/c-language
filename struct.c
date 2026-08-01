#include<stdio.h>
void main()
{
 struct temp2
 {
  int a;
  char b;
  float c;
 }s1; //byte block seperately formembers

 union temp
 {
  int a;
  char b[20];
  float c;
 }u1; //20 byte block 3 members
}

