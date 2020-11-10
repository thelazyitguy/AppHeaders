//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEventSender;

@interface SPTChurnLockEventLogger : NSObject
{
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void)logEventWithType:(id)arg1;
- (void)logChurnLockDowngradeConfirmed;
- (void)logChurnLockDowngradeCancelled;
- (void)logChurnLockActionButtonPressed;
- (void)logChurnLockViewWasPresented;
- (id)initWithEventSender:(id)arg1;

@end

