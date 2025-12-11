cmake_minimum_required(VERSION 3.8)
project(IMU2Odometry)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()




add_executable(helloworld src/imu_to_odometry.cpp)
target_include_directories(helloworld PUBLIC include)
ament_target_dependencies(helloworld geometry_msgs nav_msgs sensor_msgs rclcpp)
install(TARGETS helloworld DESTINATION lib/${PROJECT_NAME})



ament_package()
