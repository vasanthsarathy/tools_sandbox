// Generated by gencpp from file mongodb_store/MongoUpdateRequest.msg
// DO NOT EDIT!


#ifndef MONGODB_STORE_MESSAGE_MONGOUPDATEREQUEST_H
#define MONGODB_STORE_MESSAGE_MONGOUPDATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mongodb_store
{
template <class ContainerAllocator>
struct MongoUpdateRequest_
{
  typedef MongoUpdateRequest_<ContainerAllocator> Type;

  MongoUpdateRequest_()
    : db()
    , collection()
    , query()
    , update()  {
    }
  MongoUpdateRequest_(const ContainerAllocator& _alloc)
    : db(_alloc)
    , collection(_alloc)
    , query(_alloc)
    , update(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _db_type;
  _db_type db;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _collection_type;
  _collection_type collection;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _query_type;
  _query_type query;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _update_type;
  _update_type update;





  typedef boost::shared_ptr< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MongoUpdateRequest_

typedef ::mongodb_store::MongoUpdateRequest_<std::allocator<void> > MongoUpdateRequest;

typedef boost::shared_ptr< ::mongodb_store::MongoUpdateRequest > MongoUpdateRequestPtr;
typedef boost::shared_ptr< ::mongodb_store::MongoUpdateRequest const> MongoUpdateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mongodb_store

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b149bc6a0fea76ae96dfb48fcf24065";
  }

  static const char* value(const ::mongodb_store::MongoUpdateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b149bc6a0fea76aULL;
  static const uint64_t static_value2 = 0xe96dfb48fcf24065ULL;
};

template<class ContainerAllocator>
struct DataType< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mongodb_store/MongoUpdateRequest";
  }

  static const char* value(const ::mongodb_store::MongoUpdateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string db\n\
string collection\n\
string query\n\
string update\n\
";
  }

  static const char* value(const ::mongodb_store::MongoUpdateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.db);
      stream.next(m.collection);
      stream.next(m.query);
      stream.next(m.update);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MongoUpdateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mongodb_store::MongoUpdateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mongodb_store::MongoUpdateRequest_<ContainerAllocator>& v)
  {
    s << indent << "db: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.db);
    s << indent << "collection: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.collection);
    s << indent << "query: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.query);
    s << indent << "update: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.update);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MONGODB_STORE_MESSAGE_MONGOUPDATEREQUEST_H
