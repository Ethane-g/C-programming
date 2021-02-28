 #import<stdio.h>
 //Ethan Garcia
 //Given a binary number of 2 bytes, find the amount of leading zeros
 int main(){
 	char input[32];
 	printf("please give the binary number: \n");
 	gets(input);
 	int i;
	int leading = 0;
	for(i=0;i<32;i=i+1){
		if(input[i]=='0'){
			leading = leading + 1;
		}
		else if(input[i]=='1'){
			break;
		}
	}
	printf("the amount of leading zeros is %d", leading);
	return(0);
}
