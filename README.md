# git_sample_cours_Vig

#include <stdio.h>
#include <allegro.h>

typedef struct pokemons{

    BITMAP * pokemon1;
    BITMAP * pokemon2;
    BITMAP * pokemon3;

}t_pokemon;



void create_pokemon(t_pokemon pokemon, BITMAP *buffer){

    buffer = create_bitmap(SCREEN_W, SCREEN_H);
    pokemon.pokemon1 = create_bitmap(800, 600);
    pokemon.pokemon1 = load_bitmap("pokemon1_mag.bmp", NULL);
    pokemon.pokemon2 = create_bitmap(800, 600);
    pokemon.pokemon2 = load_bitmap("pokemon2_mag.bmp", NULL);
    pokemon.pokemon3 = create_bitmap(800, 600);
    pokemon.pokemon3 = load_bitmap("pokemon3_mag.bmp", NULL);


    int gen1, gen2, gen3;
    gen1 = rand()%3;
    gen2 = rand()%3;
    gen3 = rand()%3;

    int validation = 0;
    int resultat;
    int done = 0;


    /*** fond ***/

    BITMAP* background = create_bitmap(800, 600);
    background = load_bitmap("vfond1.bmp", NULL);

    /*** fin fond ***/


    while(!key[KEY_ESC]){


        /************  déroulement des images ************/
        if(validation == 0){


            clear_bitmap(screen);

            stretch_sprite(screen, background,0, 0,SCREEN_W , SCREEN_H );
            stretch_sprite(screen, pokemon.pokemon1,SCREEN_W  - SCREEN_W/1.15 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            stretch_sprite(screen, pokemon.pokemon2,SCREEN_W  - SCREEN_W/1.7 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            stretch_sprite(screen, pokemon.pokemon3,SCREEN_W  - SCREEN_W/2.85 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            vsync();
            rectfill(screen,710 ,300 ,715,450 , makecol(7,22,153));
            circlefill(screen,712,300,20,makecol(7,22,153));
            rest(100);
            clear_bitmap(screen);

            stretch_sprite(screen, background,0, 0,SCREEN_W , SCREEN_H );
            stretch_sprite(screen, pokemon.pokemon2,SCREEN_W  - SCREEN_W/1.15 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            stretch_sprite(screen, pokemon.pokemon3,SCREEN_W  - SCREEN_W/1.7 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            stretch_sprite(screen, pokemon.pokemon1,SCREEN_W  - SCREEN_W/2.85 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            vsync();
            rectfill(screen,710 ,300 ,715,450 , makecol(7,22,153) );
            circlefill(screen,712,300,20,makecol(7,22,153));
            rest(100);
            clear_bitmap(screen);

            stretch_sprite(screen, background,0, 0,SCREEN_W , SCREEN_H );
            stretch_sprite(screen, pokemon.pokemon3,SCREEN_W  - SCREEN_W/1.15 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            stretch_sprite(screen, pokemon.pokemon1,SCREEN_W  - SCREEN_W/1.7 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            stretch_sprite(screen, pokemon.pokemon2,SCREEN_W  - SCREEN_W/2.85 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            vsync();
            rectfill(screen,710 ,300 ,715,450 , makecol(7,22,153) );
            circlefill(screen,712,300,20,makecol(7,22,153));
            rest(100);
            clear_bitmap(screen);


        }

        /************ condition pour tirage ************/

        if(mouse_b & 2 || mouse_b & 1) {
            for(int i = 300; i < 450 ; i = i + 50){
                circlefill(screen, 712, i, 20, makecol(7, 22, 153));
                rest(10);
            }
            validation = 1;
        }

        /************  generation des 3 images ************/
        if(validation == 1){

            clear_bitmap(screen);
            stretch_sprite(screen, background,0, 0,SCREEN_W , SCREEN_H );

            /***** gen 1 ******/
            if (gen1 == 0){
               stretch_sprite(screen, pokemon.pokemon1,SCREEN_W  - SCREEN_W/1.15 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            if (gen1 == 1){
                stretch_sprite(screen, pokemon.pokemon2,SCREEN_W  - SCREEN_W/1.15 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            if (gen1 == 2){
                stretch_sprite(screen, pokemon.pokemon3,SCREEN_W  - SCREEN_W/1.15, SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            /***** gen 2 ******/
            if (gen2 == 0){
                stretch_sprite(screen, pokemon.pokemon1,SCREEN_W  - SCREEN_W/1.7 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            if (gen2 == 1){
                stretch_sprite(screen, pokemon.pokemon2,SCREEN_W  - SCREEN_W/1.7 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            if (gen2 == 2){
                stretch_sprite(screen, pokemon.pokemon3,SCREEN_W  - SCREEN_W/1.7 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            /***** gen 3 ******/
            if (gen3 == 0){
                stretch_sprite(screen, pokemon.pokemon1,SCREEN_W  - SCREEN_W/2.85 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            if (gen3 == 1){
                stretch_sprite(screen, pokemon.pokemon2,SCREEN_W  - SCREEN_W/2.85 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            if (gen3 == 2){
                stretch_sprite(screen, pokemon.pokemon3,SCREEN_W  - SCREEN_W/2.85 , SCREEN_H - SCREEN_H/2,pokemon.pokemon1->w/6 , pokemon.pokemon1->h/6 );
            }
            rectfill(screen,710 ,300 ,715,450 , makecol(7,22,153) );
            circlefill(screen,712,450,20,makecol(7,22,153));
            validation = 2;
        }
        /************  resultat ************/
        if(validation == 2) {
            if (gen1 == gen2 && gen1 == gen3 && gen2 == gen3) {
                textprintf_ex(screen, font, SCREEN_W - SCREEN_W / 1.92, 450, makecol(7, 22, 153), -1, "gagne");
                //resultat = 0;
            } else {
                textprintf_ex(screen, font, SCREEN_W - SCREEN_W / 1.92, 450, makecol(7, 22, 153), -1, "perdu");
                //resultat = 1;
            }
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
    install_mouse();

    srand(time(NULL));

    t_pokemon pokemon;
    BITMAP* buffer;


    vsync();

    create_pokemon(pokemon,buffer);



    destroy_bitmap(pokemon.pokemon1);
    destroy_bitmap(pokemon.pokemon2);
    destroy_bitmap(pokemon.pokemon3);


    return 0;


}END_OF_MAIN();

