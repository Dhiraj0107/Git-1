#include <stdio.h>
#include <math.h>
#define PI (3.141592653589793)

int main(void) {

int i,N=12;
float b_radians,area,radian_1;
//formula for degree to radians is given by (PI*60)/180,
//  hence directly taking PI/3.0
b_radians=(PI)/3.0;
//printf("%f",b_radians);
area=tan(0.0)+tan(b_radians);
for (i=5; i<60; i=i+5){
    area=area+2*tan((PI*i)/180.0); 
     }
radian_1=(PI*((60.0)/(2*N)))/180.0;
area=radian_1*area;
printf("Approximate value=%f\n Exact value=%f",area,log(2.0));
}
