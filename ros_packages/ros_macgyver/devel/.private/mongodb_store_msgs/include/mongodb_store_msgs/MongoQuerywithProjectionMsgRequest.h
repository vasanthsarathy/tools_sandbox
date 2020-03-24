// Generated by gencpp from file mongodb_store_msgs/MongoQuerywithProjectionMsgRequest.msg
// DO NOT EDIT!


#ifndef MONGODB_STORE_MSGS_MESSAGE_MONGOQUERYWITHPROJECTIONMSGREQUEST_H
#define MONGODB_STORE_MSGS_MESSAGE_MONGOQUERYWITHPROJECTIONMSGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mongodb_store_msgs/StringPairList.h>
#include <mongodb_store_msgs/StringPairList.h>
#include <mongodb_store_msgs/StringPairList.h>
#include <mongodb_store_msgs/StringPairList.h>

namespace mongodb_store_msgs
{
template <class ContainerAllocator>
struct MongoQuerywithProjectionMsgRequest_
{
  typedef MongoQuerywithProjectionMsgRequest_<ContainerAllocator> Type;

  MongoQuerywithProjectionMsgRequest_()
    : database()
    , collection()
    , type()
    , single(false)
    , limit(0)
    , message_query()
    , meta_query()
    , sort_query()
    , projection_query()  {
    }
  MongoQuerywithProjectionMsgRequest_(const ContainerAllocator& _alloc)
    : database(_alloc)
    , collection(_alloc)
    , type(_alloc)
    , single(false)
    , limit(0)
    , message_query(_alloc)
    , meta_query(_alloc)
    , sort_query(_alloc)
    , projection_query(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _database_type;
  _database_type database;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _collection_type;
  _collection_type collection;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef uint8_t _single_type;
  _single_type single;

   typedef uint16_t _limit_type;
  _limit_type limit;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _message_query_type;
  _message_query_type message_query;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _meta_query_type;
  _meta_query_type meta_query;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _sort_query_type;
  _sort_query_type sort_query;

   typedef  ::mongodb_store_msgs::StringPairList_<ContainerAllocator>  _projection_query_type;
  _projection_query_type projection_query;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  JSON_QUERY;

  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MongoQuerywithProjectionMsgRequest_

typedef ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<std::allocator<void> > MongoQuerywithProjectionMsgRequest;

typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest > MongoQuerywithProjectionMsgRequestPtr;
typedef boost::shared_ptr< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest const> MongoQuerywithProjectionMsgRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MongoQuerywithProjectionMsgRequest_<ContainerAllocator>::JSON_QUERY =
        
          "\"jnsdfskajd_fmgs.dlf\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3dce95387658eb89ce25e603efe525cd";
  }

  static const char* value(const ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3dce95387658eb89ULL;
  static const uint64_t static_value2 = 0xce25e603efe525cdULL;
};

template<class ContainerAllocator>
struct DataType< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mongodb_store_msgs/MongoQuerywithProjectionMsgRequest";
  }

  static const char* value(const ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
string JSON_QUERY=\"jnsdfskajd_fmgs.dlf\"\n\
\n\
string database\n\
string collection\n\
\n\
string type\n\
\n\
bool single\n\
\n\
uint16 limit\n\
\n\
StringPairList message_query\n\
\n\
StringPairList meta_query\n\
\n\
StringPairList sort_query\n\
\n\
StringPairList projection_query\n\
\n\
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

  static const char* value(const ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.database);
      stream.next(m.collection);
      stream.next(m.type);
      stream.next(m.single);
      stream.next(m.limit);
      stream.next(m.message_query);
      stream.next(m.meta_query);
      stream.next(m.sort_query);
      stream.next(m.projection_query);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MongoQuerywithProjectionMsgRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mongodb_store_msgs::MongoQuerywithProjectionMsgRequest_<ContainerAllocator>& v)
  {
    s << indent << "database: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.database);
    s << indent << "collection: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.collection);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "single: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.single);
    s << indent << "limit: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.limit);
    s << indent << "message_query: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.message_query);
    s << indent << "meta_query: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.meta_query);
    s << indent << "sort_query: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.sort_query);
    s << indent << "projection_query: ";
    s << std::endl;
    Printer< ::mongodb_store_msgs::StringPairList_<ContainerAllocator> >::stream(s, indent + "  ", v.projection_query);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MONGODB_STORE_MSGS_MESSAGE_MONGOQUERYWITHPROJECTIONMSGREQUEST_H