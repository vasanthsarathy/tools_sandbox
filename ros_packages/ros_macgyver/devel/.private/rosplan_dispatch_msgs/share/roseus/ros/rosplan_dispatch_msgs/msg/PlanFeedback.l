;; Auto-generated. Do not edit!


(when (boundp 'rosplan_dispatch_msgs::PlanFeedback)
  (if (not (find-package "ROSPLAN_DISPATCH_MSGS"))
    (make-package "ROSPLAN_DISPATCH_MSGS"))
  (shadow 'PlanFeedback (find-package "ROSPLAN_DISPATCH_MSGS")))
(unless (find-package "ROSPLAN_DISPATCH_MSGS::PLANFEEDBACK")
  (make-package "ROSPLAN_DISPATCH_MSGS::PLANFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude PlanFeedback.msg.html


(defclass rosplan_dispatch_msgs::PlanFeedback
  :super ros::object
  :slots (_current_phase _current_status _percent_completed ))

(defmethod rosplan_dispatch_msgs::PlanFeedback
  (:init
   (&key
    ((:current_phase __current_phase) "")
    ((:current_status __current_status) "")
    ((:percent_completed __percent_completed) 0)
    )
   (send-super :init)
   (setq _current_phase (string __current_phase))
   (setq _current_status (string __current_status))
   (setq _percent_completed (round __percent_completed))
   self)
  (:current_phase
   (&optional __current_phase)
   (if __current_phase (setq _current_phase __current_phase)) _current_phase)
  (:current_status
   (&optional __current_status)
   (if __current_status (setq _current_status __current_status)) _current_status)
  (:percent_completed
   (&optional __percent_completed)
   (if __percent_completed (setq _percent_completed __percent_completed)) _percent_completed)
  (:serialization-length
   ()
   (+
    ;; string _current_phase
    4 (length _current_phase)
    ;; string _current_status
    4 (length _current_status)
    ;; int32 _percent_completed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _current_phase
       (write-long (length _current_phase) s) (princ _current_phase s)
     ;; string _current_status
       (write-long (length _current_status) s) (princ _current_status s)
     ;; int32 _percent_completed
       (write-long _percent_completed s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _current_phase
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _current_phase (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _current_status
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _current_status (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _percent_completed
     (setq _percent_completed (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get rosplan_dispatch_msgs::PlanFeedback :md5sum-) "791f3441963c8bf65c82e3e2bc873576")
(setf (get rosplan_dispatch_msgs::PlanFeedback :datatype-) "rosplan_dispatch_msgs/PlanFeedback")
(setf (get rosplan_dispatch_msgs::PlanFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# feedback definition
string current_phase
string current_status
int32 percent_completed



")



(provide :rosplan_dispatch_msgs/PlanFeedback "791f3441963c8bf65c82e3e2bc873576")


