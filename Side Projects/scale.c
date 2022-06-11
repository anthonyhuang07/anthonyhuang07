#include <stdio.h>

int main() {
  int weight;
  int overload = 0; //overload counter

  printf("Hello, and welcome to the Scale!\nPlease enter your Weight (in lbs): ");
  scanf("%d", &weight);
  
  while (overload <= 3) {
    if (weight >= 1000) {
      printf("\nThe scale disintegrated because you are Wick. The worst thing in existence.\n");
      printf("You disappeared!\n");
      printf("\nWeight: %dlbs\nWeight Rating: Wick\n\n", weight);
      break;
    }
    if (weight >= 300) {
      printf("\nThe scale exploded and shards blast into your eyes!\n");
      printf("You died!\n");
      printf("\nWeight: %dlbs\nWeight Rating: Nikocado Avocado\n\n", weight);
      break;
    } else if (weight >= 200) {
        printf("\nWoah there buddy! I suggest you lose some weight.\n");
        printf("\nWeight: %dlbs\nWeight Rating: Overweight\n\n", weight);
        break;
    } else if (weight >= 110) {
        printf("\nWow, you're surprisingly healthy!\n");
        printf("\nWeight: %dlbs\nWeight Rating: Normal\n\n", weight);
        break;
    } else if (weight >= 60) {
        printf("\nOoh, better gain some weight man!\n");
        printf("\nWeight: %dlbs\nWeight Rating: Underweight\n\n", weight);
        break;
    } else if (weight >= 8) {
        printf("\nSorry, but this program is not for children.\n");
        printf("\nWeight: %dlbs\nWeight Rating: Child\n\n", weight);
        break;
    } else if (weight >= 1) {
        printf("\nAre you even human?\n");
        printf("\nWeight: %dlbs\nWeight Rating: Non-Human\n\n", weight);
        break;
    } else { 
        printf("\nSorry, the weight you entered is invalid.\n\n");
        overload++; //increases overload by 1
        printf("Please enter your Weight (in lbs): ");
        scanf("%d", &weight);
    }

    if (overload == 3) { //after 4 attempts, the program will stop working :troll:
      printf("\nThe scale's puny CPU overloaded from all those attempts and exploded!\n");
      printf("You died!\n");
      printf("\nWeight: ???lbs\nWeight Rating: Invalid\n\n");
      break;
    }
  }
  
  printf("Press the Enter Key to Close...");
  
  //closes if enter key pressed
  getchar();
  if (getchar() == '\n') {
    printf("Closed.");
  }
}