 #import<stdio.h>
 //Ethan Garcia
 //given a integer, find if it is a prime number. Print out its factors.
 int main(){
 	int numb;
 	printf("please input the number: ");
 	scanf("%d", &numb);
 	int counter = 1;
 	int factor = 0;
 	while(counter<numb){
 		if (numb%counter==0){
 			if(counter>numb/counter){
 				break;
			 }
 			printf("%d\n",counter);
 			printf("%d\n",numb/counter);
 			factor = factor +1;
		 }
		 counter = counter+1;
	 }
	 if(factor == 1){
	 	printf("%d is prime",numb);
	 }
	 else{
	 	printf("%d is NOT prime",numb);
	 }
	 return(0);
 }
