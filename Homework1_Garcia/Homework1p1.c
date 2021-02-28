#import<stdio.h>
//Ethan Garcia
//add numbers until pound is inputed
int main(){
	char pound[] = "#";
	char input[20];
	int total;
	gets(input);
	printf("\n");
	while(!(strcmp(input,pound)==0)){
		total = total + atoi(input);
		gets(input);
		printf("\n");
	}
	printf("the total is %d",total);
	return 0;
}
