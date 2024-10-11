#include <stdio.h>

int main() {
    int N;
    int jojo, lili, bibi;
    int totalscore=0, score;
    
    scanf("%d", &N);

    scanf("%d %d %d", &jojo, &lili, &bibi);
    
    totalscore = jojo + lili + bibi;

    for (int i = 0; i < N; i++) {
        scanf("%d", &score);
        totalscore += score;
    }

    int average = totalscore / (N + 3);

    printf("Jojo %s\n", jojo >= average ? "lolos" : "tidak lolos");
    printf("Lili %s\n", lili >= average ? "lolos" : "tidak lolos");
    printf("Bibi %s\n", bibi >= average ? "lolos" : "tidak lolos");

    return 0;
}
