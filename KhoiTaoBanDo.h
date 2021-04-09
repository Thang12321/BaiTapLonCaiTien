#include "KhaiBaoVaDinhNghia.h"
#ifndef KHOITAOBANDO_H
#define KHOITAOBANDO_H
void DatMinVaKhoiTaoBanDo()
{
    srand(time(0));
    for (int i = 1; i <= KichThuocBanDo; i++)
		for (int j = 1; j <= KichThuocBanDo; j++)
		{
			BanDoHienThi[j][i] = ChuaMo;
        }
int sominMax= KichThuocBanDo*KichThuocBanDo*0.25;
std::cout<<sominMax<<std::endl;
int somin=rand()%sominMax+1;
std::cout<<somin<<std::endl;
for(int i=0; i<5; i++)
    {
        int x,y;
        do
        {
            x=rand()%KichThuocBanDo +1;
            y=rand()%KichThuocBanDo +1;
        }
        while(BanDoAn[x][y]!=0);
        BanDoAn[x][y]=Min;
    }
}
#endif // KHOITAOBANDO_H
