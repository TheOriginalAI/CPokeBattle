//
// Created by DSU Student on 11/24/2020.
//

#ifndef UNTITLED_ENEMY_H
#define UNTITLED_ENEMY_H

#endif //UNTITLED_ENEMY_H


int catchfunc() {
    int randnum = rand() % 5; //0, 1, 2, 3, 4
    if(randnum == 1){
        printf("\nYou caught Charizard!\n\n");
        exit(0);
    } else {
        printf("\nCharizard broke free!\n\n");
    }
    return 0;
}




int comattack(int phealth){
    int randnum = rand() % 3; //0, 1, 2
    int randnum2 = rand() % 5; //0, 1, 2, 3, 4

    if(randnum == 0){
        printf("Charizard used Flamethrower!");
        if(randnum2 >= 1) { //If 1, 2, 3, 4 then hit
            if(randnum2 == 4){
                printf(" Critical Hit!\n");
                phealth = phealth - 110;
                return phealth;
            }
            phealth = phealth - 90;
            return phealth;
        } else {
            printf(" Charizard's move missed!\n");
        }

    } else if (randnum == 1){
        printf("Charizard used Fire Spin!");
        if(randnum2 <= 3) { //If 0, 1, 2, 3 then hit
            if(randnum2 == 3){
                printf(" Critical Hit!\n");
                phealth = phealth - 65;
                return phealth;
            }
            phealth = phealth - 35;
            return phealth;
        } else {
            printf(" Charizard's move missed!\n");
        }

    } else if (randnum == 2) {
        printf("Charizard used Dragon Breath!");
        if(randnum2 <= 2) { //If 0, 1, 2 hit
            if(randnum2 == 3){
                printf(" Critical Hit!\n");
                phealth = phealth - 80;
                return phealth;
            }
            phealth = phealth - 60;
            return phealth;
        } else {
            printf(" Charizard's move missed!\n");
        }
    }
    return phealth;
}


