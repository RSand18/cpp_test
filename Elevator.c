#include <stdio.h>
#include <stdlib.h>
#define NUMFLOORS	15		//How many floors there are in the building


int floorrange[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }; // The array of floors the elevator can access
int currentfloor;	//The floor the player is currently on
char playeranswer;
char flooryorn[] = "Would you like to go to a floor?%nPlease type 'y' for yes or 'n' for no.";	//Asks the player if they would like to move floors
/*
int movefloors(int x, int y)	//The minimum floor the elevator can hit
{

	if (x < y)				//If the end floor (x) is less than the minimum floor (y)...
	{
		return (y);			// The minimum floor is displayed
	}	
	else
	{
		return (x);			// Otherwise the current floor is displayed
	}
}
*/
/*
for (int i; i <= currentfloor; i++)
{

}
*/

int main()
{
	printf("What floor would you like to go to? The current floor is %d, and the max floor is 15.", currentfloor);
}