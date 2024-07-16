#include <stdio.h>

#include <string.h>

char num2[1000003];

char num8[333334];

void bin(char arr8[], char arr2[]) {

   

   int rem = 0, temp, count = 0, j;

   for (int i = strlen(arr8) - 1; i >= 0; --i) {

      temp = arr8[i] - '0';

      rem = 0;

      while (1) {

         rem++;

         arr2[count] = temp % 2 + '0';

         if (temp / 2 == 0) {

            break;

         }

         else {

            temp /= 2;

            count++;

         }

      }

      if (rem == 3) {

         count++;

      }

      else {

         for (j = count + 1; j < count + 4 - rem; ++j) {

            arr2[j] = '0';

         }

         count += 4 - rem;

      }

      

   }

}

int main() {

   int i;

   scanf("%s", num8);

   bin(num8, num2);

   if (strcmp(num2, "000") == 0) {

      printf("0");

   }

   else {

      i = strlen(num2) - 1;

      while (num2[i] == '0') {

         i--;

      }

      for (int j = i; j >= 0; j--) {

         printf("%c", num2[j]);

      }

   }

}