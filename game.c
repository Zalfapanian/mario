
#include "game.h"
#include "file.h"
#include "charactere.h"
#include "event.h"

int jouer(SDL_Renderer* renderer) {
    
	//charger image et personnage. 

    int continuer = 1; //a utiliser pour savoir si on continue la boucle du jeu ou si on arrête. 
    SDL_Event events;

    while(continuer){ //coeur du jeu ici, les actions seront repété pour faire le déplacement des différentes images, ...
        
        //gérer les différentes actions. 
        
        
    }
    
	//a vous de compléter, au fur et à mesure, les deux fonctions en dessous pour bien faire le nettoyage. 
    LibererMap(map, sprites);
    freePersonnage(mario, goomba, nbGoomba);

    return continuer;
}

    while(continuer){ //coeur du jeu ici, les actions seront repété pour faire le déplacement des différentes images, ...
        
        struct Personnage
        {
            SDL_Texture **image; //une liste des images (de pointeur sur image pour être précis) quicontiendra l’ensemble des sprites de notre personnages (ici mario).

            SDL_Rect position; //la position en l’instant t de notre personnage mario et plus particulièrement du carré qui le symbolise.
            
            int jump; //symbolise si le personnage saute ou non, vaudra 1 à partir du moment ou le personnage commence à sauter et vaudra 0 à partir du moment où le personnage redescend (ou si le personnage ne saute pas).
            
            int jumptime; //correspond à la durée depuis que le personnage effectue un saut.
            
            int gravite; //vaut 1 si le personnage est dans les airs (et donc que la gravité doit s’appliquer), vaut 0 sinon. Ce champ est utilisé pour tomber si il n’y a pas de sol en dessous du personnage.
            
            int direction; 
            
            //ou
            
            int derniereDirection; //symbolise la direction (ou la direction précédente) vers laquelle mario se dirige, vaut 1 pour la droite, 2 pour la gauche et 0 pour une absence de mouvement.
            
            int temps; //doit être incrémenté de manière régulière et sera utilisé pour faire varier les sprites de mario pour donner une impression de mouvement.
            
            int win; //symbolise plus l’état de la partie, vaut -1 si le personnage perds (tombe dans le vide par exemple), 1 si il gagne en touchant le drapeau et 0 sinon.

        };
        
        
        
    }
