 //3)	The goal in this problem is to sum all the digits in a number. Each digit must be "weighted" by its relative position in the number. The number is read from the keyboard, 
 //and the result is displayed.
 #import<stdio.h>
 int main(){
 	int numb;
 	int finsum=0;
 	char instring[20];
 	printf("please input the number ");
 	scanf("%d",&numb);
 	sprintf(instring,"%d",numb);
 	int counter=0;
	while(instring[counter]!='\0'){
	int tempnumb = instring[counter] - '0';
	finsum = finsum + (tempnumb*(counter+1)); 
	counter= counter + 1;
	}
	printf("weighted sum is %d",finsum);
	return(0);
 }
