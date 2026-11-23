# Tool Learning Log

## Tool: **C++**

## Project: **2D time game**

---

### 10/19/26:
* To use some code you need the `#include` tag to include things like strings and lostream. I(input)o(output)stream
* There are different ways of making variables like some points to the reference and another points to the address only
* To get the value from the address you have to derefrence it by adding a *
* I learned how to output stuff
* I also learned about vectors which are like arrays
* I also learned a little about loops and I learned two types a simple one for just iterating through everything and harder one

### 11/9/26:
* SDL2 is the library I will use
* I learned about window class and event manager class
* Window class displays things to the user
* Event manager takes all the inputs
* They are seperated into .h and .cpp files
* .h declares the class and its methods
* .cpp defines what the methods do
* main.cpp links them using `#include` then the .h file

### 11/22/26
* installed VScode
* Initialized CMake and got it to work
* Decided on a compiler (Clang) and used it along with CMake
* To test out Clang and CMake, I made a window and rendered a background and moveable sprite
* It was hard to set up Clang, and CMake because there were a ton of errors and they were very unique to my specific case
* Some things I learned from my errors were that to use the things I installed, I had to first check if they were in my system PATH
* I learned some basic concepts I would have to use like the game loop and event manager
``` C++
 while (running) // Game Loop
    {
        // Handle events
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                running = false;

            if (event.type == SDL_KEYDOWN){  
                if (event.key.keysym.sym == SDLK_ESCAPE){
                    running = false;
                }
                if (event.key.keysym.sym == SDLK_d){
                    x_pos_rect = x_pos_rect + 10;
                }
            }
        }

        // Clear screen (dark gray)
        SDL_SetRenderDrawColor(renderer, 30, 30, 30, 255);
        SDL_RenderClear(renderer);

        // Draw a red rectangle
        SDL_Rect rect = {x_pos_rect, 250, 100, 100 };

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);

        // Present everything
        SDL_RenderPresent(renderer);
    }
```



<!-- 
* Links you used today (websites, videos, etc)
* Things you tried, progress you made, etc
* Challenges, a-ha moments, etc
* Questions you still have
* What you're going to try next
-->
