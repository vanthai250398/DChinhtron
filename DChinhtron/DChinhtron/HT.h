#pragma once
class HT
{
private:
	int x1, y1, x2, y2;
public:
	CString c;
	void thietlap(int x1, int y1, int x2, int y2);
	void ve(CClientDC *pdc);
	void dclen(CClientDC *pdc);
	void dcxuong(CClientDC *pdc);
	void dctrai(CClientDC *pdc);
	void dcphai(CClientDC *pdc);
	void pentrang(CClientDC *pdc);
	void penden(CClientDC *pdc);
	HT();
	~HT();
};

