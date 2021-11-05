#include <stdio.h>

// Toujours initialiser les variables avec une valeur par defaut
// éviter les variables globales si possible

int main() {

  const int h = 5; // Le nombre de lignes à afficher
  // La variable i est le numero de la ligne
  // La variable j est le numero de la colone (Propre à chaque boucle)

  for (int i = 1; i <= h; i++) {

    // Affichage à gauche de la pyramide
    for (int j = 1; j <= h - i; j++) {
      printf("-");
    }

    // Affichage de la pyramide
    for (int j = 1; j <= ((2 * i) - 1); ++j) {

      // Affichage d'un "*" si:
      //  - Si on est au debut de la boucle
      //  - Si on est en bas de la pyramide
      //  - Si on est rendu à la moitié droite de la pyramide
      if (j == 1 || i == h || j == ((2 * i) - 1)) {
        // Affichage de l'exterieur de la pyramide
        printf("*");
      } else {
        // Affichage de l'interieur de la pyramide
        printf("-");
      }
    }

    // Affichage à la pyramide
    for (int j = 1; j <= h - i; j++) {
      printf("-");
    }

    // Retour à la ligne une fois les opérations sur la ligne effectuées
    printf("\n");
  }
  return 0;
}
