//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMRAssembler, CMRPushNotification;
@protocol PushNotificationHandlerDelegate;

@protocol PushNotificationHandler <NSObject>
- (void)beginGeneratingNotificationUI;
- (id)initWithDelegate:(id <PushNotificationHandlerDelegate>)arg1 assembler:(CMRAssembler *)arg2 notification:(CMRPushNotification *)arg3;
@end
