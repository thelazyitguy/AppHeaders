//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIPivotBarItemPresentationStyle, YTITabRendererPresentationStyle, YTIUpdateBrowseTabNewContentHintSupportedRenderers;

@interface YTIUpdateBrowseTabNewContentAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int deliveryTimestampSec; // @dynamic deliveryTimestampSec;
@property(nonatomic) _Bool hasDeliveryTimestampSec; // @dynamic hasDeliveryTimestampSec;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasPivotStyle; // @dynamic hasPivotStyle;
@property(nonatomic) _Bool hasPresentationStyle; // @dynamic hasPresentationStyle;
@property(nonatomic) _Bool hasRefreshTab; // @dynamic hasRefreshTab;
@property(nonatomic) _Bool hasTabIdentifier; // @dynamic hasTabIdentifier;
@property(nonatomic) _Bool hasUnseenItemCount; // @dynamic hasUnseenItemCount;
@property(retain, nonatomic) YTIUpdateBrowseTabNewContentHintSupportedRenderers *hint; // @dynamic hint;
@property(retain, nonatomic) YTIPivotBarItemPresentationStyle *pivotStyle; // @dynamic pivotStyle;
@property(retain, nonatomic) YTITabRendererPresentationStyle *presentationStyle; // @dynamic presentationStyle;
@property(nonatomic) _Bool refreshTab; // @dynamic refreshTab;
@property(copy, nonatomic) NSString *tabIdentifier; // @dynamic tabIdentifier;
@property(nonatomic) long long unseenItemCount; // @dynamic unseenItemCount;

@end

