#include "KhaiBaoVaDinhNghia.h"
#ifndef CHOI_H
#define CHOI_H
void choi()
{
    while (true)
    {
        SDL_Event e;
        if (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                break;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN)
            {
                SDL_Point ViTriChuot;
                ViTriChuot.x = e.motion.x / KichThuocO + 1;
                ViTriChuot.y = e.motion.y / KichThuocO + 1;


                //Chuot Trai
                if (e.button.button == SDL_BUTTON_LEFT)
                {
                    if (BanDoAn[ViTriChuot.y][ViTriChuot.x] != Min)
                    {
                        BanDoHienThi[ViTriChuot.y][ViTriChuot.x] = BanDoAn[ViTriChuot.y][ViTriChuot.x];
                        loang(ViTriChuot.x,ViTriChuot.y);
                    }
                    else
                    {

                        //Chet
                        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Game over", "", nullptr);
                        for (int i = 1; i <= KichThuocBanDo; i++)
                            for (int j = 1; j <= KichThuocBanDo; j++)
                                BanDoHienThi[j][i] = BanDoAn[j][i];
                    }
                }

                //Chuot Phai
                if (e.button.button == SDL_BUTTON_RIGHT)
                    BanDoHienThi[ViTriChuot.y][ViTriChuot.x] = CamCo;
            }
        }
        SDL_RenderClear(renderer);

        for (int i = 1; i <= KichThuocBanDo; i++)
            for (int j = 1; j <= KichThuocBanDo; j++)
            {
                std::map<int, SDL_Rect>::iterator it = TrangThaiO.find(BanDoHienThi[j][i]);

                //if (it != TrangThaiO.end())
                //{
                SDL_Rect oCanchen;
                oCanchen.x = (i-1)*KichThuocO;
                oCanchen.y = (j-1)*KichThuocO;
                oCanchen.h = KichThuocO;
                oCanchen.w = KichThuocO;
                SDL_RenderCopy(renderer, texture, &it->second, &oCanchen);
                //}
            }
        SDL_RenderPresent(renderer);
    }
}
#endif // CHOI_H
