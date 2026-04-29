//place holder.
#define UseSDL

//define for more window functions
#define CompileWindowEx

//define for shapes
#define CompileShapes

//define for event handler and keyboard
#define CompileEvents

#include <exception>
#include <string>
#include <iostream>
#ifdef UseSDL
    #include <SDL.h>
    #include <SDL_image.h>
#endif // UseSDL

namespace simpledr
{
    using namespace simpledr;
    namespace data
    {
        struct TwoDimensionalPoint
        {
            float x;
            float y;
        };
    }
    #include "lib_main/Init.h"
    #ifdef CompileEvents
        namespace event
        {
            #include "lib_main/Events.h"
        }
    #endif // CompileEvents
    namespace windowm
    {
        #include "window/Basic.h"
        #ifdef CompileWindowEx
            #include "window/Mouse.h"
        #endif // CompileWindowEx
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


