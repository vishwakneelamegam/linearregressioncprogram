#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
float b1,b0;
//xcat and ycat for x-xmean and y-ymean xcat2 for squaring
float x[100],y[100],x1=0,y1=0,x3=0,py=0,px;
float xmean,ymean,xcat[100],ycat[100],xcat2[100],mul[100],mul2=0;
clrscr();
printf("\nenter the value of n to assign spaces : ");
scanf("%d",&n);
printf("\nplease give some datas to learn " );
for(i=0;i<=n-1;i++){
printf("\nenter the value   x : ");
scanf("%f",&x[i]);
printf("\nenter the value   y : ");
scanf("%f",&y[i]);
}
for(i=0;i<=n;i++){
x1=x1+x[i];
y1=y1+y[i];
}
xmean=x1/n;
ymean=y1/n;
//finding mean of x and y
//printf("\nthe mean of x : %f",xmean);
//printf("\tthe mean of y : %f",ymean);
for(i=0;i<=n-1;i++){
xcat[i]=x[i]-xmean;
ycat[i]=y[i]-ymean;
}
for(i=0;i<=n-1;i++){
//printf("\n%f",xcat[i]);
//printf("\t%f",ycat[i]);
}
for(i=0;i<=n-1;i++){
xcat2[i]=xcat[i]*xcat[i];
//printf("\t%f",xcat2[i]);
}
for(i=0;i<=n-1;i++){
x3=x3+xcat2[i];
}
//printf("\nadded : %f",x3);
for(i=0;i<=n-1;i++){
mul[i]=xcat[i]*ycat[i];
//printf("\nmul : %f",mul[i]);
mul2=mul2+mul[i];
}
//printf("\n%f",mul2);
b1=mul2/x3;
//printf("\nb1 value is : %f",b1);
b0=ymean-b1*xmean;
//printf("\nb0 value is : %f",b0);
printf("\nenter the value x to predict : ");
scanf("%f",&px);
py=b0+b1*px;
printf("\nthe equation is :y=%f+%f*x",b0,b1);
printf("\nthe predicted value is : %f",py);
getch();
}