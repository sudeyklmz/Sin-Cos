#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,j;
	double sine,cosine,intervals,intervalc,values,valuec;
printf("sin table \n");
	for(i=0;i<17;i++)
	{
     intervals = i/10.0;
     sine=sin(intervals);
   
     printf("%d:",i+1);
     printf("sin(%lf) = %lf \n", intervals,sine );
     
	}
	
	printf(" \n cos table \n\n");
	
		for(j=0;j<16;j++)
	{
     intervalc = j/10.0;
     cosine=cos(intervalc);
    
     printf("%d:",j+1);
     printf("cos(%lf) = %lf \n", intervalc,cosine );
     
	}
	return 0;
}
