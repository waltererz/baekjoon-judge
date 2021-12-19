#include <stdio.h>

// 유튜브에서 소개한 콜라츠 정리
// https://www.youtube.com/watch?v=xvrpNlVbBcg
int main(void)
{
    // 자연수 1부터 콜라츠 정리 시작
    int n = 1, c;

    c = n;

    while (1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n * 3) + 1;
        }

        if (n == 1)
        {
            printf("[%d] Complete!\n\n", c);
            c++;
            n = c;
        }
    }

    return 0;
}