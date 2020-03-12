#include "flood_fill.h"

void print_tab(char **tab, t_point size);

void flood_fill(char **tab, t_point size, t_point begin)
{
    int x = begin.x;
    int y = begin.y;
    t_point p;
    char c;

    c = tab[y][x];
    tab[y][x] = 'F';
    if (y > 0 && tab[y - 1][x] == c)
    {
        p.x = x;
        p.y = y - 1;
        flood_fill(tab, size, p);
    }
    if (x > 0 && tab[y][x - 1] == c)
    {
        p.x = x - 1;
        p.y = y;
        flood_fill(tab, size, p);
    }
    if (y < (size.y - 1) && tab[y + 1][x] == c)
    {
        p.y = y + 1;
        p.x = x;
        flood_fill(tab, size, p);
    }
    if (x < (size.y - 1) && tab[y][x + 1] == c)
    {
        p.x = x + 1;
        p.y = y;
        flood_fill(tab, size, p);
    }

}


//void actual_flood_fill(char **tab, char colour, t_point size, int x, int y)
//{
//    if (x < 0 || y < 0)
//        return ;
//    if (x >= size.x || y >= size.y)
//        return ;
//    if (tab[y][x] != colour)
//        return ;
////    if (x == y)
////        return ;
//    tab[y][x] = 'F';
////    print_tab(tab, size);
//    actual_flood_fill(tab, colour, size, x + 1, y);
//    actual_flood_fill(tab, colour, size, x - 1, y);
//    actual_flood_fill(tab, colour, size, x, y + 1);
//    actual_flood_fill(tab, colour, size, x, y - 1);
//}
//
//void flood_fill(char **tab, t_point size, t_point begin)
//{
//    actual_flood_fill(tab, tab[begin.y][begin.x], size, begin.x, begin.y);
//}