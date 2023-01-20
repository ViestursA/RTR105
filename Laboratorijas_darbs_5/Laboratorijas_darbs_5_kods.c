#include <stdio.h>

// simbolu šķirošana
void bubble_sort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//modas aprēķins
char mode(char arr[], int n) {
    int i;
    int max_count = 0;
    char mode = arr[0];
    int counts[256] = {0};
    for (i = 0; i < n; i++) {
        counts[(int)arr[i]]++;
        if (counts[(int)arr[i]] > max_count) {
            max_count = counts[(int)arr[i]];
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int n, i;
   // dialogs ar lietotāju simbola rindas iegūšanai
    printf("Ievadiet simbolu rindu: ");
    char arr[101];
    scanf("%s", arr);
    n = strlen(arr);

    bubble_sort(arr, n);

    char min = arr[0];
    char max = arr[0];
    double total = 0;
    int counts[256] = {0};
    for (i = 0; i < n; i++) {
        total += (int)arr[i];
        counts[(int)arr[i]]++;
       // maksimālā vērtība
        if (arr[i] > max) {
            max = arr[i];
        }
       // minimālā vērtība
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // sakārtotie simboli vienā rindā
    printf("Pēc kārtas sakārtotie simboli: ");
    for (i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    // simbolu rinda saskaņā ar ASCII skaitļiem
    printf("Simbolu rinda pēc ASCII sistēmas skaitļiem: ");
    for (i = 0; i < n; i++) {
        printf("%d ", (int)arr[i]);
    }
    printf("\n");
    printf("Minimālā vērtība: %d\n", min);
    printf("Maksimālā vērtība: %d\n", max);

    // mediāna
    if (n % 2 == 0) {
         printf("Mediānas vērtība: %lf\n", (arr[n/2] + arr[n/2-1]) / 2.0);
      } else {
        printf("Mediānas vērtība: %c\n", arr[n/2]);
    }

    printf("Modas vērtība: %c\n", mode(arr, n));
  }
