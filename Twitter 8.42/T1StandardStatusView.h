//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ConversationThreadedReplyConnectorsHost-Protocol.h>
#import <T1Twitter/T1LayoutableStatusView-Protocol.h>
#import <T1Twitter/TFNComposableViewHost-Protocol.h>

@class NSString, T1StatusLiveEngagementManager, T1StatusViewAccessibility, T1StatusViewCombinedViewModel, T1VoiceStatusPlaybackObserver, TFNComposableViewSet, TFNReusableViewCache, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1AutoplayViewContainer, T1BasicStatusView, T1CardViewDelegate, T1StatusViewEventHandler, T1StatusViewInlineActions, T1StatusViewInlineImages, T1StatusViewLayoutState, T1StatusViewModel, TFSTwitterScribableItem;

@interface T1StandardStatusView : UIView <TFNComposableViewHost, T1ConversationThreadedReplyConnectorsHost, T1LayoutableStatusView>
{
    T1StatusViewCombinedViewModel *_viewModel;
    T1StatusViewAccessibility *_accessibility;
    T1VoiceStatusPlaybackObserver *_voiceStatusPlaybackObserver;
    _Bool _isInCell;
    id <T1StatusViewEventHandler> _eventHandler;
    TFSTwitterScribeContext *_scribeContext;
    id <TFSTwitterScribableItem> _scribableItem;
    TFNComposableViewSet *_viewSet;
    CDUnknownBlockType _updateSelectionStateOptionsBlock;
    CDUnknownBlockType _selectedStateAnimationCompletionBlock;
}

+ (id)_t1_viewAdapterSet;
+ (id)layoutStateGenerator;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectedStateAnimationCompletionBlock; // @synthesize selectedStateAnimationCompletionBlock=_selectedStateAnimationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType updateSelectionStateOptionsBlock; // @synthesize updateSelectionStateOptionsBlock=_updateSelectionStateOptionsBlock;
@property(readonly, nonatomic) TFNComposableViewSet *viewSet; // @synthesize viewSet=_viewSet;
@property(readonly, nonatomic) id <TFSTwitterScribableItem> scribableItem; // @synthesize scribableItem=_scribableItem;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1StatusViewEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)accessibilityLabel;
- (void)_t1_updateAccessibilityCustomActions;
- (void)_t1_updateAccessibilityValue;
- (id)accessibilityCustomActions;
- (void)openURL;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) __weak id <T1CardViewDelegate> cardViewDelegate;
@property(retain, nonatomic) TFNReusableViewCache *reusableViewCache;
@property(nonatomic) unsigned long long conversationConnectorType;
@property(readonly, nonatomic) struct CGRect avatarViewFrame;
- (void)beginComposingInlineReply;
@property(nonatomic) _Bool shouldPauseLivePipelineUpdates;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager;
@property(readonly, nonatomic) id <T1StatusViewInlineActions> inlineActions;
@property(readonly, nonatomic) id <T1StatusViewInlineImages> inlineImages;
@property(readonly, nonatomic) id <T1AutoplayViewContainer> autoplayPlayerContainer;
@property(readonly, nonatomic) unsigned long long secondaryAttachmentType;
@property(readonly, nonatomic) unsigned long long attachmentType;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *mediaForwardStatusView;
@property(readonly, nonatomic) UIView *visibleAutoTranslateBodyView;
@property(readonly, nonatomic) UIView *visibleAutoTranslateEducationView;
@property(readonly, nonatomic) UIView *visibleTranslateTweetView;
@property(readonly, nonatomic) UIView *visibleInlineReplyView;
@property(readonly, nonatomic) UIView *visibleInlineActionsView;
@property(readonly, nonatomic) UIView *visibleTweetstormIndicatorView;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *visibleQuotedStatusView;
@property(readonly, nonatomic) UIView *visibleCardForwardView;
@property(readonly, nonatomic) UIView *visibleMediaForwardView;
@property(readonly, nonatomic) UIView *visibleBodyTextView;
@property(readonly, nonatomic) UIView *visibleConversationContextView;
@property(readonly, nonatomic) UIView *visibleAuthorView;
@property(readonly, nonatomic) UIView *visibleAvatarView;
- (void)updateTimestamp;
@property(readonly, nonatomic) TFNTwitterAccount *account;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel;
- (void)_t1_updateAccessibility:(id)arg1;
- (void)_t1_animateSelectionUpdate:(id)arg1;
- (void)_t1_applyViewModelUpdate:(id)arg1;
- (id)_t1_viewSetUpdatesWithInfo:(id)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)updateSelectedState;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (id)calculatedLayoutMetrics;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)_t1_updateLayoutState;
@property(retain, nonatomic) id <T1StatusViewLayoutState> layoutState;
- (id)initWithFrame:(struct CGRect)arg1 isInCell:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

