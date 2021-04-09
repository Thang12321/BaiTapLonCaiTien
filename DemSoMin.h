#include "KhaiBaoVaDinhNghia.h"
#ifndef DEMSOMIN_H
#define DEMSOMIN_H
void demminxungquanh()
{
    for (int i = 1; i <= KichThuocBanDo; i++)
        for (int j = 1; j <= KichThuocBanDo; j++)
        {
            if (BanDoAn[i][j] != Min)
            {
                int demmin = 0;
                if (BanDoAn[i + 1][j] == Min)
                    demmin++;
                if (BanDoAn[i][j + 1] == Min)
                    demmin++;
                if (BanDoAn[i - 1][j] == Min)
                    demmin++;
                if (BanDoAn[i][j - 1] == Min)
                    demmin++;
                if (BanDoAn[i + 1][j + 1] == Min)
                    demmin++;
                if (BanDoAn[i - 1][j - 1] == Min)
                    demmin++;
                if (BanDoAn[i - 1][j + 1] == Min)
                    demmin++;
                if (BanDoAn[i + 1][j - 1] == Min)
                    demmin++;
                BanDoAn[i][j] = demmin;
            }
        }
}
#endif // DEMSOMIN_H
