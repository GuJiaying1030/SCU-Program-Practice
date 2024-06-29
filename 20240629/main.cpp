#include <iostream>
#include <SFML/Graphics.hpp>
#include <conio.h>
#include "GlobalVar.h"
#include "WindowsShow.h"
#include "Button.h"
#include "ChooseStateButton.h"
#include "ExitButton.h"

//�����˳���ť
ExitButton ExitButton_(ExitButton_x, ExitButton_y);

int main()
{
    // ���崰�ڶ�����ʾ
    WindowsShow windowsShow;
    windowsShow.ShowWindow();
    // ��ȡ���ڶ��������
    sf::RenderWindow& window = windowsShow.getWindow();

    //����ģʽѡ��ť
    ChooseStateButton MainStoryButton(
        window.getSize().x / 4 - ChooseStateButton::ChooseButtonWidth / 2,
        window.getSize().y / 4 - ChooseStateButton::ChooseButtonHeight / 2
    );
    ChooseStateButton ExploreButton(
        3 * window.getSize().x / 4 - ChooseStateButton::ChooseButtonWidth / 2,
        3 * window.getSize().y / 4 - ChooseStateButton::ChooseButtonHeight / 2
    );

    // ���ִ��ڿ���״̬
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // �������¼�
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        //���֮ǰ��ͼ��
        //window.clear();
        // ���ư�ť
        ExitButton_.DrawButton(window);
        MainStoryButton.DrawButton(window);
        ExploreButton.DrawButton(window);
        //�������е�ͼ��
        window.display();
    }
    return 0;
}