// Generated by gencpp from file rosplan_dispatch_msgs/PlanResult.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_PLANRESULT_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_PLANRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct PlanResult_
{
  typedef PlanResult_<ContainerAllocator> Type;

  PlanResult_()
    : result_status()  {
    }
  PlanResult_(const ContainerAllocator& _alloc)
    : result_status(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_status_type;
  _result_status_type result_status;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> const> ConstPtr;

}; // struct PlanResult_

typedef ::rosplan_dispatch_msgs::PlanResult_<std::allocator<void> > PlanResult;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanResult > PlanResultPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanResult const> PlanResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosplan_dispatch_msgs': ['/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan/rosplan_dispatch_msgs/msg', '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_dispatch_msgs/share/rosplan_dispatch_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/kinetic/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "313411de2c1c77ce96678865cae2f3a7";
  }

  static const char* value(const ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x313411de2c1c77ceULL;
  static const uint64_t static_value2 = 0x96678865cae2f3a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/PlanResult";
  }

  static const char* value(const ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result definition\n\
string result_status\n\
";
  }

  static const char* value(const ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::PlanResult_<ContainerAllocator>& v)
  {
    s << indent << "result_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_PLANRESULT_H
