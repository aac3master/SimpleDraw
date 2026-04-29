using namespace std;
class Shape
{
    public:
        void Draw();
        windowm::Window* where_draw;
        string shape_type = "Rect";
        int x = 0;
        int y = 0;
        int sx = 100;
        int sy = 100;
        int angle = 0;//not supported yet
        int cr = 255;
        int cg = 0;
        int cb = 0;
        int ca = 255;

    private:


};

void drawm::shapes::Shape::Draw()
{
    SDL_SetRenderDrawColor(drawm::shapes::Shape::where_draw->rendr.sdl_rend, Shape::cr, Shape::cg, Shape::cb, Shape::ca);

    // Render rect
    if (drawm::shapes::Shape::shape_type == "Rect")
    {
        SDL_Rect rect_rect = {drawm::shapes::Shape::x, drawm::shapes::Shape::y, drawm::shapes::Shape::sx, drawm::shapes::Shape::sy};
        SDL_RenderFillRect(drawm::shapes::Shape::where_draw->rendr.sdl_rend, &rect_rect );
    }
}
