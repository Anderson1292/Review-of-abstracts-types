#include<stdio.h>
#include<stdlib.h>

struct point{
	float x;
	float y;
};

int main(void){
	struct point p;
	
	printf("Enter the coordinates of the points(x,y):\n");
	scanf("%f %f",&p.x,&p.y);
	
	printf("Point(%.2f,%.2f):\n",p.x,p.y);
	
	return 0;
	
}
