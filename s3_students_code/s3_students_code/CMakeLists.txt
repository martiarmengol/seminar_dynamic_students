cmake_minimum_required(VERSION 3.15)
project(seminar_dynamic_students)

set(CMAKE_C_STANDARD 11)

add_executable(seminar_dynamic_students
        main.c
        common.h
        seminar_3.c seminar_3.h)

add_custom_command(TARGET seminar_dynamic_students POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${PROJECT_SOURCE_DIR}/resources/
        $<TARGET_FILE_DIR:seminar_dynamic_students>/)
