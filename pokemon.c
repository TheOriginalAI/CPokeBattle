#include <stdio.h>
#include <stdlib.h>
#include "lapras.h"
#include "enemy.h"


int main (void){

    int ComHealth = 500;
    int PHealth = 500;
    int pokeleft = 5;
    int choice;
    int potioncnt = 2;

#define MAXCHAR 1000
    FILE *fp2;
    char str2[MAXCHAR];
    char* filename2 = "C:\\Users\\DSU Student\\CLionProjects\\untitled\\pokemon.txt";
    fp2 = fopen(filename2, "r");
    if (fp2 == NULL){
        printf("Could not open file %s",filename2);
        return 1;
    }
    printf("\n\n");
    while (fgets(str2, MAXCHAR, fp2) != NULL)
        printf("%s", str2);
    fclose(fp2);

    printf("\n\n\t\t\tA wild Charizard appeared!\n");


    printf("\n\t\t\t   You sent out Lapras!\n\n");

    while(PHealth >= 0){
        while (ComHealth >= 0){


            printf("\nWhat Do You Want Lapras To Do:\n\t1 = Attack\n\t2 = Pokemon\n\t3 = Bag\n\t4 = Run\n\n");
            scanf("%d", &choice);

            if (choice == 1) {
                ComHealth = attackfunc(ComHealth);
                printf("\nCharizard has %d health left!\n", ComHealth);
                if(ComHealth <= 0){
                    printf("\n\nCharizard has fainted! Player Wins!\n\nThanks for Playing!\n");
                    exit(0);
                }

            } else if (choice == 2) {
                printf("\nYou dont HAVE any other Pokemon!\n\n");

            } else if (choice == 3) {
                printf("\nBag Contents:\n\t1 = Throw a Pokeball (%d left)\n\t2 = Use a Potion (%d left)\n\t3 = Close\n", pokeleft, potioncnt);
                scanf("%d", &choice);
                if (choice == 1) {
                    if (pokeleft > 0) {
                        printf("You threw a Pokeball!\n");
                        catchfunc();
                        pokeleft = pokeleft - 1;
                    } else if (pokeleft <= 0) {
                        printf("You dont have any more pokeballs!\n\n");
                    }

                } else if(choice == 2){
                    if(potioncnt > 0) {
                        printf("You used a potion!\n");
                        potioncnt = potioncnt - 1;
                        PHealth = PHealth + 30;
                        printf("Lapras has %d health!\n\n", PHealth);
                    } else {
                        printf("You dont have any potions left!\n\n");
                    }
                } else if (choice != 3) {
                    printf("\nInput Invalid\n\n");
                }

            } else if (choice == 4) {
                int num = rand() % 2; //0, 1
                if(num == 0) {
                    printf("You got away!\n");
                    exit(0);
                } else if (num == 1){
                    printf("You couldn't get away!\n");
                }
            } else {
                printf("\nInput Invalid!\n\n");
            }
            PHealth = comattack(PHealth);
            printf(" Lapras has %d health left!\n", PHealth);
            if(PHealth <= 0){
                printf("\n\nLapras has fainted! Computer Wins!\n\nThanks for Playing!\n");
                exit(0);
            }
            printf("\n\n\n\n\n");
        }
    }

    return 0;
}
