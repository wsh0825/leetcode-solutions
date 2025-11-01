#include<stdio.h>
#include<stdbool.h>

int main(){
    int x, reversed = 0, original;
    
    printf("请输入一个数字: ");
    scanf("%d", &x);
    
    original = x;
    
    // 反转数字
    while(x > 0) {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }
    
    // 判断是否是回文数
    if(original == reversed) {
        printf("%d 是回文数\n", original);
    } else {
        printf("%d 不是回文数\n", original);
    }
    
    return 0;
}