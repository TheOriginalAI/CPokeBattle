//
// Created by DSU Student on 11/24/2020.
//

#ifndef UNTITLED_LAPRAS_H
#define UNTITLED_LAPRAS_H

#endif //UNTITLED_LAPRAS_H

int attackfunc (int chealth){
    int randnum = rand() % 5; //0, 1, 2, 3, 4
    int atkchoice;

    printf("Lapras Attacks:\n\t1 = Ice Beam\n\t2 = Ancient Power\n\t3 = Iron Head\n\n\n");
    scanf("%d", &atkchoice);

    if(atkchoice == 1){
        printf("You chose Ice Beam!");
        if(randnum >= 1) { //If 1, 2, 3 then hit
            if(randnum == 3){
                printf(" Critical Hit!");
                chealth = chealth - 120;
                return chealth;
            }
            chealth = chealth - 90;
            return chealth;
        } else if (randnum < 1){
            printf(" Lapras Attack Missed!");
        }

    } else if (atkchoice == 2){
        if(randnum > 1) { //If 2 or 3, then hit
            printf("You chose Ancient Power!");
            if(randnum == 3){
                printf(" Critical Hit!");
                chealth = chealth - 85;
                return chealth;
            }
            chealth = chealth - 60;
            return chealth;
        } else if (randnum <= 1) {
            printf(" Lapras Attack Missed!");
        }

    } else if (atkchoice == 3) {
        if(randnum >= 2) { //If 2, 3, 4 then hit
            printf("You chose Iron Head!");
            if(randnum == 4){
                printf(" Critical Hit!");
                chealth = chealth - 100;
                return chealth;
            }
            chealth = chealth - 80;
            return chealth;
        } else if(randnum < 2){
            printf(" Lapras Attack Missed!");
        }
    } else {
        printf("\nInput Invalid\n\n");
    }

    return chealth;
}

