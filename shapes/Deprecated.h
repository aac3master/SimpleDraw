using namespace std;
class Rect
{
    public:
        void Draw();
        SDL_Renderer* where_draw = NULL;
        int x = 0;
        int y = 0;
        int sx = 100;
        int sy = 100;
        int angle = 0;//not supported
        int cr = 255;
        int cg = 0;
        int cb = 0;
        int ca = 255;

    private:


};

void Rect::Draw()
{
    SDL_SetRenderDrawColor(Rect::where_draw, Rect::cr, Rect::cg, Rect::cb, Rect::ca);

    // Render rect
    SDL_Rect rect_rect = {Rect::x, Rect::y, Rect::sx, Rect::sy};
    SDL_RenderFillRect(Rect::where_draw, &rect_rect );

}
