#include "RotationalJoint.hpp"

smurf::RotationalJoint::RotationalJoint(smurf::Frame* sourceFrame, smurf::Frame* targetFrame, 
                                        const std::string& provider, const std::string& port, 
                                        const std::string& driverName, base::JointLimitRange& limits, 
                                        const Eigen::Affine3d& sourceToAxis, const Eigen::Vector3d& rotationAxis): 
                                        Joint(sourceFrame, targetFrame, provider, port, driverName, limits, sourceToAxis), 
                                        rotationAxis(rotationAxis){}
                                        
smurf::RotationalJoint::RotationalJoint(smurf::Frame* sourceFrame, smurf::Frame* targetFrame, 
                                        const std::string& provider, const std::string& port, 
                                        const std::string& driverName, base::JointLimitRange& limits, 
                                        const Eigen::Affine3d& sourceToAxis, const Eigen::Vector3d& rotationAxis, 
                                        const Eigen::Affine3d& parentToJointOrigin, boost::shared_ptr<urdf::Joint> jointModel): 
                                        Joint(sourceFrame, targetFrame, provider, port, driverName, limits, sourceToAxis, parentToJointOrigin, jointModel), 
                                        rotationAxis(rotationAxis){}