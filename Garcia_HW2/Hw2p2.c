 //In this problem you will create a sequence a numbers. Each new number is calculated by subtracting the first digit from the current number. 
 //That process is repeated until the sequence reaches a specified ending number, i.e. it is less or equal than the specified ending number.
 // After calculating the sequence display how many numbers were generated in the sequence. 

 #import<stdio.h>
 int main(){
 	char hold[20];
 	int startnumb;
 	int endnumb;
 	printf("please specify the starting number and then the ending number\n");
	scanf("%d",&startnumb);
	scanf("%d",&endnumb);
	if(startnumb>endnumb){
		while(startnumb>endnumb){
			sprintf(hold,"%d",startnumb);
			int a = hold[0]-'0';
			startnumb = startnumb - a;
			printf("%d\n",startnumb);
		}
	}
	return(0);
 }
