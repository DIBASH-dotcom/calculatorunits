#include<stdio.h>

int main() {
	int units,rate,TotalBill;
	float discount=0;
	
	printf("Enter units:\n");
	scanf("%d",&units);
	
	if(units>=0 && units<=100){
		rate = 5;
	}
	else if(units>=101 && units<=200){
		rate =7;
	}
	else {
		rate=10;
	}
		TotalBill=rate*units;
		if(TotalBill>1000){
			discount=0.10*TotalBill;
		} else {
			discount=0;
		}
	printf("Discount: %.2f\n", discount);
    printf("Total Payable: %.2f\n", TotalBill - discount);

}
