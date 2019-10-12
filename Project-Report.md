# CarND-Controls-PID Tunning Report
Self-Driving Car Engineer Nanodegree Program

---

## Coefficients of PID
PID stands for 3 coefficients of PID controller.
* P stands for the ability of adjust the steering angle for a sudden change of the road especially large angle
* I stands for the ability to keep the car from oversteering, to get rid of overshoot of the controller
* D stands for the ability to overcome the steady error of the car, steady error comes from the system error for the whole system like sensors or some other physical devices


## Tunning Process
I start all coefficient from 1.

*p = 1, i = 0, d = 0
    *First I want to find a good p value, so I set i and d 0
    *It looks like p = 1 is too large for this car, because it is too sensitive for the change of angle

*p = 0.5, i = 0, d = 0
    *Second I set p as 0.5, and keep i and d 0
    *It looks like p = 0.5 is still too large for this car, because it is too sensitive for the change of angle, but better than the previous step

*p = 0.1, i = 0, d = 0
    *I set p as 0.1, and keep i and d 0
    *It looks like p = 0.1 is ok for this car, now it is time to adjust d


*p = 0.1, i = 0, d = 1
    *I set d as 1
    *It looks like p = 0.1 and d = 1 is much better for the performance, but I can still see overshoot now it is time to adjust i.
    
*p = 0.1, i = 0, d = 2
    *I set d as 2
    *It looks like p = 0.1 and d = 2 is ok for this car, now it is time to adjust i.
    

*p = 0.1, i = 1, d = 2
    *I set i as 1
    *i is too large

*p = 0.1, i = 0.1, d = 2
    *I set i as 0.1
    *i is still too large

*p = 0.1, i = 0.01, d = 2
    *I set i as 0.01
    *i is too large
    
*p = 0.1, i = 0.001, d = 2
    *I set i as 0.001
    *i is ok
    
*p = 0.1, i = 0.0005, d = 2
    *I set i as 0.001
    *i is ok
    
    
    
    
    
    
    
