#include<stdio.h>
#include<conio.h>

float po(float x);

int main(){
float f[2],x1,xi,xn;
printf("\n Enter The Starting Point : ");
scanf("%f",x1);




f[0]=x1*x1*x1-3;
f[1]=3*x1*x1;//differntiation



if(f[1]<1)
{

    while(1){
xn=x1-(f[0]/f[1]);

float ans=xn-x1;
ans=po(ans);
if(ans<0.0001){
printf("\n Hence The Root Is : %f ",xn);
break;
}
    }



}
else{


    printf("\n Enter Valid Initial Point >> ");
    return 0;
}




    return 0;
}










float po(float x){
if(x<0){

x=x*(-1);
return x;

}
else{
return x;

}
}