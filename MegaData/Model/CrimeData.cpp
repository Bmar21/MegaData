//
//  CrimeData.cpp
//  MorningMegaProject
//
//  Created by Cody Henrichsen on 3/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "CrimeData.hpp"
#include <cmath>

CrimeData :: CrimeData()
{
}

string CrimeData :: getDepartment() const
{
    return department;
}

int CrimeData :: getPopulation() const
{
    return population;
}

double CrimeData :: getAllPropertyRates() const
{
    return allPropertyRates;
}

double CrimeData :: getBurglaryRates() const
{
    return burglaryRates;
}

double CrimeData :: getLarcenyRates() const
{
    return larcenyRates;
}

double CrimeData :: getMotorRates() const
{
    return motorRates;
}

double CrimeData :: getAllViolentRates() const
{
    return allViolentRates;
}

double CrimeData :: getAssaultRates() const
{
    return assaultRates;
}

double CrimeData :: getMurderRates() const
{
    return murderRates;
}

double CrimeData :: getRapeRates() const
{
    return rapeRates;
}

double CrimeData :: getRobberyRates() const
{
    return robberyRates;
}

string CrimeData :: getState() const
{
    return state;
}

int CrimeData :: getAllPropertyCrime() const
{
    return allPropertyCrime;
}
int CrimeData :: getAllBurglary() const
{
    return allBurglary;
}

int CrimeData :: getAllLarceny() const
{
    return allLarceny;
}

int CrimeData :: getAllMotor() const
{
    return allMotor;
}

int CrimeData :: getAllViolent() const
{
    return allViolent;
}

int CrimeData :: getAllAssault() const
{
    return allAssault;
}

int CrimeData :: getAllMurder() const
{
    return allMurder;
}

int CrimeData :: getAllRape() const
{
    return allRape;
}

int CrimeData :: getAllRobbery() const
{
    return allRobbery;
}

int CrimeData :: getYear() const
{
    return year;
}

void CrimeData :: setDepartment(const string & department)
{
    this->department = department;
}

void CrimeData :: setPopulation(const int & population)
{
    this->population = population;
}

void CrimeData :: setAllPropertyRates(const double & property)
{
    this->allPropertyRates = property;
}

void CrimeData :: setBurglaryRates(const double & burglary)
{
    this->burglaryRates = burglary;
}

void CrimeData :: setLarcenyRates(const double & larceny)
{
    this->larcenyRates = larceny;
}

void CrimeData :: setMotorRates(const double & motor)
{
    this->motorRates = motor;
}

void CrimeData :: setAllViolentRates(const double & violent)
{
    this->allViolentRates = violent;
}

void CrimeData :: setAssaultRates(const double & assault)
{
    this->assaultRates = assault;
}

void CrimeData :: setMurderRates(const double & murder)
{
    this->murderRates = murder;
}

void CrimeData :: setRapeRates(const double & rape)
{
    this->rapeRates = rape;
}

void CrimeData :: setRobberyRates(const double & robbery)
{
    this->robberyRates = robbery;
}

void CrimeData :: setState(const string & state)
{
    this->state = state;
}

void CrimeData :: setAllPropertyCrime(const int & property)
{
    this->allPropertyCrime = property;
}

void CrimeData :: setAllBurglary(const int & burglary)
{
    this->allBurglary = burglary;
}

void CrimeData :: setAllLarceny(const int & larceny)
{
    this->allLarceny = larceny;
}

void CrimeData :: setAllMotor(const int & motor)
{
    this->allMotor = motor;
}

void CrimeData :: setAllViolent(const int & violent)
{
    this->allViolent = violent;
}

void CrimeData :: setAllAssault(const int & assault)
{
    this->allAssault = assault;
}

void CrimeData :: setAllMurder(const int & murder)
{
    this->allMurder = murder;
}

void CrimeData :: setAllRape(const int & rape)
{
    this->allRape = rape;
}

void CrimeData :: setAllRobbery(const int & robbery)
{
    this->allRobbery = robbery;
}

void CrimeData :: setYear(const int & year)
{
    this->year = year;
}

bool CrimeData :: operator < (const CrimeData & comparedData)
{
    bool thisIsLessCrime = false;
    double comparisonFactor = 0.0;
    
    if(this->getAllViolent() < comparedData.getAllViolent())
    {
        comparisonFactor -= 3;
    }
    else
    {
        comparisonFactor += 3;
    }
    
    if(this->getAllPropertyRates() < comparedData.getAllPropertyRates())
    {
        comparisonFactor -= 2.5;
    }
    else
    {
        comparisonFactor += 2.5;
    }
    
    if(this->getAllViolentRates() < comparedData.getAllViolentRates())
    {
        comparisonFactor -= 5;
    }
    else
    {
        comparisonFactor += 5;
    }
    
    if(this->getMurderRates() < comparedData.getMurderRates())
    {
        comparisonFactor -= 3;
    }
    else
    {
        comparisonFactor += 3;
    }
    
    double populationDifference = (this->getPopulation() - comparedData.getPopulation());
    populationDifference = abs(populationDifference);
    double populationFactor = 0;
    
    if(populationDifference >= 50000 && populationDifference < 250000)
    {
        populationFactor = .5;
    }
    else if(populationDifference >= 250000 && populationDifference < 500000)
    {
        populationFactor = 1.5;
    }
    else if(populationDifference >= 500000 && populationDifference < 1000000)
    {
        populationFactor = 2.0;
    }
    else if(populationDifference >= 1000000)
    {
        populationFactor = 2.5;
    }
    
    comparisonFactor += populationFactor;
    
    if(comparisonFactor < 0)
    {
        thisIsLessCrime = true;
    }
    return thisIsLessCrime;
    
}

bool CrimeData :: operator > (const CrimeData & comparedData)
{
    bool thisIsMoreCrime = false;
    double comparisonFactor = 0.0;
    
    if(this->getAllViolent() > comparedData.getAllViolent())
    {
        comparisonFactor -= 3;
    }
    else
    {
        comparisonFactor += 3;
    }
    
    if(this->getAllPropertyRates() > comparedData.getAllPropertyRates())
    {
        comparisonFactor -= 2.5;
    }
    else
    {
        comparisonFactor += 2.5;
    }
    
    if(this->getAllViolentRates() > comparedData.getAllViolentRates())
    {
        comparisonFactor -= 5;
    }
    else
    {
        comparisonFactor += 5;
    }
    
    if(this->getMurderRates() > comparedData.getMurderRates())
    {
        comparisonFactor -= 3;
    }
    else
    {
        comparisonFactor += 3;
    }
    
    double populationDifference = (this->getPopulation() - comparedData.getPopulation());
    populationDifference = abs(populationDifference);
    double populationFactor = 0;
    
    if(populationDifference >= 50000 && populationDifference < 250000)
    {
        populationFactor = .5;
    }
    else if(populationDifference >= 250000 && populationDifference < 500000)
    {
        populationFactor = 1.5;
    }
    else if(populationDifference >= 500000 && populationDifference < 1000000)
    {
        populationFactor = 2.0;
    }
    else if(populationDifference >= 1000000)
    {
        populationFactor = 2.5;
    }
    
    comparisonFactor += populationFactor;
    
    if(comparisonFactor > 0)
    {
        thisIsMoreCrime = true;
    }
    return thisIsMoreCrime;
    
}

bool CrimeData :: operator == (const CrimeData & compared)
{
    bool isThisTheSame = !(*this < compared) && !(*this > compared);
    
    return isThisTheSame;
}
