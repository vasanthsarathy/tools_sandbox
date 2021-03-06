// Generated by gencpp from file rosplan_interface_mapping/AddWaypointResponse.msg
// DO NOT EDIT!


#ifndef ROSPLAN_INTERFACE_MAPPING_MESSAGE_ADDWAYPOINTRESPONSE_H
#define ROSPLAN_INTERFACE_MAPPING_MESSAGE_ADDWAYPOINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_interface_mapping
{
template <class ContainerAllocator>
struct AddWaypointResponse_
{
  typedef AddWaypointResponse_<ContainerAllocator> Type;

  AddWaypointResponse_()
    {
    }
  AddWaypointResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddWaypointResponse_

typedef ::rosplan_interface_mapping::AddWaypointResponse_<std::allocator<void> > AddWaypointResponse;

typedef boost::shared_ptr< ::rosplan_interface_mapping::AddWaypointResponse > AddWaypointResponsePtr;
typedef boost::shared_ptr< ::rosplan_interface_mapping::AddWaypointResponse const> AddWaypointResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_interface_mapping

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_interface_mapping/AddWaypointResponse";
  }

  static const char* value(const ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddWaypointResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosplan_interface_mapping::AddWaypointResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_INTERFACE_MAPPING_MESSAGE_ADDWAYPOINTRESPONSE_H
