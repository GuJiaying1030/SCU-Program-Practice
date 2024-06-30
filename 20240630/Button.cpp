#include "Button.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

// ���캯�����ڴ�����ʾ��xλ�ã��ڴ�����ʾ��yλ�ã���ť�߶ȣ���ť��ȣ���ť����ʾ�����֣���ť��Ĭ��͸����128��
Button::Button(float window_x, float window_y, float width, float height, const std::string& text, sf::Uint8 alpha)
    : isHovered(false)
{
    shape.setPosition(window_x, window_y);
    shape.setSize(sf::Vector2f(width, height));
    shape.setFillColor(sf::Color(128, 128, 128, alpha));

    if (!font.loadFromFile("arial.ttf"))
    {
        cout << "�������Ĭ������ʧ�ܣ����������Ƿ���ڣ�����" << endl;
    }

    label.setFont(font);
    label.setString(text);
    label.setCharacterSize(24);
    label.setFillColor(sf::Color::White);
    label.setPosition(window_x, window_y);
}

void Button::DrawButton(sf::RenderWindow& window)
{
    if (isHovered)
    {
        shape.setFillColor(sf::Color::White);
    }
    else
    {
        shape.setFillColor(sf::Color(128, 128, 128, 128));
    }

    window.draw(shape);
    window.draw(label);
}

bool Button::CheckHover(const sf::Vector2f& mousePos)
{
    return shape.getGlobalBounds().contains(mousePos);
}

void Button::SetHovered(bool hovered)
{
    isHovered = hovered;

}