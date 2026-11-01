#include <stdio.h>

int main() {
    int r;
    printf("请输入圆的半径: ");
    scanf("%d", &r);

    // 纵向遍历行 (y)
    for (int y = 0; y <= 2 * r; y++) {
        // 横向遍历列 (x)，范围要乘以 2，即 4*r
        for (int x = 0; x <= 4 * r; x++) {
            
            // 【核心修改】：把横向的 x 除以 2.0，再计算距离
            // 这样相当于把横向拉长了两倍，来补偿字符的高度
            float dx = (float)x / 2.0 - r; 
            float dy = (float)y - r;
            
            // 判断点 (dx, dy) 是否在圆内
            if (dx * dx + dy * dy <= r * r) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

