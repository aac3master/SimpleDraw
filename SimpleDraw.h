//place holder.
#define UseSDL

//define for more window functions
#define CompileWindowEx

//define for shapes
#define CompileShapes


#include <exception>
#include <string>
#include <iostream>
#ifdef UseSDL
    #include <SDL.h>
    #include <SDL_image.h>
#endif // UseSDL

namespace simpledr
{
    #include "lib_main/Init.h"
    namespace windowm
    {
        #include "window/Basic.h"
        #include "window/Mouse.h"
    }
    namespace drawm
    {
        #include "sprite/Base.h"
        #ifdef CompileShapes
            namespace shapes
            {
                #include "shapes/Deprecated.h"
                #include "shapes/Shape.h"
            }
        #endif // CompileShapes
    }
}


