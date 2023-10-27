#include <stdio.h>

int main(void) {
    int n, lost, reserve, i, j, cnt = 0;
    int arr[30] = {0, };
    
    scanf("%d %d %d", &n, &lost, &reserve);
    
    for(i = 0; i < n; i++) {
        arr[i] = 1;
    }
    
    for(i = 0; i < lost; i++) {
        scanf("%d", &j);
        arr[j - 1]--;
    }
    
    for(i = 0; i < reserve; i++) {
        scanf("%d", &j);
        arr[j - 1]++;
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] == 0) {
            if(arr[i - 1] == 2) {
                arr[i - 1]--;
                arr[i]++;
            } else if(arr[i + 1] == 2) {
                arr[i + 1]--;
                arr[i]++;
            }
        }
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}