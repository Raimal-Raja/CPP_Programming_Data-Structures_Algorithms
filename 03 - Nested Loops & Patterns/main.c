#include <stdio.h>

// int main() {
//     int arr[5];

//     // Input loop
//     for (int i = 0; i < 5; i++) {
//         printf("Enter value of array element %d: ", i + 1);
//         scanf("%d", arr + i);
//     }

//     // Output loop
//     printf("Array elements: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     printf("\n"); // Newline for better formatting
//     return 0;
// }

__attribute__((constructor))
void x(){
    printf("Execute first! ");
}

int main(){
    printf("\nExecute secondly! ");
}
