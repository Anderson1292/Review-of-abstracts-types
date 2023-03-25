#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point{
	float x;
	float y;
};
int main(int argc, char *argv[]) {
	
	struct point Point;
	Point.x = 10;
	Point.y = 3;
	
	printf("Points(x,y) = %.2f,%.2f\n",Point.x,Point.y);
	return 0;
}
