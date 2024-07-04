include <stdio.h>
int main(){
    printf("Who are you?/n");
    string name;
    scanf("%s", &name);
    printf("Hello, %s!/n", name);
    int coin, count = 0;

    printf("Tossing a coin...\n");
        for(int i = 0; i < 3; i++){
            coin = rand();
            if(coin % 2 = 0){
            printf("Round %d: Heads\n", i);
            count++;
            }
            else printf("Round %d: Tails\n", i);
    }
    printf("Heads: %d, Tail: %d\n"count, 3-count);
}