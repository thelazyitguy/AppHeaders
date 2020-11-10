//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIActiveViewDisplayMeasurement, YTIPromotedSparkles15ClickContent, YTIPromotedSparklesTextCtdContent, YTIRenderer;

@interface YTIPromotedSparklesTextCtdWatch15ClickRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIActiveViewDisplayMeasurement *activeView; // @dynamic activeView;
@property(retain, nonatomic) NSMutableArray *clickLocationTargetsArray; // @dynamic clickLocationTargetsArray;
@property(readonly, nonatomic) unsigned long long clickLocationTargetsArray_Count; // @dynamic clickLocationTargetsArray_Count;
@property(retain, nonatomic) YTIRenderer *closeButton; // @dynamic closeButton;
@property(retain, nonatomic) YTIPromotedSparklesTextCtdContent *content; // @dynamic content;
@property(nonatomic) _Bool hasActiveView; // @dynamic hasActiveView;
@property(nonatomic) _Bool hasCloseButton; // @dynamic hasCloseButton;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasMutedAdStateRenderer; // @dynamic hasMutedAdStateRenderer;
@property(nonatomic) _Bool hasOnePointFiveClickContent; // @dynamic hasOnePointFiveClickContent;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) YTIRenderer *mutedAdStateRenderer; // @dynamic mutedAdStateRenderer;
@property(retain, nonatomic) YTIPromotedSparkles15ClickContent *onePointFiveClickContent; // @dynamic onePointFiveClickContent;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

