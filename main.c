
#include <stdio.h>

int main(void)
{
    int input;
    int is_ok;

    scanf("%d", &input);
// 0以上10未満ならOK
    is_ok = (input >= 0 && input < 10)
         || (input >= 12 && input < 15);
// 12以上15未満もOK、それ以外はNG
    if (is_ok)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}

