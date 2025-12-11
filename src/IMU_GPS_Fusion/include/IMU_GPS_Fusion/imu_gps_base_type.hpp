#include <memory>
#include <Eigen/Core>


struct IMUData{
    double timestamp;
    Eigen::Vector3d acceleration;
    Eigen::Vector3d angular_velocity;
}

struct GPSData{
    double timestamp;
    Eigen::Vector3d lla;
    Eigen::Matrix3d covariance;
}

struct IMUState{
    double timestamp;
    Eigen::Vector3d lla;
    Eigen::Vector3d pos_imuframe_globalframe;
    Eigen::Vector3d vel_imuframe_globalframe;
    Eigen::Matrix3d rot_imuframe_globalframe;
    Eigen::Vector3d acceleration_bias;
    Eigen::Vector3d gyro_bias;

    Eigen::Matrix<double, 15, 15> cov;
}