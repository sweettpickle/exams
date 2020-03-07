cmake_minimum_required(VERSION 3.15)
project(04 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(04
#        ft_itoa.c
        ft_list.h
        ft_list_foreach.c fprime.c ft_itoa_base.c)
#        ft_list_remove_if.c
#        ft_split.c
#        rev_wstr.c
#        rostring.c
#        sort_int_tab.c
#        sort_list.c)
