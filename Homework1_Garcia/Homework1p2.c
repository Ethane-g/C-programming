 #import<stdio.h>
 //Ethan Garcia
 //given a binary number of 2 bytes, find the amount of 1s and 0s
 int main(){
 	char input[32];
 	printf("please give the binary number: \n");
 	gets(input);
 	int i;
 	int total1 = 0;
 	int total0 = 0;
 	for(i=0;i<32;i=i+1){
 		if(input[i]=='1'){
 			total1 = total1+1;
		 }
		if(input[i]=='0'){
 			total0 = total0+1;
		 }
	 }
	 printf("number of 1 bits: %d\n",total1);
	 printf("number of 0 bits: %d\n",total0);
	 return 0;
 }
