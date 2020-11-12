//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNStreamzNotificationPayloadReceivedCount-Protocol.h"

@class GSZCounter, NSString;
@protocol GSZStreamzService;

@interface DYNStreamzNotificationPayloadReceivedCount : NSObject <DYNStreamzNotificationPayloadReceivedCount>
{
    id <GSZStreamzService> _streamzService;
    GSZCounter *_counter;
}

- (void).cxx_destruct;
- (void)incrementBy:(long long)arg1 withSdkType:(id)arg2 notificationType:(id)arg3 appName:(id)arg4;
- (void)incrementWithSdkType:(id)arg1 notificationType:(id)arg2 appName:(id)arg3;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
