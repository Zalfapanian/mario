#include <stdlib.h>
#include <stdio.h>

#include "charactere.h"

void freePersonnage(Personnage* mario, Personnage **goomba, int nbGoomba) {
    
}

void createperso(){
    struct Personnage mario;
    mario.jump = 0;
    mario.jumptime = 0;
    mario.gravite = 0;
    mario.direction = 0;
    mario.dernierdirection = 0;
    mario.temp = 0;
    mario.win = 0;
    mario.invisible = 0;
    mario.lvl = 0;
    mario.lvlperdu = 0;
}
