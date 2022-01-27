#include<stdio.h>
main()
{
float a,b,c,d;
printf(" enter time in hours : ");
scanf("%f",&a);
printf(" enter distance in kilometres : ");
scanf("%f",&b);
printf(" enter the area in square meters : ");
scanf("%f",&c);
printf(" enter the volume in cubic metres: ");
scanf("%f",&d);	
printf("time %.2f hours      = %.2f minutes\n",a,(a*60));
printf("time %.2f hours      = %.2f seconds\n",a,(a*60*60));
printf("distance %.2f kilometres = %.2f metres\n",b,(b*1000));
printf("distance %.2f kilometres = %.2f centimetres\n",b,(b*1000*100));
printf("area %.2f m^2        = %.2f cm^2\n",c,(c*100*100));
printf("area %.2f m^2        = %.2f mm^2\n",c,(c*100*100*10*10));
printf("volume %.2f m^3        = %.2f cm^3\n",d,(d*100*100*100));
printf("volume %.2f m^3        = %.2f mm^3",d,(d*100*100*100*10*10*10));
}

