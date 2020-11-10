//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTContinuableInnerTubeObject-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIFloatingPillRenderers, YTISectionListDrawerSupportedRenderers, YTISectionListFabSupportedRenderers, YTISectionListHeaderSupportedRenderers, YTISectionListSubMenuSupportedRenderers;

@interface YTISectionListRenderer : GPBMessage <YTContinuableInnerTubeObject, YTInnerTubeSectionRenderers>
{
}

+ (id)descriptor;
- (id)arCampaignRenderer;
- (id)arCameraRenderer;
- (id)contentsKeyForDataSource;
- (id)feedNodeForDataSource;
- (id)sectionRenderers;

// Remaining properties
@property(nonatomic) _Bool canHaveDrawer; // @dynamic canHaveDrawer;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disableSubMenuScroll; // @dynamic disableSubMenuScroll;
@property(retain, nonatomic) YTISectionListDrawerSupportedRenderers *drawer; // @dynamic drawer;
@property(nonatomic) _Bool enableElements; // @dynamic enableElements;
@property(retain, nonatomic) YTISectionListFabSupportedRenderers *fab; // @dynamic fab;
@property(retain, nonatomic) YTIFloatingPillRenderers *floatingPillRenderers; // @dynamic floatingPillRenderers;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasCanHaveDrawer; // @dynamic hasCanHaveDrawer;
@property(nonatomic) _Bool hasDisableSubMenuScroll; // @dynamic hasDisableSubMenuScroll;
@property(nonatomic) _Bool hasDrawer; // @dynamic hasDrawer;
@property(nonatomic) _Bool hasEnableElements; // @dynamic hasEnableElements;
@property(nonatomic) _Bool hasFab; // @dynamic hasFab;
@property(nonatomic) _Bool hasFloatingPillRenderers; // @dynamic hasFloatingPillRenderers;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHideBottomSeparator; // @dynamic hasHideBottomSeparator;
@property(nonatomic) _Bool hasSubMenu; // @dynamic hasSubMenu;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTISectionListHeaderSupportedRenderers *header; // @dynamic header;
@property(nonatomic) _Bool hideBottomSeparator; // @dynamic hideBottomSeparator;
@property(retain, nonatomic) YTISectionListSubMenuSupportedRenderers *subMenu; // @dynamic subMenu;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
