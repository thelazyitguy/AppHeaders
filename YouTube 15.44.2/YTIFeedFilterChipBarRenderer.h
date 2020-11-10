//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIRenderer;

@interface YTIFeedFilterChipBarRenderer : GPBMessage <YTInnerTubeSectionRenderers, YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;
- (id)sectionRenderers;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disableCachingUnfilteredFeed; // @dynamic disableCachingUnfilteredFeed;
@property(copy, nonatomic) NSString *elementId; // @dynamic elementId;
@property(nonatomic) _Bool hasDisableCachingUnfilteredFeed; // @dynamic hasDisableCachingUnfilteredFeed;
@property(nonatomic) _Bool hasElementId; // @dynamic hasElementId;
@property(nonatomic) _Bool hasNextButton; // @dynamic hasNextButton;
@property(nonatomic) _Bool hasOnFiltersCleared; // @dynamic hasOnFiltersCleared;
@property(nonatomic) _Bool hasPreviousButton; // @dynamic hasPreviousButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIRenderer *nextButton; // @dynamic nextButton;
@property(retain, nonatomic) YTICommand *onFiltersCleared; // @dynamic onFiltersCleared;
@property(retain, nonatomic) YTIRenderer *previousButton; // @dynamic previousButton;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

