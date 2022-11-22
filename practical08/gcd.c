// Iterative and Recursive versions for Euclid's algorithm.

#include<stdio.h>
#include<stdlib.h>
int iterative(int a, int b);
int recursive(int a, int b);

int main(){
	
	int a, b, ierror;

	/*printf("Please enter two positive integers:\n");
	ierror = scanf("%d %d", &a, &b);
	if(ierror != 2){
		printf("Please enter two integers\n");
		return 1;
	}
	
	if(a<=0 || b<=0){
		printf("These numbers are not positive!\n");
		return 1;
	}*/
	
	//Generate two positive integers between 1 and 12
	srand(time(NULL));
	a=(rand()%12)+1;
	b=(rand()%12)+1;

	
	//Call the functions
	printf("Iterative(%d,%d)=%d\n", a, b, iterative(a,b));
	printf("Recursive(%d,%d)=%d\n", a, b, recursive(a, b));

	return 0;
}

int iterative(int a, int b){

	int temp;
	while(b != 0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int recursive(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return(recursive(b,a%b));
	}
}



