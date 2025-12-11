cmake_minimum_required(VERSION 3.8)
project(IMU_GPS_Fusion)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


find_package(ament_cmake REQUIRED)
find_package(Eigen3 REQUIRED)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(fuse_imu_gps src/imu_gps_fusion.cpp)
target_link_libraries(fuse_imu_gps Eigen3::Eigen)
target_include_directories(fuse_imu_gps PUBLIC include)
install(TARGETS fuse_imu_gps DESTINATION lib/${PROJECT_NAME})

ament_package()
