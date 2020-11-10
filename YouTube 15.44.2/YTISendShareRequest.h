//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIInnerTubeContext, YTIShareExternallyParams, YTISharedObjectParams;

@interface YTISendShareRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasOsSystemNotificationSetting; // @dynamic hasOsSystemNotificationSetting;
@property(nonatomic) _Bool hasShareExternallyParams; // @dynamic hasShareExternallyParams;
@property(nonatomic) _Bool hasSharedObjectParams; // @dynamic hasSharedObjectParams;
@property(nonatomic) int osSystemNotificationSetting; // @dynamic osSystemNotificationSetting;
@property(retain, nonatomic) YTIShareExternallyParams *shareExternallyParams; // @dynamic shareExternallyParams;
@property(retain, nonatomic) YTISharedObjectParams *sharedObjectParams; // @dynamic sharedObjectParams;

@end

