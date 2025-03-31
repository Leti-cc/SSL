#include <stdio.h>

int main(){
    freopen("salida.txt", "w", stdout);
    printf("Hello World.");
    fclose(stdout);
    getchar();
    return 0;
}
