// Generated by gencpp from file mongodb_store_msgs/StringPair.msg
// DO NOT EDIT!


#ifndef MONGODB_STORE_MSGS_MESSAGE_STRINGPAIR_H
#define MONGODB_STORE_MSGS_MESSAGE_STRINGPAIR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mongodb_store_msgs
{
template <class ContainerAllocator>
struct StringPair_
{
  typedef StringPair_<ContainerAllocator> Type;

  StringPair_()
    : first()
    , second()  {
    }
  StringPair_(const ContainerAllocator& _alloc)
    : first(_alloc)
    , second(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _first_type;
  _first_type first;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _second_type;
  _second_type second;





  typedef boost::shared_ptr< ::mongodb_store_msgs::StringPair_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mongodb_store_msgs::StringPair_<ContainerAllocator> const> ConstPtr;

}; // struct StringPair_

typedef ::mongodb_store_msgs::StringPair_<std::allocator<void> > StringPair;

typedef boost::shared_ptr< ::mongodb_store_msgs::StringPair > StringPairPtr;
typedef boost::shared_ptr< ::mongodb_store_msgs::StringPair const> StringPairConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mongodb_store_msgs::StringPair_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mongodb_store_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'mongodb_store_msgs': ['/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store_msgs/msg', '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store_msgs/share/mongodb_store_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::StringPair_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::StringPair_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::StringPair_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0d0db6e21f3fc1eb068f9cc22ba8beb";
  }

  static const char* value(const ::mongodb_store_msgs::StringPair_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0d0db6e21f3fc1eULL;
  static const uint64_t static_value2 = 0xb068f9cc22ba8bebULL;
};

template<class ContainerAllocator>
struct DataType< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mongodb_store_msgs/StringPair";
  }

  static const char* value(const ::mongodb_store_msgs::StringPair_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string first\n\
string second\n\
";
  }

  static const char* value(const ::mongodb_store_msgs::StringPair_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.first);
      stream.next(m.second);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringPair_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mongodb_store_msgs::StringPair_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mongodb_store_msgs::StringPair_<ContainerAllocator>& v)
  {
    s << indent << "first: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.first);
    s << indent << "second: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.second);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MONGODB_STORE_MSGS_MESSAGE_STRINGPAIR_H
