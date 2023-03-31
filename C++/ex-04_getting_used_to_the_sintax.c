#include <stdio.h>
/*#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <time.h>
*/
int main(){
    int i;
    for (i = 10; i < 200; i++){
        printf("%d", &i);
    }
}