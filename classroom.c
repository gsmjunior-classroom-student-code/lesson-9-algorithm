#include <stdio.h>

int main(void) {
    int n, i, j, cnt = 0;
    int start[100000] = {0, };
    int end[100000] = {0, };
    int tmp;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &start[i], &end[i]);
    }
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(end[i] > end[j]) {
                tmp = end[i];
                end[i] = end[j];
                end[j] = tmp;
                
                tmp = start[i];
                start[i] = start[j];
                start[j] = tmp;
            }
        }
    }
    
    tmp = 0;
    for(i = 0; i < n; i++) {
        if(tmp <= start[i]) {
            tmp = end[i];
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}