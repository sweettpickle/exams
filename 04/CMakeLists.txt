cmake_minimum_required(VERSION 3.15)
project(04 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(04
#        ft_list.h rev_wstr.c rostring.c
        ft_split.c ft_list_foreach.c sort_list.c)
