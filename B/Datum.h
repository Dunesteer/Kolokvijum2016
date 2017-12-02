#pragma once
class Datum
{
private:
	short dan, mesec, godina;
public:
	Datum();
	Datum(short d, short m ,short g);
	Datum(int i);
	~Datum();
};

