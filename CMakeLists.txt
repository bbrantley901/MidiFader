cmake_minimum_required(VERSION 3.13)


# initialize pico-sdk from submodule
include(pico-sdk/pico_sdk_init.cmake)

project(MidiFader CXX C ASM) 

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(hello_world
    main.c
)

target_link_libraries(hello_world pico_stdlib)

pico_add_extra_outputs(hello_world)