//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMdeScheduledPublishingUpdateRequestParams_Remove, YTIMdeScheduledPublishingUpdateRequestParams_Set;

@interface YTIMdeScheduledPublishingUpdateRequestParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int operationOneOfCase; // @dynamic operationOneOfCase;
@property(retain, nonatomic) YTIMdeScheduledPublishingUpdateRequestParams_Remove *remove; // @dynamic remove;
@property(retain, nonatomic) YTIMdeScheduledPublishingUpdateRequestParams_Set *set; // @dynamic set;

@end

