#include <stdio.h>
int main()
{
	int units,custnum;
	float charges;
	printf("Enter CUSTOMER NO. and UNITS consumed\n");
	scanf("%d,%d",&custnum,&units);
	if(units<=200)                                /*�������������200*/ 
	    charges=0.5*units;                        
	else if(units<=400)                           /*�������������200*/
	        charges=100+0.65* (units-200);        
	    else if(units<=600)                       /*�������������200*/
	           charges=230+0.8*(units-400);
	           else                               /*����*/ 
	                charges=390+(units-600);
	printf("\nCustomer No: %d: Charges=%.2f\n",custnum,charges);
	return 0;
}
