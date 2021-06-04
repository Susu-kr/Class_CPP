#pragma once
#ifndef DMA_H_
#define DMA_H_
#include <iostream>


class baseDMA
{
private:
	char * label;
	int rating;
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);

};

// DMA 사용하지 않는 파생 클래스 파괴자 필요 x, 암시적 복사 생성자 암시적 대입 연산자를 사용
class lacksDMA : public baseDMA {
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
	lacksDMA(const char * c, const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA & ls);
};

class hasDMA : public baseDMA {
private:
	char * style;
public:
	hasDMA(const char * s = "none", const char * l = "null", int r = 0);
	hasDMA(const char * s, const baseDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & hs);
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & hs);
};
#endif // !DMA_H_


