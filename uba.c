#include<stdio.h>
int main () {
   int regular, student, senior;
   int totalTickets;
   float subtotal, discount = 0,
 finalPayment;

 printf("Enter number of Regular tickets (P250): ");
 scanf("%d", &regular);

 printf("Enter number  of Student tickets (P200): ");
 scanf("%d", &student);

 printf("Enter number  of Senior Citizen tickets (P180): ");
 scanf("%d", &senior);

 totalTickets = regular + student + senior;

 subtotal = (regular * 250) +
            (student * 200) +
            (senior * 180);

 if (totalTickets >= 5) {
    discount = subtotal * 0.05;
 }           

 finalPayment = subtotal - discount;

 printf("\n=== PAYMENT SUMMARY ===\n");
 printf("Total Tickets: %d\n",totalTickets);
 printf("Subtotal: P%.2f\n",subtotal);
 printf("Promotional Discount: P%.2f\n", discount);
 printf("Final Payment: P%.2f\n", finalPayment);

 return 0;



}