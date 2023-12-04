#include <stdio.h>

int main(){
    // Initialize variables
    int playTime;
    int billPerHour = 10000;
    double totalBill = playTime * billPerHour;
    double totalDiscount;
    printf("Enter the duration of playtime in hours: ");
    scanf("%d", &playTime);

    //conditions for total bill
    if(playTime <= 4){
        totalBill;
    }else if(playTime > 4 && playTime <= 6){
       double discount = 1 - 0.10;// karna discount 15% dan yang dicari costumer bayar berapa maka  1 - discount

         totalDiscount = playTime * billPerHour * discount;
    }else if(playTime > 6 && playTime <= 8){
        double discount = 1 - 0.15; // karna discount 15% dan yang dicari costumer bayar berapa maka  1 - discount

         totalDiscount = playTime * billPerHour * discount;

    }else if(playTime > 8  &&  playTime <= 9 ){
        double discount = 1- 0.20; // karna discount 15% dan yang dicari costumer bayar berapa maka  1 - discount
        totalDiscount = playTime * billPerHour * discount;
    }else if(playTime >9) {
         double discount = 1- 0.25;  // karna discount 15% dan yang dicari costumer bayar berapa maka  1 - discount

      totalDiscount = playTime * billPerHour * discount;


    } else {
        printf("Invalid playtime entered.\n");
        return 1; // Terminate the program due to invalid input
    }

    printf("The total amount to be paid: Rp %.2f\n", totalDiscount);
    return 0;

}