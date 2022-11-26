 //Point-of-Sale System

#include<stdio.h>

void main(void) {
 int code, qty;
 float price, amt , vat ,totalAmt , cash , change;
 char addAnother;
 // do while loop ->post-test
 // while  loop   ->pre-test
 // for loop      ->pre-test

 do{
    system("cls");
 printf("================\n");
 printf("SHOP ITEMS LIST\n");
 printf("================\n\n");
 printf("[1] Sugar 1 kg\t\t Sh. 160.00\n");
 printf("[2] Cooking oil 1 lit-re\t\t Sh. 240.00\n");
 printf("[3] Maize flour 1 kg\t\t Sh. 100.00\n");
 printf("[4] Baking flour 1 kg\t\t Sh. 110.00\n");
 printf("[5] Rice 1 kg\t\t Sh. 150.00\n");

 printf("\nEnter Code: ");
 scanf("%d",&code);
 printf("\nEnter Quantity: ");
 scanf("%d", &qty);

 switch(code) {
     case 1: price = 160.00;
          break;
     case 2: price = 240.00;
          break;
     case 3: price = 100.00;
          break;
     case 4: price = 110.00;
          break;
     case 5: price = 150.00;
          break;
 }
  amt = price * qty;

  printf("\nAmount\t\t: %.2f", amt);

  printf("\nAdd another order(y/n)? ");
  addAnother =getch();
 }while(addAnother == 'y' || addAnother == 'Y');

  printf("enter the price with shilling symbol:");
   scanf("%f",&price);
   vat=(price + (amt * 0.16));
   printf("amount after adding tax= %f", vat);

  totalAmt= totalAmt + amt + vat;
  printf("\nTotal Amount\t: %.2f", totalAmt);

  do {
    printf("\nCash Tendered\t: ");
    scanf("%f", &cash);
    }while(cash < totalAmt);


  change = cash - totalAmt;
  printf("\nChange\t\t: %2f.", change);
  printf("\n Thanks for shopping with us!");
 }

