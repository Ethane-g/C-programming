//Design a C program the reads an integer number that represents the change that a customer must receive. 
//The program finds the smallest number of bills that is used to pay the change. 
//Assume that you have a limited number of $1, $5, $10, and $20 bills. 
//The number of bills of each kind are inputs to the program 
#import<stdio.h>
int main(){
 	int one,five,ten,twen,change;
 	int howone=0,howfive=0,howten=0, howtwen=0;
 	printf("please give the amount of change a customer must recieve\n");
 	scanf("%d",&change);
 	printf("please give the number of single dollars\n");
 	scanf("%d",&one);
 	printf("please give the number of five dollars\n");
 	scanf("%d",&five);
 	printf("please give the number of ten dollars\n");
 	scanf("%d",&ten);
 	printf("please give the number of twenty dollars\n");
 	scanf("%d",&twen);
 	while(twen>0){
 		
 		if(change-20>=0){
 			change = change -20;
 			howtwen = howtwen +1;
 			twen = twen-1;
		}
		else{
			break;
		}
	}
	while(ten>0){
	
		if(change-10>=0){
			change = change - 10;
			howten = howten+1;
			ten = ten-1;
		}
		else{
			break;
		}
	}
	while(five>0){
		
		if(change-5>=0){
			change = change - 5;
			howfive = howfive+1;
			five = five-1;
		}
		else{
			break;
		}
	}
	while(one>0){
	
		if(change-1>=0){
			change = change - 1;
			howone = howone+1;
			one = one -1;
		}
		else{
			break;
		}
	}
	if(change>0){
		printf("exact change cannot be made, the remainder is %d\n",change);
		printf("Currency used: one:%d , five:%d , ten:%d , twenty:%d ",howone,howfive,howten,howtwen);
	}else{
		printf("Currency used: one:%d , five:%d , ten:%d , twenty:%d ",howone,howfive,howten,howtwen);
	}
	return(0);
}
