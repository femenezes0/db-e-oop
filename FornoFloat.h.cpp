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
    FornoFloat(float tForno, float tbEstanho, float eEletrica, float gNatural, float agInd, float aComp)
    {
        tempForno = tForno;
        tempBanhoEstanho = tbEstanho;
        energiaEletrica = eEletrica;
        gasNatural = gNatural;
        aguaIndustrial = agInd;
        arComprimido = aComp;
    }
    /*Registrar e exportar dados de temperatura, consumo de energia, g�s, �gua e ar comprimido para an�lise de
    efici�ncia e preven��o de falhas.*/
    virtual ~FornoFloat();
    void ExibirDados()
    {
        cout << "Temperatura do forno: " << tempForno << " �C\n";
        cout << "Temperatura do banho de estanho: " << tempBanhoEstanho << " �C\n";
        cout << "Consumo de energia el�trica: " << energiaEletrica << " kWh\n";
        cout << "Consumo de g�s natural: " << gasNatural << " Nm�\n";
        cout << "Consumo de �gua industrial: " << aguaIndustrial << " litros\n";
        cout << "Consumo de ar comprimido: " << arComprimido << " bar\n";
    }

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
