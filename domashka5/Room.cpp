#include "Room.h"
#include "Human.h"
#include <iostream>
#include <locale>
#include <windows.h>

    void Room::SetCountRoom(int count_room)
    {
        if (count_room > 0)
        {
            this->count_room = count_room;
        }
        else
            cout << "�� ������� �����!";
    }
    int Room::GetCountRoom() const
    {
        return count_room;
    }

    void Room::SetHeight(float height)
    {
        if (height > 0)
        {
            this->height = height;
        }
        else
            cout << "�� ������� �����!";
    }
    int Room::GetHeight() const
    {
        return height;
    }

    void Room::SetWidth(float width)
    {
        if (width > 0)
        {
            this->width = width;
        }
        else
            cout << "�� ������� �����!";
    }
    float Room::GetWidth() const
    {
        return width;
    }

    void Room::SetCountAngle(float count_angle)
    {
        if (count_angle > 4)
        {
            this->count_angle = count_angle;
        }
        else
            cout << "�� ������� �����!";
    }
    float Room::GetCountAngle() const
    {
        return count_angle;
    }

    void Room::SetColorWall(string color_wall)
    {
        if (color_wall != " ")
        {
            this->color_wall = color_wall;
        }
        else
            cout << "�� ������o!";
    }
    string Room::GetColorWall() const
    {
        return color_wall;
    }

    void Room::TheRoomIsVentilated()
    {
        cout << "������ ������������..." << endl;
    }
    void Room::TheRoomIsCleaned()
    {
        cout << "������� �����������...." << endl;
    }
    void Room::TheRoomIsClosed(Human human)
    {
        if (stan_room < false)
        {
            cout << "� �������� �����..." << endl;
            human.Sits();
            return;
        }
        else
        {
            cout << "� ������ �����..." << endl;
            human.Sits();
            return;
        }
    }
    void Room::TheRoomIsOpen()
    {
        cout << "������ ��������..." << endl;
    }
    void Room::TheRoomIsNotLit()
    {
        cout << "������ �� ����������..." << endl;
    }