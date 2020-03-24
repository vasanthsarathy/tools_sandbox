// Generated by gencpp from file mongodb_store_msgs/MongoUpdateMsgRequest.msg
// DO NOT EDIT!


#ifndef MONGODB_STORE_MSGS_MESSAGE_MONGOUPDATEMSGREQUEST_H
#define MONGODB_STORE_MSGS_MESSAGE_MONGOUPDATEMSGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mongodb_store_msgs/StringPairList.h>
#include <mongodb_store_msgs/StringPairList.h>
#include <mongodb_store_msgs/SerialisedMessage.h>
#include <mongodb_store_msgs/StringPairList.h>

namespace mongodb_store_msgs
{
template <class ContainerAllocator>
struct MongoUpdateMsgRequest_
{
  typedef MongoUpdateMsgRequest_<ContainerAllocator> Type;

  MongoUpdateMsgRequest_()
    : database()
    , collection()
    , upsert(false)
    , message_query()
    , meta_query()
    , message()
    , meta()  {
    }
  MongoUpdateMsgRequest_(const ContainerAllocator& _alloc)
    : database(_alloc)
    , collection(_alloc)
    , upsert(false)
    , message_query(_alloc)
    , meta_query(_alloc)
    , message(_alloc)
    , meta(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _database_type;
  _database_type database;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _collection_type;
  _collection_type collection;

   typedef uint8_t _upsert_type;
  _upsert_type upsert;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _message_query_type;
  _message_query_type message_query;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _meta_query_type;
  _meta_query_type meta_query;

   typedef  ::mongodb_store_msgs::SerialisedMessage_<ContainerAllocator>  _message_type;
  _message_type message;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _meta_type;
  _meta_type meta;





  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MongoUpdateMsgRequest_

typedef ::mongodb_store_msgs::MongoUpdateMsgRequest_<std::allocator<void> > MongoUpdateMsgRequest;

typedef boost::shared_ptr< ::mongodb_store_msgs::MongoUpdateMsgRequest > MongoUpdateMsgRequestPtr;
typedef boost::shared_ptr< ::mongodb_store_msgs::MongoUpdateMsgRequest const> MongoUpdateMsgRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d87a90aa8c3d8f4cf31305f10951711";
  }

  static const char* value(const ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d87a90aa8c3d8f4ULL;
  static const uint64_t static_value2 = 0xcf31305f10951711ULL;
};

template<class ContainerAllocator>
struct DataType< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mongodb_store_msgs/MongoUpdateMsgRequest";
  }

  static const char* value(const ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
string database\n\
string collection\n\
\n\
bool upsert\n\
\n\
StringPairList message_query\n\
\n\
StringPairList meta_query\n\
\n\
SerialisedMessage message\n\
\n\
StringPairList meta\n\
\n\
================================================================================\n\
MSG: mongodb_store_msgs/StringPairList\n\
StringPair[] pairs\n\
\n\
================================================================================\n\
MSG: mongodb_store_msgs/StringPair\n\
string first\n\
string second\n\
\n\
================================================================================\n\
MSG: mongodb_store_msgs/SerialisedMessage\n\
# type to of the serialised message\n\
string type\n\
# the serialised message\n\
uint8[] msg\n\
";
  }

  static const char* value(const ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.database);
      stream.next(m.collection);
      stream.next(m.upsert);
      stream.next(m.message_query);
      stream.next(m.meta_query);
      stream.next(m.message);
      stream.next(m.meta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MongoUpdateMsgRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mongodb_store_msgs::MongoUpdateMsgRequest_<ContainerAllocator>& v)
  {
    s << indent << "database: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.database);
    s << indent << "collection: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.collection);
    s << indent << "upsert: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.upsert);
    s << indent << "message_query: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.message_query);
    s << indent << "meta_query: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.meta_query);
    s << indent << "message: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::SerialisedMessage_<ContainerAllocator> >::stream(s, indent + "  ", v.message);
    s << indent << "meta: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.meta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MONGODB_STORE_MSGS_MESSAGE_MONGOUPDATEMSGREQUEST_H
