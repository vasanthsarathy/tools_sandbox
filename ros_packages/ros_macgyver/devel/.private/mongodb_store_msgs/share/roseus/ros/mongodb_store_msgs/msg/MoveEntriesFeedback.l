;; Auto-generated. Do not edit!


(when (boundp 'mongodb_store_msgs::MoveEntriesFeedback)
  (if (not (find-package "MONGODB_STORE_MSGS"))
    (make-package "MONGODB_STORE_MSGS"))
  (shadow 'MoveEntriesFeedback (find-package "MONGODB_STORE_MSGS")))
(unless (find-package "MONGODB_STORE_MSGS::MOVEENTRIESFEEDBACK")
  (make-package "MONGODB_STORE_MSGS::MOVEENTRIESFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude MoveEntriesFeedback.msg.html


(defclass mongodb_store_msgs::MoveEntriesFeedback
  :super ros::object
  :slots (_completed ))

(defmethod mongodb_store_msgs::MoveEntriesFeedback
  (:init
   (&key
    ((:completed __completed) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _completed __completed)
   self)
  (:completed
   (&optional __completed)
   (if __completed (setq _completed __completed)) _completed)
  (:serialization-length
   ()
   (+
    ;; string[] _completed
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _completed)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _completed
     (write-long (length _completed) s)
     (dolist (elem _completed)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _completed
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _completed (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _completed i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get mongodb_store_msgs::MoveEntriesFeedback :md5sum-) "a62bad29223cd7da9d6f04397aee5b94")
(setf (get mongodb_store_msgs::MoveEntriesFeedback :datatype-) "mongodb_store_msgs/MoveEntriesFeedback")
(setf (get mongodb_store_msgs::MoveEntriesFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# the collections which have been operated on so far
string[] completed


")



(provide :mongodb_store_msgs/MoveEntriesFeedback "a62bad29223cd7da9d6f04397aee5b94")


