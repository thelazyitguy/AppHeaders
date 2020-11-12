//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIBadgeSupportedRenderers, YTICommand, YTIFormattedString;

@interface YTIUnpluggedTenXBlackoutRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBadgeSupportedRenderers *badge; // @dynamic badge;
@property(retain, nonatomic) YTIFormattedString *blackoutReason; // @dynamic blackoutReason;
@property(nonatomic) _Bool hasBadge; // @dynamic hasBadge;
@property(nonatomic) _Bool hasBlackoutReason; // @dynamic hasBlackoutReason;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasRangeEndPositionUsec; // @dynamic hasRangeEndPositionUsec;
@property(nonatomic) _Bool hasRangeStartPositionUsec; // @dynamic hasRangeStartPositionUsec;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) long long rangeEndPositionUsec; // @dynamic rangeEndPositionUsec;
@property(nonatomic) long long rangeStartPositionUsec; // @dynamic rangeStartPositionUsec;
@property(nonatomic) int style; // @dynamic style;

@end
