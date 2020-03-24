// Auto-generated. Do not edit!

// (in-package mongodb_store_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SerialisedMessage = require('../msg/SerialisedMessage.js');
let StringPairList = require('../msg/StringPairList.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class MongoInsertMsgRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.database = null;
      this.collection = null;
      this.message = null;
      this.meta = null;
    }
    else {
      if (initObj.hasOwnProperty('database')) {
        this.database = initObj.database
      }
      else {
        this.database = '';
      }
      if (initObj.hasOwnProperty('collection')) {
        this.collection = initObj.collection
      }
      else {
        this.collection = '';
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = new SerialisedMessage();
      }
      if (initObj.hasOwnProperty('meta')) {
        this.meta = initObj.meta
      }
      else {
        this.meta = new StringPairList();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MongoInsertMsgRequest
    // Serialize message field [database]
    bufferOffset = _serializer.string(obj.database, buffer, bufferOffset);
    // Serialize message field [collection]
    bufferOffset = _serializer.string(obj.collection, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = SerialisedMessage.serialize(obj.message, buffer, bufferOffset);
    // Serialize message field [meta]
    bufferOffset = StringPairList.serialize(obj.meta, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MongoInsertMsgRequest
    let len;
    let data = new MongoInsertMsgRequest(null);
    // Deserialize message field [database]
    data.database = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [collection]
    data.collection = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = SerialisedMessage.deserialize(buffer, bufferOffset);
    // Deserialize message field [meta]
    data.meta = StringPairList.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.database.length;
    length += object.collection.length;
    length += SerialisedMessage.getMessageSize(object.message);
    length += StringPairList.getMessageSize(object.meta);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'mongodb_store_msgs/MongoInsertMsgRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd071b179071167c692331b5356e30470';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    string database
    string collection
    SerialisedMessage message
    
    StringPairList meta
    
    ================================================================================
    MSG: mongodb_store_msgs/SerialisedMessage
    # type to of the serialised message
    string type
    # the serialised message
    uint8[] msg
    ================================================================================
    MSG: mongodb_store_msgs/StringPairList
    StringPair[] pairs
    
    ================================================================================
    MSG: mongodb_store_msgs/StringPair
    string first
    string second
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MongoInsertMsgRequest(null);
    if (msg.database !== undefined) {
      resolved.database = msg.database;
    }
    else {
      resolved.database = ''
    }

    if (msg.collection !== undefined) {
      resolved.collection = msg.collection;
    }
    else {
      resolved.collection = ''
    }

    if (msg.message !== undefined) {
      resolved.message = SerialisedMessage.Resolve(msg.message)
    }
    else {
      resolved.message = new SerialisedMessage()
    }

    if (msg.meta !== undefined) {
      resolved.meta = StringPairList.Resolve(msg.meta)
    }
    else {
      resolved.meta = new StringPairList()
    }

    return resolved;
    }
};

class MongoInsertMsgResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.id = null;
    }
    else {
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MongoInsertMsgResponse
    // Serialize message field [id]
    bufferOffset = _serializer.string(obj.id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MongoInsertMsgResponse
    let len;
    let data = new MongoInsertMsgResponse(null);
    // Deserialize message field [id]
    data.id = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.id.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'mongodb_store_msgs/MongoInsertMsgResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bbfcda76036ebbe3d36caf7af80b260c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    string id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MongoInsertMsgResponse(null);
    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: MongoInsertMsgRequest,
  Response: MongoInsertMsgResponse,
  md5sum() { return '1010faffc38f79deac2400dd47256e51'; },
  datatype() { return 'mongodb_store_msgs/MongoInsertMsg'; }
};
