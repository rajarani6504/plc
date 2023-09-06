1:
#include <stdio.h>
int main()
{
float m,h,v,p,k,e;//Variable declaration
printf("Enter Mass of the body\n");
scanf("%f",&m );
printf("Enter displacement of the body\n");
scanf("%f",&h );
printf("Enter velocity of the body\n");
scanf("%f",&v );
p=m*9.8*h; //Calculation of Potential energy, g=9.8
k=0.5*m*(v*v); // Calculation of Kinetic energy
e=p+k;//Total energy
printf("Potential energy of the body = %f\n",p );
printf("Kinetic energy of the body = %f\n",k );
printf("Mechanical energy of a body = %f\n" , e);
}
-------------------------------------------------------------------------------------------------------------------
  2:
  #include <stdio.h>
int main()
{
float centimeter, meter, kilometer; //Variable Declaration
printf("\n Please Enter the Length in Kilometers (km) : ");
scanf("%f", &kilometer);
meter = kilometer * 1000.0; //Converting kilometers to meters
centimeter = kilometer * 100000.0; //Converting kilometers to centimeters
printf("\n %.2f Kilometers = %.2f Meters", kilometer, meter);
printf("\n %.2f Kilometers = %.2f Centimeters", kilometer, centimeter);
}
---------------------------------------------------------------------------------------------------------------------
  3:
  #include<stdio.h>
int main()
{
char ch;
printf("Enter any character: ");
scanf("%c", &ch);
//Check for cases
if(ch >= 'A' && ch <= 'Z')
{
printf("'%c' is uppercase alphabet.", ch);
}
else if(ch >= 'a' && ch <= 'z')
{
printf("'%c' is lowercase alphabet.", ch);
}
else if(ch>='0' && ch<='9')
{
printf("'%c' is a number", ch);
}
else
{
printf("'%c' is a special character", ch);
}
return 0;
}
------------------------------------------------------------------------------------------------------------------------
  4:
  #include <stdio.h>
int gcd(int a, int b);
void balance(int x, int y, int p, int q);
main()
{
int x = 2, y = 3, p = 4, q = 5;
balance(x, y, p, q);
}
gcd(int a, int b)    {
if (b == 0)
return a;
return gcd(b, a % b);
}
balance(int x, int y, int p, int q)    {
int b1, b2, b3, temp; // Variable declarationif (p % 
x == 0 && q % y == 0)
{
b1 = p / x;b2 = q / 
y;b3 = 1;
}
Else    {
p = p * y; q = q * 
x; b3 = x * y;
temp = gcd(p, gcd(q, b3)); // temp variable to store gcdb1 = p / 
temp;
b2 = q / temp;
b3 = b3 / temp;
}
printf("\n%d\t%d\t%d",b1,b2,b3);
-----------------------------------------------------------------------------------------------------------
  5:
  #include<stdio.h>
#include<stdlib.h>
int main()
{
int a[30][30],b[30][30],c[30][30],m,n,p,q,i,j,k;
printf("\nEnter the order of first matrix:\n");
scanf("%d%d", &m,&n);
printf("\nEnter the order of 2nd matrix:\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("\nMatrix multiplication is not possible\n");
printf("\nThe number of columns in the 1st matrix must be equal to number of
rows in the 2nd\n");
exit(0);
}     printf("\nEnter %d*%d elements for first matrix:\n", m,n);
for (i = 0; i < m; i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &a[i][j]);
}
}
printf("\nEnter %d*%d elements for second matrix:\n", p,q);
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d", &b[i][j]);
}
}
for (i = 0; i <m ; i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("\nThe first matrix is:\n");
for (i = 0; i < m; i++)
{
for(j=0;j<n;j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\nThe second matrix is:\n");
for (i = 0; i < p; i++)
{
printf("\n");
for(j=0;j<q;j++)
{
printf("%d\t", b[i][j]);
}
}
printf("\nThe product of two matrices is:\n");
for (i=0;i<m;i++)
{
printf("\n");
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
}
}
--------------------------------------------------------------------------------------------------------------
  6:
  #include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
int n, x1;
float accuracy, term, denominator, x, sinx, sinval;
printf("Enter the value of x (in degrees) \n");
scanf("%f", &x);
x1 = x;
x = x * (3.142 / 180.0);
sinval = sin(x); /* Computing sine of x using library function sin() */
printf("Enter the accuracy for the result \n");
scanf("%f", &accuracy);
term = x;
sinx = term;
n = 1;
do
{
denominator = 2 * n * (2 * n + 1);
term = -term * x * x / denominator;
sinx = sinx + term;
n = n + 1;
} while (accuracy <= fabs(sinval - sinx));
printf("Sum of the sine series = %f \n", sinx);
printf("Using Library function sin(%d) = %f\n", x1, sin(x));
}
-----------------------------------------------------------------------------------------------------------
  7:
  #include<stdio.h>
int main()    {
int i,j,n,t,a[100];
printf("\nEnter the number of elements:\n");
scanf("%d",&n);
printf("\nEnter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array before sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}    printf("\nThe array after sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
--------------------------------------------------------------------------------------------
  8:
  #include<stdio.h> 
#include<string.h> 
#include<conio.h> 
int string_compare(char s1[],char s2[]); 
int string_length(char s[]); 
void concat(char s1[], char s2[]); 
int main() 
{ 
char str[100], str1[100],str2[100],i=0,length,value; 
int choice; 
do 
{ 
//system("cls"); 
printf("\n Select the string function you want to use\n"); 
printf("\n1. String length\n2. String compare\n3. String concatenation\n4. 
Exit\n"); 
scanf("%d",&choice); 
fflush(stdin); 
switch(choice) 
{ 
case 1: printf("\nEnter the string for finding length\n"); 
 gets(str); 
 length=strlen(str);
 printf("\nThe length of the string is %d\n",length); 
 break;
 case 2: printf("\nEnter two strings to be compared\n"); 
 printf("\nEnter the first string"); 
 gets(str1); 
 fflush(stdin); 
 printf("\nEnter the second string"); 
 gets(str2); 
 value=strcmp(str1,str2); 
 if(value==0) 
 printf("\nstrings are equal\n"); 
 else if(value>1) 
 printf("\nFirst string is greater than the second\n"); 
 else 
 printf("\nFirst string is lesser than the second\n"); 
 break;
 case 3: printf("\nEnter two strings to be concatenated\n"); 
 printf("\nEnter the first string"); 
 gets(str1);
 fflush(stdin); 
 printf("\nEnter the second string"); 
 gets(str2); 
 strcat(str1,str2); 
 printf("\nThe concatenated string is: %s\n",str1); 
 break; 
default: printf("\nExiting...\n"); 
} 
} while(choice!=4); 
}------------------------------------------------------------------------------------------
  9:
#include<stdio.h>
struct student
{
char usn[10];
char name[10];
float m1,m2,m3;
float avg,total;
};
void main()
{
struct student s[20];
int n,i;
float class_avg=0, class_total;
printf("Enter the number of student=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the detail of %d students\n",i+1);
printf("\n Enter USN=");
scanf("%s",s[i].usn);
printf("\n Enter Name=");
scanf("%s",s[i].name);
printf("Enter the three subject score\n");
scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
s[i].total=s[i].m1+s[i].m2+s[i].m3;
s[i].avg=s[i].total/3;
class_total+=s[i].avg;
}
class_avg=class_total/n;
Introduction to C Programming (Lab Manual) 22PLC25E
21
NCET - CSE
printf("\nThe class average =%f",class_avg);
for(i=0;i<n;i++)
{
if(s[i].avg>=class_avg)
printf("\n
%s has scored above the average marks",s[i].name);
else
printf("\n %s has scored below the average
marks",s[i].name);
}
}
--------------------------------------------------------------------------------------
  10:
#include<stdio.h>
#include<math.h>
int main()
{
int n, i;
float x[20],sum,mean;
float variance, deviation;
printf("Enter the value of n \n");
scanf("%d",&n);
printf("enter %d real values \n",n);
for (i=0;i<n;i++)
{
scanf("%f",(x+i));
}
sum=0;
for(i=0;i<n;i++)
{
sum= sum+*(x+i);
}
printf("Sum=%f\n",sum);
mean=sum/n;
sum=0;
for(i=0;i<n;i++)
{
sum=sum+(*(x+i)-mean)*(*(x+i)-mean);
}
variance=sum/n;
deviation=sqrt(variance);
printf("Mean (Average)=%f\n",mean);
printf("Variance=%f\n",variance);
printf("Standard Deviation=%f\n",deviation);
}
----------------------------------------------------------------------------------------------
