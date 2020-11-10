//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ColorPickerViewDelegate-Protocol.h"
#import "EmojiAutocompleteControllerDelegate-Protocol.h"
#import "EmojiAutocompleteViewDelegate-Protocol.h"
#import "EmojiPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, BaseBarButtonItem, BaseButton, BaseLabel, BaseView, CharacterLimitTextField, ColorPickerView, EditFlairPresenter, EmojiAutocompleteController, EmojiAutocompleteView, EmojiPickerView, FlairLabel, NSLayoutConstraint, NSString, NSURL, UIScrollView, UIView;
@protocol EditFlairViewControllerDelegate, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface EditFlairViewController : BaseViewController <UITextFieldDelegate, ColorPickerViewDelegate, EmojiAutocompleteControllerDelegate, EmojiAutocompleteViewDelegate, EmojiPickerViewDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    _Bool _hasSeenColorPicker;
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <EditFlairViewControllerDelegate> _delegate;
    UIScrollView *_flairScrollView;
    UIView *_flairScrollViewContentView;
    FlairLabel *_flairLabel;
    EmojiPickerView *_emojiPickerView;
    BaseView *_textFieldContainer;
    BaseButton *_emojiKeyboardButton;
    CharacterLimitTextField *_flairTextField;
    BaseBarButtonItem *_saveButton;
    BaseButton *_deleteButton;
    BaseButton *_textColorInversionButton;
    BaseButton *_settingsButton;
    BaseButton *_backgroundColorButton;
    BaseView *_backgroundColorButtonOuterBorder;
    ColorPickerView *_colorPickerView;
    NSLayoutConstraint *_textContainerToBottomVerticalConstraint;
    NSLayoutConstraint *_textContainerHeightConstraint;
    NSLayoutConstraint *_flairScrollViewToTopVerticalConstraint;
    NSLayoutConstraint *_colorPickerViewAnimatedHiddenConstraint;
    NSLayoutConstraint *_emojiKeyboardButtonWidthConstraint;
    EmojiAutocompleteController *_emojiAutocompleteController;
    EmojiAutocompleteView *_emojiAutocompleteView;
    BaseBarButtonItem *_leftBarButtonItem;
    unsigned long long _keyboardState;
    BaseLabel *_textHintLabel;
    EditFlairPresenter *_presenter;
}

+ (id)backgroundColorHexStringsForFlairType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasSeenColorPicker; // @synthesize hasSeenColorPicker=_hasSeenColorPicker;
@property(retain, nonatomic) EditFlairPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) BaseLabel *textHintLabel; // @synthesize textHintLabel=_textHintLabel;
@property(nonatomic) unsigned long long keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) BaseBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(retain, nonatomic) EmojiAutocompleteView *emojiAutocompleteView; // @synthesize emojiAutocompleteView=_emojiAutocompleteView;
@property(retain, nonatomic) EmojiAutocompleteController *emojiAutocompleteController; // @synthesize emojiAutocompleteController=_emojiAutocompleteController;
@property(retain, nonatomic) NSLayoutConstraint *emojiKeyboardButtonWidthConstraint; // @synthesize emojiKeyboardButtonWidthConstraint=_emojiKeyboardButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorPickerViewAnimatedHiddenConstraint; // @synthesize colorPickerViewAnimatedHiddenConstraint=_colorPickerViewAnimatedHiddenConstraint;
@property(retain, nonatomic) NSLayoutConstraint *flairScrollViewToTopVerticalConstraint; // @synthesize flairScrollViewToTopVerticalConstraint=_flairScrollViewToTopVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textContainerHeightConstraint; // @synthesize textContainerHeightConstraint=_textContainerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textContainerToBottomVerticalConstraint; // @synthesize textContainerToBottomVerticalConstraint=_textContainerToBottomVerticalConstraint;
@property(retain, nonatomic) ColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) BaseView *backgroundColorButtonOuterBorder; // @synthesize backgroundColorButtonOuterBorder=_backgroundColorButtonOuterBorder;
@property(retain, nonatomic) BaseButton *backgroundColorButton; // @synthesize backgroundColorButton=_backgroundColorButton;
@property(retain, nonatomic) BaseButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) BaseButton *textColorInversionButton; // @synthesize textColorInversionButton=_textColorInversionButton;
@property(retain, nonatomic) BaseButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) BaseBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) CharacterLimitTextField *flairTextField; // @synthesize flairTextField=_flairTextField;
@property(retain, nonatomic) BaseButton *emojiKeyboardButton; // @synthesize emojiKeyboardButton=_emojiKeyboardButton;
@property(retain, nonatomic) BaseView *textFieldContainer; // @synthesize textFieldContainer=_textFieldContainer;
@property(retain, nonatomic) EmojiPickerView *emojiPickerView; // @synthesize emojiPickerView=_emojiPickerView;
@property(retain, nonatomic) FlairLabel *flairLabel; // @synthesize flairLabel=_flairLabel;
@property(retain, nonatomic) UIView *flairScrollViewContentView; // @synthesize flairScrollViewContentView=_flairScrollViewContentView;
@property(retain, nonatomic) UIScrollView *flairScrollView; // @synthesize flairScrollView=_flairScrollView;
@property(nonatomic) __weak id <EditFlairViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
- (void)logEvent:(id)arg1;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
- (void)logChangeMaxEmojiCount;
- (void)logChangeTemplateContentType;
- (void)logSaveFlair;
- (void)logDeleteFlair;
- (void)emojiPickerViewDidPressBackspace:(id)arg1;
- (void)emojiPickerView:(id)arg1 didSelectEmoji:(id)arg2;
- (void)textEmojisSuggestionsView:(id)arg1 didSelectEmoji:(id)arg2 range:(struct _NSRange)arg3;
- (void)emojiAutocompleteController:(id)arg1 suggestions:(id)arg2 forWord:(id)arg3 inRange:(struct _NSRange)arg4;
- (void)emojiAutocompleteControllerFoundNoEmojiMatches:(id)arg1;
- (void)colorPickerView:(id)arg1 didSelectColor:(id)arg2;
- (void)textChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)defaultEmptyText;
- (void)saveEditing;
- (void)resetKeyboardState;
- (void)toggleEmojiKeyboardState;
- (void)didTapEmojiKeyboardButton:(id)arg1;
- (void)doneEditing;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapBackgroundColorButton:(id)arg1;
- (void)didTapDeleteButton:(id)arg1;
- (void)didTapTextColorInversionButton:(id)arg1;
- (void)didTapSettingsButton:(id)arg1;
- (void)insertEmoji:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)isFlairBackgroundColorTransparent;
- (_Bool)shouldShowTemplateManagementElements;
- (_Bool)shouldShowDeleteButton;
- (void)updateAuthorFlairTemplate;
- (void)updatePostFlairTemplate;
- (void)deleteFlair;
- (void)hideColorPickerView;
- (void)showColorPickerView;
- (void)updateSelectedBackgroundColorButtonFill;
- (void)toggleAllButtonStatesEnabled:(_Bool)arg1;
- (_Bool)shouldAllowEmptyText;
- (_Bool)isPageDirty;
- (_Bool)isContentValid;
- (_Bool)shouldEnableSaveButton;
- (_Bool)isFlairTextEmpty;
- (void)enableEmojiPickers:(_Bool)arg1;
- (void)setFlairText:(id)arg1 withEmojis:(id)arg2;
- (void)updateFlair;
- (void)updateHintText;
- (void)configureSaveButton;
- (void)configureBackgroundColorButton;
- (void)configureTextColorInversionButton;
- (void)configureTemplateManagementButtons;
- (void)configureNavigationBar;
- (double)flairScrollViewYPointFromTopWithKeyboardHeight:(double)arg1;
- (double)textContainerViewHeightWithKeyboard:(_Bool)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupConstraints;
- (void)configureNavigationBarAppearance;
- (void)setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

