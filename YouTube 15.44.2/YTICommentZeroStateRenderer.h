//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIFormattedString, YTILoggingDirectives;

@interface YTICommentZeroStateRenderer : GPBMessage
{
}

+ (id)descriptor;
- (int)priority;

// Remaining properties
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

