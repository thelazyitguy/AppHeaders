//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufGeneratedMessage.h"

#import "DYNProtoWebPushNotificationEventOrBuilder-Protocol.h"
#import "DYNWebPushNotificationEventProtocol-Protocol.h"

@class NSString;
@protocol DYNMobileLocalNotificationProtocol, DYNWebPushNotificationProtocol;

@interface DYNProtoWebPushNotificationEvent : ComGoogleProtobufGeneratedMessage <DYNWebPushNotificationEventProtocol, DYNProtoWebPushNotificationEventOrBuilder>
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getDescriptor;
@property(readonly, nonatomic) id <DYNMobileLocalNotificationProtocol> mobileLocalNotification;
@property(readonly, nonatomic) id <DYNWebPushNotificationProtocol> webPushNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
