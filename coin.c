#include <stdio.h>

int main(void) {
    int n, k, i, cnt = 0;
    int coin[10] = {0, };
    
    scanf("%d %d", &n, &k);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }
    
    for(i = n - 1; i >= 0; i--) {
        if(k >= coin[i]) {
            cnt += k / coin[i];
            k %= coin[i];
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
