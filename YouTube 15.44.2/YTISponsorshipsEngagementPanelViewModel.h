//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEngagementPanelViewModel-Protocol.h"

@class NSString, YTICommand, YTIShowSponsorshipsEngagementPanelCommand, YTISponsorshipsOfferListRenderer;

@interface YTISponsorshipsEngagementPanelViewModel : NSObject <YTEngagementPanelViewModel>
{
    YTICommand *_command;
    YTIShowSponsorshipsEngagementPanelCommand *_sponsorshipsEngagementPanelCommand;
    YTISponsorshipsOfferListRenderer *_offerListRenderer;
}

+ (id)sponsorshipsEngagementPanelViewModelForCommand:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTICommand *command; // @synthesize command=_command;
- (int)autoplay;
- (int)resizability;
- (id)sectionListRenderer;
- (id)engagementPanel;
- (id)visualElement;
- (id)openStyle;
- (id)headerRenderer;
- (id)contentModel;
- (_Bool)disablePullRefresh;
- (_Bool)isAdsHeaderRenderer;
- (_Bool)shouldRetainVideoHeight;
- (_Bool)shouldShowCountBadge;
- (_Bool)shouldHideBottomShadow;
- (id)subheader;
- (id)informationButton;
- (id)actionButton;
- (id)subtitle;
- (id)overflowMenu;
- (id)headerIconTapCommand;
- (int)headerIconStyle;
- (id)thumbnail;
- (void)updateSortFilterSubMenuRenderer:(id)arg1;
- (id)sortFilterSubMenuRenderer;
- (id)headerContexualInfo;
- (id)headerTitle;
- (id)panelIdentifier;
- (void)setOfferListRenderer:(id)arg1;
- (id)initWithCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
