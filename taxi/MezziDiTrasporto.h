#ifndef MEZZIDITRASPORTO_H
#define MEZZIDITRASPORTO_H

#include <iostream>

class MezziDiTrasporto
{
public:
	MezziDiTrasporto();
	
	virtual ~MezziDiTrasporto() {};

	void SetXPersona(double var) { xPersona = var; };
	double GetXPersona() { return xPersona; };
	void SetYPersona(double var) { yPersona = var; };
	double GetYPersona() { return yPersona; };
	void SetCodiceNumerico(int var) { codiceNumerico = var; };
	int GetCodiceNumerico() { return codiceNumerico; };
private:
	double xPersona; //metri
	double yPersona; //metri
	int codiceNumerico;

};

MezziDiTrasporto::MezziDiTrasporto()
{
	xPersona = 0;
	yPersona = 0;
	codiceNumerico = 0;
}

#endif // !MEZZIDITRASPORTO_H
