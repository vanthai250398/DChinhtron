#include "stdafx.h"
#include "HT.h"


HT::HT()
{
}

void HT::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void HT::ve(CClientDC *pdc)
{
	pdc->Ellipse(x1, x2, y1, y2);
	pdc->TextOutW(0,10, c);
}
void HT::pentrang(CClientDC *pdc)
{
	CPen *pen;
	CPen *pen1;
	pen1 = new CPen(PS_SOLID, 0, RGB(255, 255, 255));
	pen = pdc->SelectObject(pen1);

	pdc->Ellipse(x1, x2, y1, y2);
}
void HT::penden(CClientDC *pdc)
{
	CPen *pen;
	CPen *pen1;
	pen1 = new CPen(PS_SOLID, 0, RGB(0, 0, 0));
	pen = pdc->SelectObject(pen1);


}
void HT::dclen(CClientDC *pdc)
{
	
	x2 = x2 - 20;
	y2 = y2 - 20;
}
void HT::dcxuong(CClientDC *pdc)
{
	x1 = x1;
	x2 = x2 + 20;
	y1 = y1;
	y2 = y2 + 20;
}
void HT::dctrai(CClientDC *pdc)
{
	x1 = x1 -20;
	y1 = y1 - 20;
}
void HT::dcphai(CClientDC *pdc)
{
	x1 = x1 + 20;
	y1 = y1+20;
}
HT::~HT()
{
}
