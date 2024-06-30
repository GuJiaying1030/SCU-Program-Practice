#include "Button.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

// ���캯�����ڴ�����ʾ��xλ�ã��ڴ�����ʾ��yλ�ã���ť�߶ȣ���ť��ȣ���ť����ʾ�����֣���ť��Ĭ��͸����128��
Button::Button(float window_x, float window_y, float width, float height, const std::string& text, sf::Uint8 alpha = 128)
{
    shape.setPosition(window_x, window_y);// ����λ��
    shape.setFillColor(sf::Color(128,  128, 128, alpha));// ������ɫ

    //if (!font.loadFromFile("arial.ttf"))  // ��ȷ������һ����Ϊ"arial.ttf"�������ļ�
    //{
    //    cout << "�������Ĭ������ʧ�ܣ����������Ƿ���ڣ�����" << endl;
    //    // sleep(3);
    //    // return -1;
    //}

    //label.setFont(font);
    //label.setString(text);
    //label.setCharacterSize(24);  // ���������С
    //label.setFillColor(sf::Color::White);  // ����������ɫ
    //label.setPosition(window_x, window_y);  // �����ı���λ��
}

void Button::DrawButton(sf::RenderWindow& window)
{
    window.draw(shape);
    /*window.draw(label);*/
    window.display();
}

