//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAttributedString, NSString, PHAsset, _TtC5Slack25SLKAutocompleteParameters, _TtC5Slack31SLKDraftMessageInputPresentable;
@protocol _TtP5Slack39SLKInputAccessoryViewControllerDelegate_;

@protocol _TtP5Slack40SLKInputAccessoryViewControllerInterface_
- (void)updateLayoutWithState:(long long)arg1;
- (void)updateInputSegments;
- (void)handleAtMentionButtonTap;
- (void)setSafeAreaGapDistance:(double)arg1;
- (void)cloudDownloadCancelledWithAsset:(PHAsset *)arg1;
- (void)cloudDownloadProgress:(double)arg1 asset:(PHAsset *)arg2;
@property(nonatomic) _Bool inputEnabled;
- (void)collapseToShortform;
- (void)expandToLongform;
- (void)configureWithAutocompleteVisibilityPreference:(_Bool)arg1;
- (void)invalidateAutocompleteViewPosition;
- (_Bool)isComposerFirstResponder;
- (_Bool)composerResignFirstResponder;
- (_Bool)composerBecomeFirstResponder;
- (_Bool)isEditingMessage;
- (void)cancelEditMessage;
- (void)editMessage:(NSAttributedString *)arg1;
- (void)setDraftMessageInputPresentable:(_TtC5Slack31SLKDraftMessageInputPresentable *)arg1;
- (void)setCurrentComposerText:(NSAttributedString *)arg1;
- (NSAttributedString *)currentComposerText;
- (_Bool)isComposerTextEmpty;
- (void)clearAllComposerContentWithTriggeredBySend:(_Bool)arg1;
- (void)setAutocompleteParameters:(_TtC5Slack25SLKAutocompleteParameters *)arg1;
@property(nonatomic) _Bool broadcastChecked;
- (void)configureWithDisplayType:(long long)arg1 channelDisplayTitle:(NSString *)arg2 channelType:(unsigned long long)arg3 broadcastCheckMarkEventLogger:(void (^)(void))arg4;
- (void)setWithUserIdentifier:(NSString *)arg1;
- (void)setDefaultPlaceholderText:(NSAttributedString *)arg1;
@property(nonatomic) __weak id <_TtP5Slack39SLKInputAccessoryViewControllerDelegate_> delegate;
@end

