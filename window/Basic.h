using namespace std;


class Renderer
{
    public:
        SDL_Renderer* sdl_rend = NULL;
        void UpdateRenderer();
        void RenderRenderer();
        void SetupRenderer(SDL_Window* wind);
};

class Window
{
    public:
        SDL_Window* sdl_win = NULL;
        simpledr::windowm::Renderer rendr;
        void MakeWindow(int sx, int sy, char* name);
        void UpdateTick();
        void DrawAll();
        void AttachRendererToWindow();
        bool CloseWindow(bool exit_sdl);

};

void simpledr::windowm::Window::MakeWindow(int sx, int sy, char* name = "simple program")//Why not class? IDK.
{
    Window::sdl_win = SDL_CreateWindow(name, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, sx, sy, SDL_WINDOW_SHOWN );


    if( Window::sdl_win == NULL )
    {
        printf( "SSL Error: window could not be created! SDL_Error: %s\n", SDL_GetError() );
    }
}

void simpledr::windowm::Window::UpdateTick()//Anti white screen TM
{
    SDL_Event e;

    SDL_PollEvent( &e );
    Window::rendr.UpdateRenderer();
    SDL_UpdateWindowSurface(Window::sdl_win);
}

void simpledr::windowm::Window::DrawAll()//Anti white screen TM
{
    Window::rendr.RenderRenderer();
}

void simpledr::windowm::Renderer::SetupRenderer(SDL_Window* wind)
{
    Renderer::sdl_rend = SDL_CreateRenderer(wind, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(Renderer::sdl_rend, 0x00, 0x00, 0x00, 0x00);
}

void simpledr::windowm::Renderer::UpdateRenderer()//Just clear renderer result
{
    SDL_SetRenderDrawColor(Renderer::sdl_rend, 0x00, 0x00, 0x00, 0x00);
    SDL_RenderClear(Renderer::sdl_rend);

}

void simpledr::windowm::Renderer::RenderRenderer()//Show renderer result in renderer
{
    SDL_RenderPresent(Renderer::sdl_rend);
}


void simpledr::windowm::Window::AttachRendererToWindow()
{
    Window::rendr.SetupRenderer(Window::sdl_win);
}

bool simpledr::windowm::Window::CloseWindow(bool exit_sdl)//*no comments*
{
    SDL_DestroyWindow(Window::sdl_win);
    if (exit_sdl == true)
    {
        SDL_Quit();
        return true;
    }
    else
    {
        return true;
    }
}
