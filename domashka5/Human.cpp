#include "Human.h"
#include <iostream>
#include <locale>
#include <windows.h>

    void Human:: SetGrowth(float growth)
    {
        if (growth > 0 && growth <= 50)
        {
            this->growth = growth;
        }
        else
            cout << "�� �� ������ ���������� ����� ����� ������ (1 - 50)";
    }
    float Human::GetGrowth() const
    {
        return growth;
    }

    void Human::SetHairColor(string hair_color)
    {
        if (hair_color != "white")
        {
            this->hair_color = hair_color;
        }
        else
            cout << "�� �� ������ ���������� ����� ���� �������!";
    }
    string Human::GetHairColor() const
    {
        return hair_color;
    }

    void Human::SetName(string name)
    {
        if (name != " ")
        {
            this->name = name;
        }
        else
            cout << "�� �� ������ ������� ���� ��'�!";
    }
    string Human::GetName() const
    {
        return name;
    }

    void Human::SetGender(string gender)
    {
        if (gender != "male" || gender != "female")
        {
            this->gender = gender;
        }
        else
            cout << "���� ������ �������!";
    }
    string Human::GetGender() const
    {
        return gender;
    }

    void Human::SetAge(int age)
    {
        if (age > 1 && age < 99)
        {
            this->age = age;
        }
        else
            cout << "�� ������� ��������!";
    }
    int Human::GetAge() const
    {
        return age;
    }

    void Human::SetLaugh(string laugh)
    {
        if (laugh != " ")
        {
            this->laugh = laugh;
        }
        else
            cout << "�� �� ���!";
    }
    string Human::GetLaugh() const
    {
        return laugh;
    }

    void Human::SetMassage(string massage)
    {
        if (massage != " ")
        {
            this->massage = massage;
        }
        else
            cout << "�� �� �����������!";
    }
    string Human::GetMassage() const
    {
        return massage;
    }

    void Human::SetEnergy(int energy)
    {
        if (energy > 0 && energy <= 100)
        {
            this->energy = energy;
        }
        else
            cout << "�� �� �����������!";
    }
    int Human::GetEnergy() const
    {
        return energy;
    }

    void Human::SetHungry(int hungry)
    {
        if (hungry > 0 && hungry <= 100)
        {
            this->hungry = hungry;
        }
        else
            cout << "�� �� �����������!";
    }
    int Human::GetHungry() const
    {
        return hungry;
    }

    void Human::Sits()
    {
        cout << name << " ������..." << endl;
        sits = true;
        if (hungry < 90 && energy > 0)
        {
            this->hungry += 5;
            this->energy -= 1;
            return;

        }
        else
            cout << "���� ����" << endl;
    }
    void Human::Drink(string liquid)
    {
        if (energy > 0 && hungry < 90)
        {
            cout << name << " �'�..." << liquid << endl;
            this->energy -= 20;
            this->hungry -= 10;
            return;
        }
        else
            cout << "���������� ������ ��� �� ��������" << endl;
    }
    void Human::Say(string nick)
    {
        if (energy > 0 && hungry < 90)
        {
            cout << "���!" << nick << " ������ ����?" << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "���������� ������ ��� �� ��������" << endl;
    }
    void Human::Laugh()
    {
        if (energy > 0 && hungry < 90)
        {
            cout << laugh << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "���������� ������ ��� �� ��������" << endl;
    }
    void Human::ToFeed()
    {
        if (energy > 0 && hungry < 90)
        {
            cout << name << " ����... " << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "���������� ������ ��� �� ��������" << endl;
    }
    void Human::Print()
    {
        cout << "�����a: " << endl;
        cout << "��'�:" << name << endl;
        cout << "³�:" << age << endl;
        cout << "������: " << energy << "%" << endl;
        cout << "�����: " << hungry << "%" << endl;
    }