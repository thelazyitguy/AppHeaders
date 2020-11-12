//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTIButtonRenderer, YTICommand, YTIElementRenderer, YTIEngagementPanelOpenStyle, YTIEngagementPanelSectionListHeaderSupportedRenderers, YTIEngagementPanelSectionListRenderer, YTIFormattedString, YTIMenuRenderer, YTISortFilterSubMenuRenderer, YTIThumbnailDetails, YTIVisualElement;

@protocol YTEngagementPanelViewModel <NSObject>
- (int)autoplay;
- (int)resizability;
- (YTIVisualElement *)visualElement;
- (YTIEngagementPanelOpenStyle *)openStyle;
- (YTIEngagementPanelSectionListHeaderSupportedRenderers *)headerRenderer;
- (YTIEngagementPanelSectionListRenderer *)sectionListRenderer;
- (id)contentModel;
- (_Bool)disablePullRefresh;
- (_Bool)isAdsHeaderRenderer;
- (void)updateSortFilterSubMenuRenderer:(YTISortFilterSubMenuRenderer *)arg1;
- (_Bool)shouldShowCountBadge;
- (_Bool)shouldHideBottomShadow;
- (_Bool)shouldRetainVideoHeight;
- (YTIButtonRenderer *)informationButton;
- (YTIButtonRenderer *)actionButton;
- (YTICommand *)headerIconTapCommand;
- (int)headerIconStyle;
- (YTIThumbnailDetails *)thumbnail;
- (YTIMenuRenderer *)overflowMenu;
- (YTIElementRenderer *)subheader;
- (YTIFormattedString *)subtitle;
- (YTISortFilterSubMenuRenderer *)sortFilterSubMenuRenderer;
- (YTIFormattedString *)headerContexualInfo;
- (YTIFormattedString *)headerTitle;
- (NSString *)panelIdentifier;
@end
