#include<stdio.h>  
int main() 
{ 
int locks, stocks, barrels, tlocks, tstocks, tbarrels;  
float lprice, sprice, bprice, sales, comm; 
int c1,c2,c3,temp;  
lprice=45.0;  
sprice=30.0;  
bprice=25.0;  
tlocks=0;  
tstocks=0;  
tbarrels=0; 
printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");  scanf("%d",&locks); 
while(locks!=-1) 
{ 
c1=(locks<=0||locks>70); 
printf("enter the number of stocks and barrels\n");  
scanf("%d%d",&stocks,&barrels);  
c2=(stocks<=0||stocks>80);  
c3=(barrels<=0||barrels>90); 
if(c1) 
printf("value of locks not in the range 1..70 "); 
else 
{ 
temp=tlocks+locks;  
if(temp>70) 
printf("new total locks =%d not in the range 1..70 so old ",temp); 
else 
tlocks=temp; 
} 
printf("total locks = %d\n",tlocks); 
if(c2) 
printf("value of stocks not in the range 1..80 "); 
else 
{ 
temp=tstocks+stocks;  
if(temp>80) 
printf("new total stocks =%d not in the range 1..80 so old ",temp);
else  
tstocks=temp; 
} 
printf("total stocks=%d\n",tstocks); 
if(c3) 
printf("value of barrels not in the range 1..90 "); 
else 
{ 
temp=tbarrels+barrels;  
if(temp>90) 
printf("new total barrels =%d not in the range 1..90 so old ",temp);  
else 
tbarrels=temp; 
} 
printf("total barrel=%d",tbarrels); 
printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");  scanf("%d",&locks); 
} 
printf("\ntotal locks = %d\ntotal stocks =%d\ntotal barrels =%d\n",tlocks,tstocks,tbarrels);  sales = lprice*tlocks+sprice*tstocks+bprice*tbarrels; 
printf("\nthe total sales=%f\n",sales); 
if(sales > 0) 
{ 
if(sales > 1800.0) 
{ 
comm=0.10*1000.0; 
comm=comm+0.15*800;  
comm=comm+0.20*(sales-1800.0); 
} 
else if(sales > 1000) 
{ 
comm =0.10*1000;  
comm=comm+0.15*(sales-1000); 
} 
else 
comm=0.10*sales; 
printf("the commission is=%f\n",comm); 
} 
else 
printf("there is no sales\n"); 
return 0; 
}






/*DT:
-1
20 30 -5                  100000000
15 -2 45                   11010001 
-4 15 16                   10101001
15 80 100                  01100101
88 20 99                  0   
100 200 25                   0 000
-5 400 -9                   0 0 00  
                           0  00 0
                           000000 0
                          0
                          0   
BVA
111
112
121
211
555
10 10 9
10 9 10
9 10 10
10 10 10
10 10 11
10 11 10
11 10 10
14 14 14
18 18 17
18 17 18
17 18 18
18 18 18
18 18 19
18 19 18
19 18 18
48 48 48
70 80 89
70 79 90
69 80 90
70 80 90

EqC:
Weak
-1 40 45              
0 40 45
71 40 45
35 0 45
35 81 45
35 40 0
35 40 91
Strong
-2 40 45
35 -1 45
35 40 -2
-2 -1 45
-2 40 -1
35 -1 -1
-2 -2 -2*/
