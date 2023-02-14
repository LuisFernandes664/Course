#include <stdio.h>

typedef enum movimento { Norte, Oeste, Sul, Este } Movimento;
typedef struct posicao {
  int x, y;
} Posicao;

Posicao posFinal(Posicao inicial, Movimento mov[], int N) {
  for (int i = 0; i < N; i++) {
    switch (mov[i]) {
      case Norte:
        inicial.y++;
        break;
      case Oeste:
        inicial.x--;
        break;
      case Sul:
        inicial.y--;
        break;
      case Este:
        inicial.x++;
        break;
    }
  }
  return inicial;
}

int main(void) {
  Posicao inicial, final;
  Movimento mov[100];
  int N;
  
  printf("Enter initial position (x y): ");
  scanf("%d%d", &inicial.x, &inicial.y);
  
  printf("Enter number of movements: ");
  scanf("%d", &N);
  
  printf("Enter movements (Norte=0, Oeste=1, Sul=2, Este=3):\n");
  for (int i = 0; i < N; i++) {
    scanf("%d", &mov[i]);
  }
  
  final = posFinal(inicial, mov, N);
  printf("Final position: (%d, %d)\n", final.x, final.y);
  
  return 0;
}
