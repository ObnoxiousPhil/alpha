/* Design and develop a program in a language of your choice to solve the triangle
problem defined as follows : Accept three integers which are supposed to be the three
sides of triangle and determine if the three values represent an equilateral triangle,
isosceles triangle, scalene triangle, or they do not form a triangle at all. Derive test cases
for your program based on decision-table approach, execute the test cases and discuss
the results */
#include<stdio.h>
int main()
{
int a ,b ,c;
char istriangle;
printf("enter 3 integers which are sides of triangle\n");
scanf("%d%d%d",&a, &b, &c);
printf("a=%d\t, b=%d\t, c=%d\n", a, b, c);
if( a<b+c && b<a+c && c<a+b )
istriangle='y';
else
istriangle ='n';
if (istriangle=='y')
if ((a==b) && (b==c))
printf("Equilateral triangle\n");
else if ((a!=b) && (a!=c) && (b!=c))
printf("Scalene triangle\n");
else
printf("Isosceles triangle\n");
else
printf("Not a triangle\n");
return 0;
}






/*DT
20 5 5
3 15 11
4 5 20
5 5 5 
10 10 9
5 6 7 */
01111111111
 0111111111
  011111111
   11110000
   11001100
   10101010
000   
          0
      0 00               
   0
    00 0        
