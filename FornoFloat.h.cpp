#include<iostream>
#include "FornoFloat.h"
using namespace std;
class FornoFloat
{
private:
    float tempForno;
    float tempBanhoEstanho;
    float energiaEletrica;
    float gasNatural;
    float aguaIndustrial;
    float arComprimido;
public:
FornoFloat(float tForno, float tbEstanho, float eEletrica, float gNatural, float agInd, float aComp);
{
    tempForno = tForno;
    tempBanhoEstanho = tbEstanho;
    energiaEletrica = eEletrica;
    gasNatural = gNatural;
    aguaIndustrial = agInd;
    arComprimido = aComp;
}
/*Registrar e exportar dados de temperatura, consumo de energia, gás, água e ar comprimido para análise de
eficiência e prevenção de falhas.*/
virtual ~FornoFloat();

    float GettempForno()
    {
        return tempForno;
    }
    void SettempForno(float val)
    {
        tempForno = val;
    }
    float GettempBanhoEstanho()
    {
        return tempBanhoEstanho;
    }
    void SettempBanhoEstanho(float val)
    {
        tempBanhoEstanho = val;
    }
    float GetenergiaEletrica()
    {
        return energiaEletrica;
    }
    void SetenergiaEletrica(float val)
    {
        energiaEletrica = val;
    }
    float GetgasNatural()
    {
        return gasNatural;
    }
    void SetgasNatural(float val)
    {
        gasNatural = val;
    }
    float GetaguaIndustrial()
    {
        return aguaIndustrial;
    }
    void SetaguaIndustrial(float val)
    {
        aguaIndustrial = val;
    }
    float GetarComprimido()
    {
        return arComprimido;
    }
    void SetarComprimido(float val)
    {
        arComprimido = val;
    }

};
