/*
    Simple demo for SimpleDraw
      (sdl simple lib)
    Sorry for bad comments!
I hope you still can understand everything!

*/
//PUT ME WITH SimpleDraw DIR, NO IN
#include <exception>
#include <string>
#include <iostream>
#include "SimpleDraw/SimpleDraw.h"

simpledr::windowm::Window my_window;//Sets window var

int main( int argc, char * argv[] ) //For user: add here quit bool to control while
{
    my_window.MakeWindow(200, 200);
    my_window.AttachRendererToWindow();
    simpledr::drawm::Sprite my_sprite;
    my_sprite.where_draw = my_window;


    my_sprite.texture_path = "SimpleDraw/smile.png";
    my_sprite.SetTexture();
    my_sprite.x = 0;//set x pos (also can be y for hight), in example making sprite be almost in center
    my_sprite.sx = 100;//sets x size (sx = size x, sy = size y) in pixels (Warning! Sprite will render 100x100 by default! If you have sprite (image) with another size, please set sx and sy like you image size!!!)
    my_sprite.angle = 60;// angle

    simpledr::drawm::shapes::Shape my_shape;
    my_shape.where_draw = my_window;
    while (true)
    {
        my_window.UpdateTick();
        my_sprite.angle += 1;
        my_shape.Draw();
        my_sprite.Draw();
        my_window.DrawAll();
    }
}
