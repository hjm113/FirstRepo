// Generated by gencpp from file spencer_tracking_msgs/DetectedPersons.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_DETECTEDPERSONS_H
#define SPENCER_TRACKING_MSGS_MESSAGE_DETECTEDPERSONS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_tracking_msgs/DetectedPerson.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct DetectedPersons_
{
  typedef DetectedPersons_<ContainerAllocator> Type;

  DetectedPersons_()
    : header()
    , detections()  {
    }
  DetectedPersons_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >> _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedPersons_

typedef ::spencer_tracking_msgs::DetectedPersons_<std::allocator<void> > DetectedPersons;

typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPersons > DetectedPersonsPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPersons const> DetectedPersonsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator1> & lhs, const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator1> & lhs, const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38e416cebb5dfd7363bde91113e7f3bd";
  }

  static const char* value(const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38e416cebb5dfd73ULL;
  static const uint64_t static_value2 = 0x63bde91113e7f3bdULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/DetectedPersons";
  }

  static const char* value(const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message with all currently detected persons\n"
"#\n"
"\n"
"Header                  header          # Header containing timestamp etc. of this message\n"
"DetectedPerson[]        detections      # All persons that are currently being detected\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: spencer_tracking_msgs/DetectedPerson\n"
"# Message describing a detection of a person\n"
"#\n"
"\n"
"# Unique id of the detection, monotonically increasing over time\n"
"uint64          detection_id\n"
"\n"
"# (Pseudo-)probabilistic value between 0.0 and 1.0 describing the detector's confidence in the detection\n"
"float64         confidence\n"
"\n"
"# 3D pose (position + orientation) of the *center* of the detection\n"
"# check covariance to see which dimensions are actually set! unset dimensions shall have a covariance > 9999\n"
"geometry_msgs/PoseWithCovariance    pose    \n"
"\n"
"# Sensor modality / detector type, see example constants below. \n"
"# used e.g. later in tracking to check which tracks have been visually confirmed\n"
"string          modality            \n"
"\n"
"                                    \n"
"string          MODALITY_GENERIC_LASER_2D = laser2d\n"
"string          MODALITY_GENERIC_LASER_3D = laser3d\n"
"string          MODALITY_GENERIC_MONOCULAR_VISION = mono\n"
"string          MODALITY_GENERIC_STEREO_VISION = stereo\n"
"string          MODALITY_GENERIC_RGBD = rgbd\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedPersons_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::DetectedPersons_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_DETECTEDPERSONS_H
