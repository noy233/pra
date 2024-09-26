#include <stdio.h>
#include <unistd.h> // for usleep

int main() {
    
    float x, y, a; // 定义变量x, y, a
    
    for (y = 1.5f; y > -1; y -= 0.1f) {
        for (x = -1.5f; x < 1.5f; x += 0.05f) {
            a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y < 0.0f ? 'x' : ' ');
        }
        
        usleep(1500); // 延迟1.5秒 (1500000微秒)
        putchar('\n'); // 换行
    }

    return 0;
}
