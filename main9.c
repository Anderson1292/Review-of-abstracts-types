#include <stdio.h>
#include <stdlib.h>
#define SEMALUNO -1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct student{
	char name[81];
	float ira;
}Student;

void initialize(int n, Student *student){
	int i;
	for(i = 0;i < n;i++){
		student[i].ira = SEMALUNO;
	}
}
void printOut(int n, Student *student, int i){
	if(n < 0 || n >= 100){
		printf("Index out of bound!\n");
		exit(1);
	}
	if(student[i].ira != SEMALUNO){
		printf("Name: %s",student[i].name);
		printf("IRA: %.2f\n",student[i].ira);
	}
}
void printAll(int n, Student *student){
	int i;
	printf("List of students:\n");
	for(i = 0;i < n;i++){
		printOut(n,student,i);
	}
}
void update(int n,Student *student, int i){
	float ira;
	if(n < 0||n >= 100){
		printf("Index out of bound!\n");
		exit(1);
	}
	printf("Enter the student's name: ");
	scanf("%[^\n]",student[i].name);
	
	while(1){
		printf("Enter the IRA's student: ");
		scanf("%f",&ira);
		if(ira < 0 || ira > 100){
			printf("The IRA belongs to the range [0.0 to 100.0]\n");
		}
		else break;
	}
	student[i].ira = ira;
}
int main(int argc, char *argv[]) {
	int i, n;
	Student* student;
	printf("Enter the number of students:");
	scanf("%d",&n);
	
	student = (Student*)malloc(n*sizeof(Student));
	if(student == NULL){
		printf("Insufficient memory!\n");
		exit(1);
	}
	initialize(n,student);
	for(i = 0;i < n;i++){
		update(n,student,i);
	}
	printAll(n,student);
	free(student);
	return 0;
}
