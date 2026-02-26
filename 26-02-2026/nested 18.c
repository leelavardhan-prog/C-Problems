#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        for(ch='A'+n-i;ch<='A'+n-1;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}