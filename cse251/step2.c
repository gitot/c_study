#include <stdio.h>
#include <math.h>

/**
 * I'm guyot.
 * This is my first C program!
 */
int main(){
        double radius = 7.88;
	double height = 12.231;
	printf("The cylinder has a radius of %f and a height of %f\n",radius,height);
       	printf("The cylinder has a radius of %5.2f and a height of %8.1f\n",radius,height);



	int wins = 11;
	int losses = 2;
	printf("MSU had an %d season in 2010\n",wins - losses);



	double volume, diameter, hypot;
        int games;
	volume = radius * radius * M_PI * height;

}
