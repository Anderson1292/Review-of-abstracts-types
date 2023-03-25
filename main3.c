#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point{
	float x;
	float y;
};
void printOut(struct point p){
	printf("Point(%.2f,%.2f):\n",p.x,p.y);
}
int main(int argc, char *argv[]) {
	struct point p;
	printf("Enter the coordinates of the points(x,y):\n");
	scanf("%f %f",&p.x,p.y);
	printOut(p);
	return 0;
}
