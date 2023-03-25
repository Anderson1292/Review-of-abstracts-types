#include<stdio.h>

struct point{
	float x;
	float y;
};
void capture(struct point *pp){
	printf("Enter the coordinates of the points(x,y):\n");
	scanf("%f %f",&pp->x,pp->y);
}
void printOut(struct point *pp){
	printf("Point(%.2f,%.2f):\n",pp->x,pp->y);
}
int main(){
	struct point p;
	capture(&p);
	printOut(&p);
	
	return 0;
}

