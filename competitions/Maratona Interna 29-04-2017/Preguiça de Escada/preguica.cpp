#include <bits/stdc++.h>

using namespace std;

int getAndarSala() {
    int sala;
    scanf("%d", &sala);
    return (sala / 100);
}

int calculaAndares() {
    int andarSala, andarAtual, andares = 0;
    
    for (int i = 0; i < 5; ++i) {
        andarAtual = 0;
        if (i % 2 == 0) { // segunda, quarta e sexta
            for (int j = 0; j < 4; ++j) {
                andarSala = getAndarSala();
                andares += abs(andarSala - andarAtual);
                andarAtual = andarSala;
            }
        } else { // terça e quinta
            for (int j = 0; j < 6; ++j) {
                if (j == 2) { // descer para o intervalo
                    andares += andarAtual;
                    andarAtual = 0;
                }
                andarSala = getAndarSala();
                andares += abs(andarSala - andarAtual);
                andarAtual = andarSala;
            }
        }
        andares += andarAtual; // descer para ir embora
    }
    
    return andares;
}

int main() {
    int n, turmaA, turmaB;
    scanf("%d", &n);
    
    while (n--) {
        turmaA = calculaAndares();
        turmaB = calculaAndares();
        
        //printf("A: %d\n", turmaA);
        //printf("B: %d\n\n", turmaB);
        if (turmaA == turmaB) printf("tanto faz\n");
        else printf(turmaA < turmaB ? "A\n" : "B\n");
    }
    
    return 0;
}