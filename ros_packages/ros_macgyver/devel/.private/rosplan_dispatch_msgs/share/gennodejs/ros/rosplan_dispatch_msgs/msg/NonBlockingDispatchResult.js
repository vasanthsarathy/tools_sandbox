// Auto-generated. Do not edit!

// (in-package rosplan_dispatch_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class NonBlockingDispatchResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.goal_achieved = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('goal_achieved')) {
        this.goal_achieved = initObj.goal_achieved
      }
      else {
        this.goal_achieved = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type NonBlockingDispatchResult
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [goal_achieved]
    bufferOffset = _serializer.bool(obj.goal_achieved, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type NonBlockingDispatchResult
    let len;
    let data = new NonBlockingDispatchResult(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [goal_achieved]
    data.goal_achieved = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a message object
    return 'rosplan_dispatch_msgs/NonBlockingDispatchResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7e14a3412cb82ba736fcf0fad2853ed3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    bool success # True if the dispatch was successful
    bool goal_achieved # True if the goal is achieved after the dispatching
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new NonBlockingDispatchResult(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.goal_achieved !== undefined) {
      resolved.goal_achieved = msg.goal_achieved;
    }
    else {
      resolved.goal_achieved = false
    }

    return resolved;
    }
};

module.exports = NonBlockingDispatchResult;
