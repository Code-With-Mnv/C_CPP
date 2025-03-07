/*
    Author: Code_with_Manav
    Concept: Enum functions
    Task: WAP to print traffic control instructions using switch and enum. 
*/


#include <stdio.h>


enum TrafficLight {
	RED, YELLOW, GREEN
};

int main() 
{

	enum TrafficLight signal;

	signal = RED;

	printf("Red = %d, Yellow = %d, Green = %d\n\n", RED, YELLOW, GREEN);

	switch (signal) 
    {

		case RED:
			puts("Stop");
		break;

		case YELLOW:
			puts("Proceed with caution");
		break;

		case GREEN:
			puts("Go");
		break;

		default:
			puts("No color found");
	}

	return 0;
}