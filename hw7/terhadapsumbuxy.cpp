#include <iostream>
#include <SDL2/SDL.h>

// Fungsi untuk melakukan refleksi terhadap sumbu xy pada titik (x, y)
std::pair<int, int> reflectXYAxis(int x, int y) {
    return std::make_pair(y, x);
}

int main() {
    // Titik p1(1,3) dan p2(4,9)
    int p1_x = 1, p1_y = 3;
    int p2_x = 4, p2_y = 9;

    // Inisialisasi SDL
    SDL_Init(SDL_INIT_VIDEO);
s
    // Membuat window SDL
    SDL_Window* window = SDL_CreateWindow("Refleksi Sumbu XY", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool quit = false;
    SDL_Event event;

    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        // Melakukan refleksi terhadap sumbu xy pada p1 dan p2
        std::pair<int, int> p1_reflected = reflectXYAxis(p1_x, p1_y);
        std::pair<int, int> p2_reflected = reflectXYAxis(p2_x, p2_y);

        // Menggambar titik-titik pada window
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);
        
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Warna merah untuk titik asli
        SDL_RenderDrawPoint(renderer, p1_x + 400, 300 - p1_y); // Pusat layar adalah (400, 300)
        SDL_RenderDrawPoint(renderer, p2_x + 400, 300 - p2_y);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255); // Warna biru untuk titik refleksi
        SDL_RenderDrawPoint(renderer, p1_reflected.first + 400, 300 - p1_reflected.second); // Menggambar titik refleksi
        SDL_RenderDrawPoint(renderer, p2_reflected.first + 400, 300 - p2_reflected.second);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
