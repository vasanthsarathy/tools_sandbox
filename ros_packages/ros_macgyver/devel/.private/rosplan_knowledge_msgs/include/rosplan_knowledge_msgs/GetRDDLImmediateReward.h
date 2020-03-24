// Generated by gencpp from file rosplan_knowledge_msgs/GetRDDLImmediateReward.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETRDDLIMMEDIATEREWARD_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETRDDLIMMEDIATEREWARD_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/GetRDDLImmediateRewardRequest.h>
#include <rosplan_knowledge_msgs/GetRDDLImmediateRewardResponse.h>


namespace rosplan_knowledge_msgs
{

struct GetRDDLImmediateReward
{

typedef GetRDDLImmediateRewardRequest Request;
typedef GetRDDLImmediateRewardResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetRDDLImmediateReward
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateReward > {
  static const char* value()
  {
    return "837ccfec14d9d69a332bf7294d27c502";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetRDDLImmediateReward&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateReward > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetRDDLImmediateReward";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetRDDLImmediateReward&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardRequest> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateReward > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateReward >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetRDDLImmediateRewardRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardRequest> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateReward > 
template<>
struct DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateReward >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetRDDLImmediateRewardRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardResponse> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateReward > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetRDDLImmediateReward >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetRDDLImmediateRewardResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardResponse> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateReward > 
template<>
struct DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateRewardResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetRDDLImmediateReward >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetRDDLImmediateRewardResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETRDDLIMMEDIATEREWARD_H
