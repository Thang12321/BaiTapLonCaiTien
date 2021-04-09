#include "KhaiBaoVaDinhNghia.h"
#ifndef LOANG_H

#define LOANG_H

void loang(int x,int y){
	if (BanDoAn[y-1][x]<=8 && BanDoHienThi[y-1][x]==ChuaMo)
        {
		BanDoHienThi[y-1][x]=BanDoAn[y-1][x];
		if(BanDoAn[y-1][x]==0) loang(x,y-1);
	}
	if (BanDoAn[y+1][x]<=8 && BanDoHienThi[y+1][x]==ChuaMo)
	{
		BanDoHienThi[y+1][x]=BanDoAn[y+1][x];
		if (BanDoAn[y+1][x]==0) loang(x,y+1);
	}
	if (BanDoAn[y][x - 1]<=8 && BanDoHienThi[y][x - 1]==ChuaMo)
	{
		BanDoHienThi[y][x - 1]=BanDoAn[y][x - 1];
		if(BanDoAn[y][x - 1]==0) loang(x - 1, y);
	}
	if (BanDoAn[y][x + 1]<=8 && BanDoHienThi[y][x + 1]==ChuaMo)
	{
		BanDoHienThi[y][x + 1]=BanDoAn[y][x + 1];
		if (BanDoAn[y][x + 1]==0) loang(x + 1, y);
	}
}
#endif
