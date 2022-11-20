#include<stdio.h>
#include<math.h>

int main(void){
    
    int N=12, i;
    float a=0.0, b_deg=60.0;
    float b_rad, area, mult_rad;
    
    //b_deg to radian 
    b_rad=(M_PI * b_deg)/180.0;
    printf("pi/3 in Radians = %f\n", b_rad);
                
    //Sum tan(a)+tan(b)
    area=tan(a)+tan(b_rad);
    //Calculate area at x1 to x11 by *2 and adding all
    for(i=5; i<60; i=i+5){
        area=area+2*tan((M_PI*i)/180.0);   
    }
                                             
    //Multipkying partial area by (pi/3)/(2*12)
    //Convert to radians first
    mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
    area=mult_rad*area;
                                                           
    printf("Aproximated=%f, Exact=%f\n",area, log(2.0));
                                                                     
    return 0;    
}
