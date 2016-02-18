include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runEngineTests
        Vector2_test.cpp Vector3_test.cpp)

target_link_libraries(runEngineTests gtest gtest_main)
target_link_libraries(runEngineTests Engine)