set(TARGET_NAME myapp)

# Automatically add the current source and build directories to the include path
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(${TARGET_NAME} hello.c main.c)

install(TARGETS ${TARGET_NAME} DESTINATION bin)