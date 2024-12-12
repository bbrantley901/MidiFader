cmake_minimum_required(VERSION 3.13)


# initialize pico-sdk from submodule
include(pico-sdk/pico_sdk_init.cmake)

project(MidiFader
        VERSION 1.0.0
        DESCRIPTION "MidiFader Device"
        LANGUAGES CXX C ASM) 

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(hello_world
    main.c
    tinyusb/src/class/midi/midi_device.c
)

target_include_directories(hello_world PUBLIC
    tinyusb/src/*
    .
)
target_link_libraries(hello_world
                      pico_stdlib
                      tinyusb_device)

pico_add_extra_outputs(hello_world)