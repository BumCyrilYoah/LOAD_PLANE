#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED


#define COLORS " bgcrmyw-BGCRMYW"


class Console {
public:
     Console();
     static void print(std::string txt, char color[2]) {
          int fg, bg;
          for(fg = 0; fg < 16 && COLORS[fg] != color[0];fg++);
          for(bg = 0; bg < 16 && COLORS[bg] != color[1];bg++);
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), fg + bg * 16);
          std::cout << txt;
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
     }
     static int UIWidth() {
          CONSOLE_SCREEN_BUFFER_INFO s;
          GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &s);
          return s.dwSize.X;
     }

     static int UIHeight() {
          CONSOLE_SCREEN_BUFFER_INFO s;
          GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &s);
          return s.dwSize.Y;
     }

     static void cls() {
          COORD tl = {0, 0};
          CONSOLE_SCREEN_BUFFER_INFO s;
          HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
          GetConsoleScreenBufferInfo(console, &s);
          DWORD written, cells = s.dwSize.X * s.dwSize.Y;
          FillConsoleOutputCharacter(console, ' ', cells, tl, &written);
          FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
          SetConsoleCursorPosition(console, tl);
     }
     static void clsu(int y) {
          COORD tl = {0, (short)y};
          CONSOLE_SCREEN_BUFFER_INFO s;
          HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
          GetConsoleScreenBufferInfo(console, &s);
          DWORD written, cells = s.dwSize.X * (s.dwSize.Y - y);
          FillConsoleOutputCharacter(console, ' ', cells, tl, &written);
          FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
          SetConsoleCursorPosition(console, tl);
     }

     static int ask_options(std::string question, std::string *options, int num) {
          CONSOLE_SCREEN_BUFFER_INFO s;
          HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
          GetConsoleScreenBufferInfo(console, &s);

          COORD origin = s.dwCursorPosition;
          int Swidth = s.dwSize.X;

          char op;
          int choice = -1;
          while(1) {
               clsu(origin.Y);
               if(choice != -1) {
                    if(choice < 0 || choice >= num) {
                              std::cout << "WRONG CHOICE";
                    } else {
                         return choice;
                    }
               }
               std::cout << question << std::endl;

               for(int i = 0; i < num; i++) {
                    std::cout << i + 1 << ") " << options[i] << std::endl;
               }
               while(!kbhit()) Sleep(500);
               char opt = getch();
               choice = ((int)opt) - ((int)'1');
          }
          return -1;
     }
};

#endif // UI_H_INCLUDED
