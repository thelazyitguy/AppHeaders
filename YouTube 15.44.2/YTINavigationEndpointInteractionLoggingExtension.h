//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIClientData, YTIInteractionLoggingClientData, YTIVisualElement;

@interface YTINavigationEndpointInteractionLoggingExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cloneCsn; // @dynamic cloneCsn;
@property(copy, nonatomic) NSString *csn; // @dynamic csn;
@property(nonatomic) _Bool hasCloneCsn; // @dynamic hasCloneCsn;
@property(nonatomic) _Bool hasCsn; // @dynamic hasCsn;
@property(nonatomic) _Bool hasIsSanitizedEndpoint; // @dynamic hasIsSanitizedEndpoint;
@property(nonatomic) _Bool hasPageVeType; // @dynamic hasPageVeType;
@property(nonatomic) _Bool hasParentClientData; // @dynamic hasParentClientData;
@property(nonatomic) _Bool hasParentCsn; // @dynamic hasParentCsn;
@property(nonatomic) _Bool hasParentInteractionLoggingClientData; // @dynamic hasParentInteractionLoggingClientData;
@property(nonatomic) _Bool hasParentVeCounter; // @dynamic hasParentVeCounter;
@property(nonatomic) _Bool hasParentVeType; // @dynamic hasParentVeType;
@property(nonatomic) _Bool hasPlaybackVe; // @dynamic hasPlaybackVe;
@property(nonatomic) _Bool isSanitizedEndpoint; // @dynamic isSanitizedEndpoint;
@property(nonatomic) int pageVeType; // @dynamic pageVeType;
@property(retain, nonatomic) YTIClientData *parentClientData; // @dynamic parentClientData;
@property(copy, nonatomic) NSString *parentCsn; // @dynamic parentCsn;
@property(retain, nonatomic) YTIInteractionLoggingClientData *parentInteractionLoggingClientData; // @dynamic parentInteractionLoggingClientData;
@property(nonatomic) int parentVeCounter; // @dynamic parentVeCounter;
@property(nonatomic) int parentVeType; // @dynamic parentVeType;
@property(retain, nonatomic) YTIVisualElement *playbackVe; // @dynamic playbackVe;

@end

