//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface SGWPPCircle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int circleIdOneOfCase; // @dynamic circleIdOneOfCase;
@property(nonatomic) int circleType; // @dynamic circleType;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool enabledForSharing; // @dynamic enabledForSharing;
@property(nonatomic) _Bool hasCircleType; // @dynamic hasCircleType;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasEnabledForSharing; // @dynamic hasEnabledForSharing;
@property(nonatomic) _Bool hasMemberCount; // @dynamic hasMemberCount;
@property(nonatomic) _Bool hasVisibility; // @dynamic hasVisibility;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int memberCount; // @dynamic memberCount;
@property(nonatomic) int systemGroup; // @dynamic systemGroup;
@property(nonatomic) int visibility; // @dynamic visibility;

@end
