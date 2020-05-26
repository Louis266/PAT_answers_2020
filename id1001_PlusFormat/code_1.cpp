#include <iostream>

void print_num(int num)
{
    int minus = 0;
    if (num < 0)
    {
        minus = 1;
        num = 0 - num;
    }
    char res[10];
    int digit = 0;
    int pos = 1;
    for (int i = num; i != 0; i = i / 10)
    {
        int r = (i % 10);
        sprintf(res, "%d", r);
        if (pos % 3 == 0 && i /10 != 0)
        {
            sprintf(res,",");
        }
        pos++;
        digit++;
    }

    if (minus == 1)
    {
        sprintf(res,",");
        digit++;
    }

    for (int i = digit -1; i >= 0; i--)
    {
        printf("%c", res[i]);
    }
    
    printf("\n");
}
int main()
{
    int a, b;
    
    scanf("%d, %d", &a, &b);

    int res = a + b;

    if (res == 0)
    {
        printf("0");
    }

    //cout << res << endl;

    print_num(res);
}