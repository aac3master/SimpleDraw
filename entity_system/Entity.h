using namespace std;
class Entity//more useful
{
    public:
        void Draw();
        SDL_Renderer* where_draw = NULL;
        string type = "";//sprite, shape
        int x = 0;
        int y = 0;
        int sx = 100;//size x (in pixels)
        int sy = 100;//size y (in pixels)
        int angle = 0;//supported only on sprite type
        int cr = 255;//red
        int cg = 0;//green
        int cb = 0;//blue
        int ca = 255;//alpha (255 - visible, 0 - not visible)

    private:
        Sprite* sprite = NULL;
        Rect* rect = NULL;//TODO:add shape class, not rect or circle
        string shape = "";//currently placeholder, but i am going to add more shapes
};

void Entity::Draw()
{
    if (Entity::type == "sprite")
    {
        if (Entity::sprite != NULL)
        {
            Entity::sprite->Draw();
        }
        else
        {
            printf("SSL Error: trying using Draw() with type = ''sprite'', but setup not used! If you are developer use SetupSprite() on entity!");
        }
    }
}
