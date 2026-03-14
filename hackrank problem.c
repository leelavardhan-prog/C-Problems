#include <stdio.h>
int main() {
    int cm,feet;
    scanf("%d",&cm);
    float inches,reminch;
    inches=cm/2.54;
    feet=inches/12;
    reminch=inches-(feet*12);
    printf("%d %.1f",feet,reminch);
    
    return 0;
}