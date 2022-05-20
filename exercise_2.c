#include<stdio.h>
int main()
{
	
	double km,meter,feet,inches,centimeter;
	printf("Enter the distance from mirpur to Ashulia:");
	scanf("%lf",&km);
	meter=km*1000; ///1km=1000meters
	feet=km*3280.8399; ///1km=3280.8399feets
	inches=km*39370.078;///1km=39370.078inches
	centimeter=km*100000;///1km=100000cm
	
	
	printf("Distance in meter from Mirpur to Ashulia=%.2lf\n",meter);
	printf("Distance in feet from Mirpur to Ashulia=%.2lf\n ",feet);
	printf("Distance in inches from Mirpur to Ashulia=%.2lf\n",inches);
	printf("Distance in centimeter from Mirpur to Ashulia=%.2lf",centimeter);
	return 0;
	
}
