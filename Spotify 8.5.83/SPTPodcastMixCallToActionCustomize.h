//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistAdditionalCallToAction-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"
#import "SPTPodcastMixEditBarViewDelegate-Protocol.h"

@class NSString, NSURL, SPTPodcastMixEditBarView, SPTPodcastMixEditBarViewModel, SPTPodcastMixLogger, UIView;
@protocol GLUEImageLoader, SPTFreeTierPlaylistAdditionalCallToActionDelegate, SPTFreeTierTooltipConditionalPresenter, SPTLinkDispatcher;

@interface SPTPodcastMixCallToActionCustomize : NSObject <SPTPodcastMixEditBarViewDelegate, SPTFreeTierPlaylistAdditionalCallToAction, SPTFreeTierPlaylistModelObserver>
{
    _Bool _customHeaderEnabled;
    NSString *_accessibilityLabel;
    id <SPTFreeTierPlaylistAdditionalCallToActionDelegate> delegate;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSURL *_targetURI;
    id <SPTFreeTierTooltipConditionalPresenter> _tooltipPresenter;
    long long _tooltipMaximumShowCount;
    unsigned long long _ctaIcon;
    id <GLUEImageLoader> _imageLoader;
    SPTPodcastMixLogger *_logger;
    NSString *_playlistName;
    UIView *_ctaButtonWeakReferenceForTooltip;
    SPTPodcastMixEditBarView *_customHeaderView;
    SPTPodcastMixEditBarViewModel *_customHeaderViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPodcastMixEditBarViewModel *customHeaderViewModel; // @synthesize customHeaderViewModel=_customHeaderViewModel;
@property(retain, nonatomic) SPTPodcastMixEditBarView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) __weak UIView *ctaButtonWeakReferenceForTooltip; // @synthesize ctaButtonWeakReferenceForTooltip=_ctaButtonWeakReferenceForTooltip;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(retain, nonatomic) SPTPodcastMixLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) _Bool customHeaderEnabled; // @synthesize customHeaderEnabled=_customHeaderEnabled;
@property(nonatomic) unsigned long long ctaIcon; // @synthesize ctaIcon=_ctaIcon;
@property(nonatomic) long long tooltipMaximumShowCount; // @synthesize tooltipMaximumShowCount=_tooltipMaximumShowCount;
@property(retain, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
@property(retain, nonatomic) NSURL *targetURI; // @synthesize targetURI=_targetURI;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTFreeTierPlaylistAdditionalCallToActionDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)editBarViewDidTapButton;
- (void)addCustomHeaderViewController:(id)arg1;
- (void)didRenderInView:(id)arg1;
- (void)presentSimpleTooltipInViewController:(id)arg1;
- (void)didAppearInViewController:(id)arg1;
@property(readonly, nonatomic) _Bool selected;
@property(readonly, nonatomic) unsigned long long icon;
- (void)openCustomizationPage;
- (void)performAction:(id)arg1;
@property(readonly, nonatomic) _Bool enabled;
- (id)title;
- (id)initWithTargetURI:(id)arg1 linkDispatcher:(id)arg2 tooltipPresenter:(id)arg3 tooltipMaximumShowCount:(long long)arg4 ctaIcon:(unsigned long long)arg5 customHeaderEnabled:(_Bool)arg6 imageLoader:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

