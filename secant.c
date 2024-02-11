#include<stdio.h>
#include<math.h>

double cubic(double x,int a, int b, int c, int d);
// double quaratic(double x, int a, int b, int c);
double po(double x);
int main(){
int a,b,c,d,i=0;
printf("Enter Coefficient of Cubic Polynomial (ax^3 + bx^2 + cx + d ) : ");
scanf("%d%d%d%d",&a,&b,&c,&d);
double f[2],x1,x2,ep=0.0,diff=0.0,xn,comp,p;
printf("\nEnter Intial Points : ");
scanf("%lf%lf",&x1,&x2);


printf("\n Enter Accuaracy : ");
scanf("%lf",&ep);
//logic of bisection


while(1){

f[0]=cubic(x1,a,b,c,d);
f[1]=cubic(x2,a,b,c,d);


if(f[0]*f[1]<0){
    p=(x2-x1)/(f[1]-f[0]);
  
xn=x1-(p*f[0]);
x1=x2;
x2=xn;






// comp=po(x2-x1);
// comp=f[1]-po(f[0]);
// comp=po(comp);

comp=po(x2-x1);
// comp=po(x2-x1);



if(comp<ep){

    printf("\nHence The Root Is At X%d At the Iteration %d : X%d = %lf ",i,i,i,xn);
    break;

}
printf("\n X%d : %lf ",i,xn);
i++;

}





else{
diff=x2-x1;
x1=x2;
x2=x2+diff;


}


}





    return 0;
}


double cubic(double x,int a, int b, int c, int d){



return (a*x*x*x+b*x*x+c*x+d);


}

double po(double x){

if(x<0){

x=x*(-1);
return x;

}
else{
return x;

}
}


