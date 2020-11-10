//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTStreamzCueState-Protocol.h>

@class GSZCounter, NSString;
@protocol GSZStreamzService;

@interface YTStreamzCueState : NSObject <YTStreamzCueState>
{
    id <GSZStreamzService> _streamzService;
    GSZCounter *_counter;
}

- (void).cxx_destruct;
- (void)incrementBy:(long long)arg1 withIsCueStartTimeChanged:(_Bool)arg2 hasPredictStartCuepoint:(_Bool)arg3 hasStartCuepoint:(_Bool)arg4 hasContinueCuepoint:(_Bool)arg5 hasStopCuepoint:(_Bool)arg6;
- (void)incrementWithIsCueStartTimeChanged:(_Bool)arg1 hasPredictStartCuepoint:(_Bool)arg2 hasStartCuepoint:(_Bool)arg3 hasContinueCuepoint:(_Bool)arg4 hasStopCuepoint:(_Bool)arg5;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

