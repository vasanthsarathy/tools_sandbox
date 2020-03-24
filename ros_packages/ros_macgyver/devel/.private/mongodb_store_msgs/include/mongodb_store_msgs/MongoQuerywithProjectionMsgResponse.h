// Generated by gencpp from file mongodb_store_msgs/MongoQuerywithProjectionMsgResponse.msg
// DO NOT EDIT!


#ifndef MONGODB_STORE_MSGS_MESSAGE_MONGOQUERYWITHPROJECTIONMSGRESPONSE_H
#define MONGODB_STORE_MSGS_MESSAGE_MONGOQUERYWITHPROJECTIONMSGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mongodb_store_msgs/SerialisedMessage.h>
#include <mongodb_store_msgs/StringPairList.h>

namespace mongodb_store_msgs
{
template <class ContainerAllocator>
struct MongoQuerywithProjectionMsgResponse_
{
  typedef MongoQuerywithProjectionMsgResponse_<ContainerAllocator> Type;

  MongoQuerywithProjectionMsgResponse_()
    : messages()
    , metas()  {
    }
  MongoQuerywithProjectionMsgResponse_(const ContainerAllocator& _alloc)
    : messages(_alloc)
    , metas(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::mongodb_store_msgs::SerialisedMessage_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mongodb_store_msgs::SerialisedMessage_<ContainerAllocator> >::other >  _messages_type;
  _messages_type messages;

   typedef std::vector< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::other >  _metas_type;
  _metas_type metas;





  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MongoQuerywithProjectionMsgResponse_

typedef ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<std::allocator<void> > MongoQuerywithProjectionMsgResponse;

typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse > MongoQuerywithProjectionMsgResponsePtr;
typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse const> MongoQuerywithProjectionMsgResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f348d453c2d7347807f66360b61cd0ef";
  }

  static const char* value(const ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf348d453c2d73478ULL;
  static const uint64_t static_value2 = 0x07f66360b61cd0efULL;
};

template<class ContainerAllocator>
struct DataType< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mongodb_store_msgs/MongoQuerywithProjectionMsgResponse";
  }

  static const char* value(const ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
SerialisedMessage[] messages\n\
StringPairList[] metas\n\
\n\
\n\
================================================================================\n\
MSG: mongodb_store_msgs/SerialisedMessage\n\
# type to of the serialised message\n\
string type\n\
# the serialised message\n\
uint8[] msg\n\
================================================================================\n\
MSG: mongodb_store_msgs/StringPairList\n\
StringPair[] pairs\n\
\n\
================================================================================\n\
MSG: mongodb_store_msgs/StringPair\n\
string first\n\
string second\n\
";
  }

  static const char* value(const ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.messages);
      stream.next(m.metas);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MongoQuerywithProjectionMsgResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mongodb_store_msgs::MongoQuerywithProjectionMsgResponse_<ContainerAllocator>& v)
  {
    s << indent << "messages[]" << std::endl;
    for (size_t i = 0; i < v.messages.size(); ++i)
    {
      s << indent << "  messages[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mongodb_store_msgs::SerialisedMessage_<ContainerAllocator> >::stream(s, indent + "    ", v.messages[i]);
    }
    s << indent << "metas[]" << std::endl;
    for (size_t i = 0; i < v.metas.size(); ++i)
    {
      s << indent << "  metas[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "    ", v.metas[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MONGODB_STORE_MSGS_MESSAGE_MONGOQUERYWITHPROJECTIONMSGRESPONSE_H