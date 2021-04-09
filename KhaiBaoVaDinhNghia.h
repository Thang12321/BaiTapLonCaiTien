#ifndef KHAIBAOVADINHNGHIA_H
#define KHAIBAOVADINHNGHIA_H
#include <iostream>
#include <SDL.h>
#include <ctime>
#include <map>

const int KichThuocBanDo =20;

const int KichThuocO = 32;

const int Min = 9;

const int ChuaMo=10;

const int CamCo=11;

std::map<int, SDL_Rect> TrangThaiO;

int BanDoAn[KichThuocBanDo+5][KichThuocBanDo+5];

int BanDoHienThi[KichThuocBanDo+5][KichThuocBanDo+5];

const int ChieuDaiCuaSo = KichThuocBanDo*KichThuocO;

const int  ChieuRongCuaSo = KichThuocBanDo*KichThuocO;

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Texture* texture;

void KhoiTaoSDL(){
//window
    window= SDL_CreateWindow("Minsweeper - by TaVanThang 20021440", 600, 200, ChieuDaiCuaSo, ChieuRongCuaSo, 0);
    if (window == nullptr) {
		std::cout << "SDL_CreateWindow error\n";
		exit(0);
	}
//renderer
renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == nullptr) {
		std::cout << "SDL_CreateRenderer error\n";
	exit(0);
	}
//texture

	SDL_Surface * bitmapSurface = SDL_LoadBMP("img/tiles.bmp");

	texture = SDL_CreateTextureFromSurface(renderer, bitmapSurface);
	SDL_FreeSurface(bitmapSurface);
	if (texture == nullptr)
    {
	std:: cout << " SDL_CreateTextureFromSurface error\n";
	exit(0);
}
//TrangThai
               for (int i = 0; i < 12; i++)
		TrangThaiO[i] = SDL_Rect{i*KichThuocO,0,KichThuocO,KichThuocO} ;
}

void HuyChuongTrinh()
{
    SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
#endif
