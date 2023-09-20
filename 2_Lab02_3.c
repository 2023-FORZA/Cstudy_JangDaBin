#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[1000001], * str1;

int    main(void)
{
    int cmd_cnt1 = 0, cmd_cnt2 = 0;
    scanf("%s", str);
    str1 = strdup(str);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '0')
        {
            cmd_cnt1++;
            for (int j = i; str[j] && str[j] == '0'; j++)
                str[j] = '1';
        }
    }
    for (int i = 0; str1[i]; i++)
    {
        if (str1[i] == '1')
        {
            cmd_cnt2++;
            for (int j = i; str1[j] && str1[j] == '1'; j++)
                str1[j] = '0';
        }
    }
    printf("%d\n", cmd_cnt1 < cmd_cnt2 ? cmd_cnt1 : cmd_cnt2);
    free(str1);
}