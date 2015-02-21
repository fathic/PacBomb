/*
 * main.cpp
 *
 *  Created on: Feb 21, 2015
 *      Author: helfathi
 */

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

#include "../inc/CSurface.h"

int main( int argc, char *argv[ ] )
{
	// init SDL
    if( SDL_Init( SDL_INIT_VIDEO ) == -1 )
    {
        printf( "Can't init SDL:  %s\n", SDL_GetError( ) );
        return EXIT_FAILURE;
    }

    atexit( SDL_Quit );

    CSurface surface;
    if( !surface.isValid() )
    {
        printf( "Can't set video mode: %s\n", SDL_GetError( ) );
        return EXIT_FAILURE;
    }

    SDL_Delay( 3000 );

    return EXIT_SUCCESS;
}

