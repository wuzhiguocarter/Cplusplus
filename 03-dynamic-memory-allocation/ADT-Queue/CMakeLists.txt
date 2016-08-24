# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#message("Build Type:"${CMAKE_BUILD_TYPE} ${CMAKE_CXX_FLAGS})
#set(CMAKE_C_COMPILER /c/MinGW/bin/gcc.exe)
#set(CMAKE_CXX_COMPILER /c/MinGW/bin/g++.exe)

# 项目信息
project (BANK)

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable(bank_test ${DIR_SRCS})