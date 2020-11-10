//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppleBridgePerfEvent : NSObject
{
    double _enqueueTime;
    double _dequeueTime;
    double _jsCallTime;
    double _jsCompleteTime;
    double _invokeTime;
    double _completeTime;
}

+ (id)perfEventWithEnqueueDate:(id)arg1 dequeueDate:(id)arg2 jsCallDate:(id)arg3 jsCompleteDate:(id)arg4;
+ (id)perfEventWithInvokeDate:(id)arg1 completeDate:(id)arg2;
@property(readonly, nonatomic) double completeTime; // @synthesize completeTime=_completeTime;
@property(readonly, nonatomic) double invokeTime; // @synthesize invokeTime=_invokeTime;
@property(readonly, nonatomic) double jsCompleteTime; // @synthesize jsCompleteTime=_jsCompleteTime;
@property(readonly, nonatomic) double jsCallTime; // @synthesize jsCallTime=_jsCallTime;
@property(readonly, nonatomic) double dequeueTime; // @synthesize dequeueTime=_dequeueTime;
@property(readonly, nonatomic) double enqueueTime; // @synthesize enqueueTime=_enqueueTime;
- (void)send;
- (id)initWithEnqueueDate:(id)arg1 dequeueDate:(id)arg2 jsCallDate:(id)arg3 jsCompleteDate:(id)arg4;
- (id)initWithInvokeDate:(id)arg1 completeDate:(id)arg2;

@end
