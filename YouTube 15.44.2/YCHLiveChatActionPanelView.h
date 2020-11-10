//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UITextViewDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatActionPanelViewProtocol-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class GIMMe, NSArray, NSString, QTMButton, UIImage, UIImageView, UILabel, YCHLiveChatActionPillButton, YTEmojiController, YTEmojiCustomEmojiParser, YTEmojiTextView, YTEmojiTextViewManager, YTIIcon, YTILiveChatActionPanelSupportedRenderers, YTILiveChatCreatorSupportRenderer, YTILiveChatProductPickerRenderer, YTIMessageRenderer, YTImageView, YTQTMButton, YTThumbnailController;
@protocol YCHLiveChatActionPanelViewDelegate, YCHLiveChatStyleProtocol, YTResponder;

@interface YCHLiveChatActionPanelView : UIView <UITextViewDelegate, YTPageStyling, YCHLiveChatActionPanelViewProtocol>
{
    _Bool _upsellImpressionCommandsExecuted;
    _Bool _handlingTextViewDidChange;
    _Bool _creatorSupportButtonDisabled;
    long long _mode;
    id <YCHLiveChatActionPanelViewDelegate> _delegate;
    YTEmojiTextView *_textView;
    QTMButton *_sendButton;
    YTImageView *_authorImageView;
    id <YTResponder> _parentResponder;
    YTILiveChatActionPanelSupportedRenderers *_actionPanel;
    YTILiveChatProductPickerRenderer *_productPickerRenderer;
    YTIMessageRenderer *_emptyStateMessageRenderer;
    GIMMe *_gimme;
    QTMButton *_customEmojiButton;
    QTMButton *_creatorSupportButton;
    QTMButton *_actionButton;
    QTMButton *_infoButton;
    YCHLiveChatActionPillButton *_upsellButton;
    NSArray *_upsellImpressionCommands;
    YTQTMButton *_restrictedParticipationButton;
    UIImageView *_iconView;
    YTILiveChatCreatorSupportRenderer *_creatorSupportRenderer;
    YTEmojiController *_emojiController;
    UILabel *_countLabel;
    UILabel *_actionSubtitleLabel;
    YTThumbnailController *_thumbnailController;
    id <YCHLiveChatStyleProtocol> _style;
    long long _pageStyle;
    YTEmojiTextViewManager *_textViewManager;
    YTEmojiCustomEmojiParser *_emojiParser;
    YTIIcon *_customEmojiButtonIcon;
    UIImage *_creatorSupportButtonImage;
    UIView *_creatorSupportCircleForAnimation;
    unsigned long long _cachedExcessCharactersCutoff;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cachedExcessCharactersCutoff; // @synthesize cachedExcessCharactersCutoff=_cachedExcessCharactersCutoff;
@property(retain, nonatomic) UIView *creatorSupportCircleForAnimation; // @synthesize creatorSupportCircleForAnimation=_creatorSupportCircleForAnimation;
@property(nonatomic) _Bool creatorSupportButtonDisabled; // @synthesize creatorSupportButtonDisabled=_creatorSupportButtonDisabled;
@property(retain, nonatomic) UIImage *creatorSupportButtonImage; // @synthesize creatorSupportButtonImage=_creatorSupportButtonImage;
@property(retain, nonatomic) YTIIcon *customEmojiButtonIcon; // @synthesize customEmojiButtonIcon=_customEmojiButtonIcon;
@property(nonatomic) _Bool handlingTextViewDidChange; // @synthesize handlingTextViewDidChange=_handlingTextViewDidChange;
@property(readonly, nonatomic) YTEmojiCustomEmojiParser *emojiParser; // @synthesize emojiParser=_emojiParser;
@property(readonly, nonatomic) YTEmojiTextViewManager *textViewManager; // @synthesize textViewManager=_textViewManager;
@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) __weak id <YCHLiveChatStyleProtocol> style; // @synthesize style=_style;
@property(readonly, nonatomic) YTThumbnailController *thumbnailController; // @synthesize thumbnailController=_thumbnailController;
@property(retain, nonatomic) UILabel *actionSubtitleLabel; // @synthesize actionSubtitleLabel=_actionSubtitleLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) YTEmojiController *emojiController; // @synthesize emojiController=_emojiController;
@property(retain, nonatomic) YTILiveChatCreatorSupportRenderer *creatorSupportRenderer; // @synthesize creatorSupportRenderer=_creatorSupportRenderer;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) YTQTMButton *restrictedParticipationButton; // @synthesize restrictedParticipationButton=_restrictedParticipationButton;
@property(nonatomic) _Bool upsellImpressionCommandsExecuted; // @synthesize upsellImpressionCommandsExecuted=_upsellImpressionCommandsExecuted;
@property(retain, nonatomic) NSArray *upsellImpressionCommands; // @synthesize upsellImpressionCommands=_upsellImpressionCommands;
@property(retain, nonatomic) YCHLiveChatActionPillButton *upsellButton; // @synthesize upsellButton=_upsellButton;
@property(retain, nonatomic) QTMButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) QTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) QTMButton *creatorSupportButton; // @synthesize creatorSupportButton=_creatorSupportButton;
@property(retain, nonatomic) QTMButton *customEmojiButton; // @synthesize customEmojiButton=_customEmojiButton;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTIMessageRenderer *emptyStateMessageRenderer; // @synthesize emptyStateMessageRenderer=_emptyStateMessageRenderer;
@property(retain, nonatomic) YTILiveChatProductPickerRenderer *productPickerRenderer; // @synthesize productPickerRenderer=_productPickerRenderer;
@property(retain, nonatomic) YTILiveChatActionPanelSupportedRenderers *actionPanel; // @synthesize actionPanel=_actionPanel;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(retain, nonatomic) YTImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(retain, nonatomic) QTMButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) YTEmojiTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <YCHLiveChatActionPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldShowUpsellButton;
- (struct CGRect)restrictedParticipationTextRect;
- (_Bool)isRestrictedParticipationMode;
- (double)textViewRightPadding;
- (double)textViewLeftPadding;
- (double)textViewBottomPaddingWithMultiline:(_Bool)arg1;
- (double)textViewTopPaddingWithMultiline:(_Bool)arg1;
- (double)minHeightWithMultiline:(_Bool)arg1;
- (struct CGSize)avatarSize;
- (unsigned long long)excessCharactersCutoff;
- (long long)charactersLeft;
- (void)updateEmojiButton;
- (void)crossfadeEmojiButtonIfNeeded;
- (void)scheduleEmojiButtonAnimationIfNeeded;
- (_Bool)isTextViewMultiline:(id)arg1 withFinalSize:(struct CGSize)arg2;
- (struct CGSize)textViewSizeThatFits:(struct CGSize)arg1;
- (void)animateHiddenWithView:(id)arg1 hidden:(_Bool)arg2;
- (void)onCreatorSupportButton;
- (void)onCustomEmojiButton;
- (void)onUpsell;
- (void)onSend;
- (void)didTapSignin;
- (void)didTapRestrictedParticipationButton;
- (void)didTapInfoButton;
- (void)emojiController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)emojiControllerDidTapKeyboardButton:(id)arg1;
- (void)emojiControllerShouldDeleteTwoWords:(id)arg1;
- (void)emojiControllerShouldDeleteCharacter:(id)arg1;
- (id)accessibilityElements;
- (id)placeholderAttributes;
- (id)placeholderColor;
- (void)updateCountLabelColor;
- (void)updateStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showFlareWithColor:(id)arg1;
- (void)appendText:(id)arg1;
- (void)reset;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

