#include <stdio.h>

int main(){
    // Initialize variables
    int playTime;
    float billPerHour = 10000.00;
    // float totalBill = playTime * billPerHour;
    float totalDiscount;
    printf("Enter the duration of playtime in hours: ");
    scanf("%d", &playTime);

    //conditions for total bill
    if (playTime <= 4)
    {
        totalDiscount = playTime * billPerHour;
    }
    
     else if(playTime > 4 && playTime <= 6){
       float discount = 1 - 0.10;// karna discount 10% dan yang dicari costumer bayar berapa maka  1 - discount

         totalDiscount = playTime * billPerHour* discount;
    }else if(playTime > 6 && playTime <= 8){
        float discount = 1 - 0.15; // karna discount 15% dan yang dicari costumer bayar berapa maka  1 - discount

         totalDiscount = playTime * billPerHour* discount;

    }else if(playTime > 8  &&  playTime <= 9 ){
        float discount = 1- 0.20; // karna discount 20% dan yang dicari costumer bayar berapa maka  1 - discount
        totalDiscount =  playTime * billPerHour* discount;
    }else if(playTime >9) {
         float discount = 1- 0.25;  // karna discount 25% dan yang dicari costumer bayar berapa maka  1 - discount

      totalDiscount = playTime * billPerHour* discount;


    } 

    printf("The total amount to be paid: Rp %.2f\n", totalDiscount);
    return 0;

}