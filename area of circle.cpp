// Name : Mazhar Hussain//
//Registration number: 20MDELE098//
#include<stdio.h>
int main()
{
	float circle_radius,circle_area,circle_circumference;
	float Pi_value=3.14;
	
	printf("enter radius of circle in meter:\n");//asking to enter radius of circle in meters
	scanf("%f",&circle_radius);//saving circle radius value
	
	circle_area= Pi_value * circle_radius * circle_radius;//calculating circle area
	
	printf("area of circle is: %f meter \n\n7",circle_area);//Displaying Area of circle
	
	circle_circumference=2 * Pi_value * circle_radius;//calculating circumference
	
	printf("cirumference of circle is: %f meter \n",circle_circumference);//displaying circumference of circle
	
	return 0;
}
