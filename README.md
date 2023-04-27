# git_sample_cours_Vig

#include <stdio.h>
#include <allegro.h>

typedef struct pokemons{

    BITMAP * pokemon1;
    BITMAP * pokemon2;
    BITMAP * pokemon3;

}t_pokemon;

/*void load_pokemon(t_pokemon* pokemon, BITMAP** buffer){
    *buffer = create_bitmap(SCREEN_W, SCREEN_H);
    pokemon->pokemon1 = create_bitmap(800, 600);
    pokemon->pokemon1 = load_bitmap("pokemon1.bmp", NULL);
    pokemon->pokemon2 = create_bitmap(800, 600);
    pokemon->pokemon2 = load_bitmap("pokemon2.bmp", NULL);
    pokemon->pokemon3 = create_bitmap(800, 600);
    pokemon->pokemon3 = load_bitmap("pokemon3.bmp", NULL);
}*/


void create_pokemon(t_pokemon pokemon, BITMAP *buffer){

    buffer = create_bitmap(SCREEN_W, SCREEN_H);
    pokemon.pokemon1 = create_bitmap(800, 600);
    pokemon.pokemon1 = load_bitmap("pokemon1.bmp", NULL);
    pokemon.pokemon2 = create_bitmap(800, 600);
    pokemon.pokemon2 = load_bitmap("pokemon2.bmp", NULL);
    pokemon.pokemon3 = create_bitmap(800, 600);
    pokemon.pokemon3 = load_bitmap("pokemon3.bmp", NULL);

    int gen1, gen2, gen3;
    gen1 = rand()%3;
    gen2 = rand()%3;
    gen3 = rand()%3;


    while(!key[KEY_ESC]){


        /***** gen 1 ******/
        if (gen1 == 0){

            stretch_blit(pokemon.pokemon1, buffer, 0, 0, pokemon.pokemon1->w, pokemon.pokemon1->h, SCREEN_W  - SCREEN_W/1.22, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon1->w, pokemon.pokemon1->w);
        }
        if (gen1 == 1){

            stretch_blit(pokemon.pokemon2, buffer, 0, 0, pokemon.pokemon2->w, pokemon.pokemon2->h, SCREEN_W - SCREEN_W/1.22, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon2->w, pokemon.pokemon2->w);
        }
        if (gen1 == 2){

            stretch_blit(pokemon.pokemon3, buffer, 0, 0, pokemon.pokemon3->w, pokemon.pokemon3->h, SCREEN_W - SCREEN_W/1.22, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon3->w, pokemon.pokemon3->w);
        }
        /***** gen 2 ******/
        if (gen2 == 0){

            stretch_blit(pokemon.pokemon1, buffer, 0, 0, pokemon.pokemon1->w, pokemon.pokemon1->h, SCREEN_W  - SCREEN_W/1.7, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon1->w, pokemon.pokemon1->w);
        }
        if (gen2 == 1){

            stretch_blit(pokemon.pokemon2, buffer, 0, 0, pokemon.pokemon2->w, pokemon.pokemon2->h, SCREEN_W - SCREEN_W/1.7, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon2->w, pokemon.pokemon2->w);
        }
        if (gen2 == 2){

            stretch_blit(pokemon.pokemon3, buffer, 0, 0, pokemon.pokemon3->w, pokemon.pokemon3->h, SCREEN_W - SCREEN_W/1.7, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon3->w, pokemon.pokemon3->w);
        }
        /***** gen 3 ******/
        if (gen3 == 0){

            stretch_blit(pokemon.pokemon1, buffer, 0, 0, pokemon.pokemon1->w, pokemon.pokemon1->h, SCREEN_W  - SCREEN_W/2.85, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon1->w, pokemon.pokemon1->w);
        }
        if (gen3 == 1){

            stretch_blit(pokemon.pokemon2, buffer, 0, 0, pokemon.pokemon2->w, pokemon.pokemon2->h, SCREEN_W - SCREEN_W/2.85, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon2->w, pokemon.pokemon2->w);
        }
        if (gen3 == 2){

            stretch_blit(pokemon.pokemon3, buffer, 0, 0, pokemon.pokemon3->w, pokemon.pokemon3->h, SCREEN_W - SCREEN_W/2.85, SCREEN_H - SCREEN_H/2, pokemon.pokemon1->w/6, pokemon.pokemon1->h/6);
            blit(buffer, screen, 0, 0, 0, 0, pokemon.pokemon3->w, pokemon.pokemon3->w);
        }


    }
}


int main() {
    allegro_init();
    set_color_depth(desktop_color_depth());
    if ((set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0)) != 0) {
        allegro_message("Pb de mode graphique");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    install_keyboard();
    srand(time(NULL));

    t_pokemon pokemon;
    BITMAP* buffer;
    BITMAP * buffer2;
    create_pokemon(pokemon,buffer);

    return 0;


}END_OF_MAIN();

