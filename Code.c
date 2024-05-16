#include<reg51.h>
void check();
unsigned char tag1[12]={"14A236789B32"}; //employee1 id
unsigned char emp1[]={"PRIME MINISTER"}; //employee1 name
unsigned char tag2[12]={"14A23619FR32"}; //employee2 id
unsigned char emp2[]={"PRESIDENT OF INDIA"}; //employee2 name
unsigned char tag3[12]={"324BFG436598"}; //employee3 id
unsigned char emp3[]={"VICE PRESIDENT"}; //employee3 name
unsigned char a[12];
unsigned char x;
void main()
{
SCON=0X50;
TMOD=0X20;
TH1=-3;
TR1=1;
while(1)
{
for(x=0;x<12;x++)
{
while(RI==0);
a[x]==SBUF;
SBUF=a[x];
while(TI==0);
RI=0;
TI==0;
}
check();
}
}
void check()
{
if(a[0]=='1'&a[1]=='4'&a[2]=='A'&a[3]=='2'&a[4]=='3'&a[5]=='6'
&a[6]=='7'&a[7]=='9'&a[8]=='9'&a[9]=='B'&a[10]=='3'&a[11]=='2'
)
{
for(x=0;x<14;x++)
{
SBUF=emp1[x];
while(TI==0);
TI=0;
}
}
if(a[0]=='1'&a[1]=='4'&a[2]=='A'&a[3]=='2'&a[4]=='3'&a[5]=='6'
&a[6]=='1'&a[7]=='9'&a[8]=='F'&a[9]=='R'&a[10]=='3'&a[11]=='1'
)
{
for(x=0;x<18;x++)
{
SBUF=emp2[x];
while(TI==0);
TI=0;
}
}
if(a[0]=='3'&a[1]=='2'&a[2]=='4'&a[3]=='B'&a[4]=='F'&a[5]=='G'
&a[6]=='4'&a[7]=='3'&a[8]=='6'&a[9]=='5'&a[10]=='9'&a[11]=='8'
)
{
for(x=0;x<14;x++)
{
SBUF=emp3[x];
while(TI==0);
TI=0;
}
}

// Taking employee id as input and providing
employee name as output

14A236789B32 PRIME MINISTER
324BFG436598 VICE PRESIDENT
