#include <iostream>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        int A, B;
        scanf("%d %d", &A, &B);
        
        printf("%d\n", A + B);
    }
}