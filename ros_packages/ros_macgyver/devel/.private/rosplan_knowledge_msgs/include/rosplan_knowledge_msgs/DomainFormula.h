// Generated by gencpp from file rosplan_knowledge_msgs/DomainFormula.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_DOMAINFORMULA_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_DOMAINFORMULA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <diagnostic_msgs/KeyValue.h>

namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct DomainFormula_
{
  typedef DomainFormula_<ContainerAllocator> Type;

  DomainFormula_()
    : name()
    , typed_parameters()  {
    }
  DomainFormula_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , typed_parameters(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector< ::diagnostic_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::diagnostic_msgs::KeyValue_<ContainerAllocator> >::other >  _typed_parameters_type;
  _typed_parameters_type typed_parameters;





  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> const> ConstPtr;

}; // struct DomainFormula_

typedef ::rosplan_knowledge_msgs::DomainFormula_<std::allocator<void> > DomainFormula;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::DomainFormula > DomainFormulaPtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::DomainFormula const> DomainFormulaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b9c7cfc3aa64764d3a82f96d3671bab1";
  }

  static const char* value(const ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb9c7cfc3aa64764dULL;
  static const uint64_t static_value2 = 0x3a82f96d3671bab1ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/DomainFormula";
  }

  static const char* value(const ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A message used to represent an atomic formula from the domain.\n\
# typed_parameters matches label -> type\n\
string name\n\
diagnostic_msgs/KeyValue[] typed_parameters\n\
\n\
================================================================================\n\
MSG: diagnostic_msgs/KeyValue\n\
string key # what to label this value when viewing\n\
string value # a value to track over time\n\
";
  }

  static const char* value(const ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.typed_parameters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DomainFormula_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::DomainFormula_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "typed_parameters[]" << std::endl;
    for (size_t i = 0; i < v.typed_parameters.size(); ++i)
    {
      s << indent << "  typed_parameters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::diagnostic_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.typed_parameters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_DOMAINFORMULA_H
