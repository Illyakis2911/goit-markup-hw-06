/*task1a.
Напишіть функцію reversit(), яка виконує наступне:
- приймає в якості агрумента деякий рядок;
- здійснює його дзеркальне "перевертання".
Рядок попередньо вводиться з клавіатури (з можливістю читання пробілів).
*/
#include <stdio.h>
#include <string.h>

void reversit(char *str);

int mein()
{
    char str[100];
    printf("str=");
    gets(str);
    reversit(str);
    printf("New str: %s",str);
    return 0;
}
void reversit(char *str)
{
    int len,i;
    char tmp;
    len=strlen(str);

    for(i=0;i<len/2;i++)
    {
        tmp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=tmp;
    }

}