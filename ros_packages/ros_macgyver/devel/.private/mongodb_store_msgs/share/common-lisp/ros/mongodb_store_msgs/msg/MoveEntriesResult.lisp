; Auto-generated. Do not edit!


(cl:in-package mongodb_store_msgs-msg)


;//! \htmlinclude MoveEntriesResult.msg.html

(cl:defclass <MoveEntriesResult> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass MoveEntriesResult (<MoveEntriesResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveEntriesResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveEntriesResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mongodb_store_msgs-msg:<MoveEntriesResult> is deprecated: use mongodb_store_msgs-msg:MoveEntriesResult instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveEntriesResult>) ostream)
  "Serializes a message object of type '<MoveEntriesResult>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveEntriesResult>) istream)
  "Deserializes a message object of type '<MoveEntriesResult>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveEntriesResult>)))
  "Returns string type for a message object of type '<MoveEntriesResult>"
  "mongodb_store_msgs/MoveEntriesResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveEntriesResult)))
  "Returns string type for a message object of type 'MoveEntriesResult"
  "mongodb_store_msgs/MoveEntriesResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveEntriesResult>)))
  "Returns md5sum for a message object of type '<MoveEntriesResult>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveEntriesResult)))
  "Returns md5sum for a message object of type 'MoveEntriesResult"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveEntriesResult>)))
  "Returns full string definition for message of type '<MoveEntriesResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveEntriesResult)))
  "Returns full string definition for message of type 'MoveEntriesResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveEntriesResult>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveEntriesResult>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveEntriesResult
))
