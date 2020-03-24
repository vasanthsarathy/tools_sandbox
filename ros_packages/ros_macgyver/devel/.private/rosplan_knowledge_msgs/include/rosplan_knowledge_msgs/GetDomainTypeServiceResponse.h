// Generated by gencpp from file rosplan_knowledge_msgs/GetDomainTypeServiceResponse.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINTYPESERVICERESPONSE_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINTYPESERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct GetDomainTypeServiceResponse_
{
  typedef GetDomainTypeServiceResponse_<ContainerAllocator> Type;

  GetDomainTypeServiceResponse_()
    : types()
    , super_types()  {
    }
  GetDomainTypeServiceResponse_(const ContainerAllocator& _alloc)
    : types(_alloc)
    , super_types(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _types_type;
  _types_type types;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _super_types_type;
  _super_types_type super_types;





  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetDomainTypeServiceResponse_

typedef ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<std::allocator<void> > GetDomainTypeServiceResponse;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse > GetDomainTypeServiceResponsePtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse const> GetDomainTypeServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_knowledge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/kinetic/share/diagnostic_msgs/cmake/../msg'], 'rosplan_knowledge_msgs': ['/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan/rosplan_knowledge_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cb6e21c43cdf2ec143646b3aeb9fd3d";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cb6e21c43cdf2ecULL;
  static const uint64_t static_value2 = 0x143646b3aeb9fd3dULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetDomainTypeServiceResponse";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] types\n\
string[] super_types\n\
\n\
";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.types);
      stream.next(m.super_types);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDomainTypeServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "types[]" << std::endl;
    for (size_t i = 0; i < v.types.size(); ++i)
    {
      s << indent << "  types[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.types[i]);
    }
    s << indent << "super_types[]" << std::endl;
    for (size_t i = 0; i < v.super_types.size(); ++i)
    {
      s << indent << "  super_types[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.super_types[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINTYPESERVICERESPONSE_H
