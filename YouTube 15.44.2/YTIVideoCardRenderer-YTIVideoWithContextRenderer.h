//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTIVideoCardRenderer.h>

#import "YTVideoCardModel-Protocol.h"

@class NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIVideoCardStyle;

@interface YTIVideoCardRenderer (YTIVideoWithContextRenderer) <YTVideoCardModel>
+ (id)videoCardRendererFromVideoWithContextRenderer:(id)arg1;
- (id)initWithVideoWithContextRenderer:(id)arg1;
@property(readonly, nonatomic) YTIRenderer *offerButton;
@property(readonly, nonatomic) _Bool hasOfferButton;

// Remaining properties
@property(readonly, nonatomic) NSMutableArray *badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) NSMutableArray *buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count;
@property(readonly, nonatomic) YTIFormattedString *bylineText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasBylineText;
@property(readonly, nonatomic) _Bool hasLengthText;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) _Bool hasMetadataText;
@property(readonly, nonatomic) _Bool hasNavigationEndpoint;
@property(readonly, nonatomic) _Bool hasStandaloneBadge;
@property(readonly, nonatomic) _Bool hasStyle;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
@property(readonly, nonatomic) YTIMenuSupportedRenderers *menu;
@property(readonly, nonatomic) YTIFormattedString *metadataText;
@property(readonly, nonatomic) YTICommand *navigationEndpoint;
@property(readonly, nonatomic) NSMutableArray *ownerBadgesArray;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge;
@property(readonly, nonatomic) YTIVideoCardStyle *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) YTIThumbnailDetails *thumbnail;
@property(readonly, nonatomic) NSMutableArray *thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count;
@property(readonly, nonatomic) YTIFormattedString *title;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@end

