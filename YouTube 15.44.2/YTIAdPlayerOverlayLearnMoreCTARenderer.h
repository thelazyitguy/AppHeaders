//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString;

@interface YTIAdPlayerOverlayLearnMoreCTARenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *clickthroughEndpoint; // @dynamic clickthroughEndpoint;
@property(nonatomic) _Bool hasClickthroughEndpoint; // @dynamic hasClickthroughEndpoint;
@property(nonatomic) _Bool hasVisitAdvertiserText; // @dynamic hasVisitAdvertiserText;
@property(retain, nonatomic) YTIFormattedString *visitAdvertiserText; // @dynamic visitAdvertiserText;

@end

