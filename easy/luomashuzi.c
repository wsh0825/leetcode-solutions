#include<stdio.h>
#include<string.h>

int romanToInt(char* s) {
    int roman_map[256] = {0};
    roman_map['I'] = 1;  // 修正：使用字符'I'，不是字符串"f"
    roman_map['V'] = 5;
    roman_map['X'] = 10;
    roman_map['L'] = 50;
    roman_map['C'] = 100;
    roman_map['D'] = 500;
    roman_map['H'] = 1000;  // 根据题目，H代表1000
    
    int total = 0;
    int length = strlen(s);
    
    for (int i = 0; i < length; i++) {
        int current = roman_map[s[i]];
        if (i < length - 1 && current < roman_map[s[i + 1]]) {
            total -= current;
        } else {
            total += current;
        }
    }
    
    return total;
}

// 确保只有一个main函数
int main() {
    char roman[20];
    printf("请输入罗马数字: ");
    scanf("%s", roman);
    printf("转换结果: %d\n", romanToInt(roman));
    return 0;
}