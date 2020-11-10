//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UITextViewDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class GOOTextField, NSString, UITapGestureRecognizer, YTIThumbnailDetails, YTPlaylistPrivacyBadgeView, YTPrivacySelectButton, YTSettingsLinkCell, YTVideoThumbnailView;
@protocol YTPageStyleProvider;

@interface YTPlaylistEditorView : UIScrollView <UITextViewDelegate, YTPageStyleProvider, YTPageStyling, YTThumbnailMapping>
{
    YTVideoThumbnailView *_playlistThumbnailView;
    YTIThumbnailDetails *_thumbnail;
    YTSettingsLinkCell *_contributionSettingsLinkCell;
    UITapGestureRecognizer *_contributionLinkTapGestureRecognizer;
    GOOTextField *_nameTextField;
    GOOTextField *_descriptionTextField;
    YTPrivacySelectButton *_privacyButton;
    YTPlaylistPrivacyBadgeView *_privacyBadgeView;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(readonly, nonatomic) YTPlaylistPrivacyBadgeView *privacyBadgeView; // @synthesize privacyBadgeView=_privacyBadgeView;
@property(readonly, nonatomic) YTPrivacySelectButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(readonly, nonatomic) GOOTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(readonly, nonatomic) GOOTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)arg1;
- (struct CGRect)privacyOptionFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setContributionSettingsLinkStyleVisiblyDisabled;
- (void)setContributionSettingsLinkEnabled:(_Bool)arg1;
- (void)removeContributionSettingsLinkTapTarget;
- (void)showContributionSettingsLinkWithTitle:(id)arg1 tapTarget:(id)arg2 action:(SEL)arg3;
- (void)setPrivacyBadge:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

