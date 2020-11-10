//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIARCameraData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *activeEffectsArray; // @dynamic activeEffectsArray;
@property(readonly, nonatomic) unsigned long long activeEffectsArray_Count; // @dynamic activeEffectsArray_Count;
@property(copy, nonatomic) NSString *activityType; // @dynamic activityType;
@property(copy, nonatomic) NSString *campaignId; // @dynamic campaignId;
@property(copy, nonatomic) NSString *effectId; // @dynamic effectId;
@property(nonatomic) _Bool hasActivityType; // @dynamic hasActivityType;
@property(nonatomic) _Bool hasCampaignId; // @dynamic hasCampaignId;
@property(nonatomic) _Bool hasEffectId; // @dynamic hasEffectId;
@property(nonatomic) _Bool hasRecordedVideoLengthMs; // @dynamic hasRecordedVideoLengthMs;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) int recordedVideoLengthMs; // @dynamic recordedVideoLengthMs;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

