SimpleDraw is library based on sdl (simple direct media layer) lib.<br>
It can be used for games and software.


---How to set up--- <br> 
(this is not fully for this repo, but you still can set up like this)<br>
Code blocks (gcc): <br> 
1.Select sdl2 template <br> 
2.Download mingw devel and dll (sdl) <br> 
3.Unpack somwhere and select in whizard <br> 
4.Add 'SimpleDraw' dir, 'smile.png' and all cursors (.png) into your project <br> 
5.Set up sdl image: go to Project>Properties>Project's build options> <br> 
5.1.Go to search dir. and add: source_code\sprite\SDL_IMAGE\include\SDL2 ('source_code' dir. is dir. from step 4 ) <br> 
5.2.Go to Linker settings and add:-lSDL2_image <br>
(***DONT FORGET TO PUT ALL DLLS AT OUTPUT FOLDER!!!***)<br>
Warn.!This is for gcc! Use internet tutorial for another ide or compiler!<br>
All done. <br> 
