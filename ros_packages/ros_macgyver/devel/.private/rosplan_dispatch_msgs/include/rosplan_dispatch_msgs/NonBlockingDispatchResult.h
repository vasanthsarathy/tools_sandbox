// Generated by gencpp from file rosplan_dispatch_msgs/NonBlockingDispatchResult.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHRESULT_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHRESULT_H


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
struct NonBlockingDispatchResult_
{
  typedef NonBlockingDispatchResult_<ContainerAllocator> Type;

  NonBlockingDispatchResult_()
    : success(false)
    , goal_achieved(false)  {
    }
  NonBlockingDispatchResult_(const ContainerAllocator& _alloc)
    : success(false)
    , goal_achieved(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef uint8_t _goal_achieved_type;
  _goal_achieved_type goal_achieved;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> const> ConstPtr;

}; // struct NonBlockingDispatchResult_

typedef ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<std::allocator<void> > NonBlockingDispatchResult;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchResult > NonBlockingDispatchResultPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchResult const> NonBlockingDispatchResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosplan_dispatch_msgs': ['/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan/rosplan_dispatch_msgs/msg', '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_dispatch_msgs/share/rosplan_dispatch_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/kinetic/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e14a3412cb82ba736fcf0fad2853ed3";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e14a3412cb82ba7ULL;
  static const uint64_t static_value2 = 0x36fcf0fad2853ed3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/NonBlockingDispatchResult";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
bool success # True if the dispatch was successful\n\
bool goal_achieved # True if the goal is achieved after the dispatching\n\
";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.goal_achieved);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NonBlockingDispatchResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::NonBlockingDispatchResult_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "goal_achieved: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.goal_achieved);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHRESULT_H
