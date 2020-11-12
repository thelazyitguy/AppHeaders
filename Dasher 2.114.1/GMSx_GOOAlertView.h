//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GOOModalView.h>

#import <NavigationFramework/UITableViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIImage, UILabel, UIView;
@protocol GOOAlertViewDelegate;

@interface GMSx_GOOAlertView : GMSx_GOOModalView <UITableViewDelegate>
{
    unsigned long long _actionsCount;
    double _keyboardHeight;
    _Bool _keyboardPresent;
    _Bool _allowsTextInput;
    _Bool _shouldPreserveKeyboard;
    id <GOOAlertViewDelegate> _delegate;
    UIView *_customContentView;
    double _minimumVerticalMargin;
    CDUnknownBlockType _enterKeyAction;
}

+ (id)tableViewWithModel:(id)arg1 actions:(id)arg2 delegate:(id)arg3;
+ (id)dialogWithRetryAction:(CDUnknownBlockType)arg1 abortAction:(CDUnknownBlockType)arg2;
+ (id)dialogWithRetrySelector:(SEL)arg1 abortSelector:(SEL)arg2;
+ (id)confirmationDialogWithAction:(CDUnknownBlockType)arg1 actionTitle:(id)arg2 cancelAction:(CDUnknownBlockType)arg3 cancelTitle:(id)arg4;
+ (id)confirmationDialogWithAction:(CDUnknownBlockType)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3;
+ (id)confirmationDialogWithAction:(CDUnknownBlockType)arg1 actionTitle:(id)arg2 automationIdentifier:(id)arg3 showsCancelButton:(_Bool)arg4;
+ (id)confirmationDialogWithAction:(CDUnknownBlockType)arg1 actionTitle:(id)arg2 automationIdentifier:(id)arg3;
+ (id)confirmationDialogWithAction:(CDUnknownBlockType)arg1 actionTitle:(id)arg2;
+ (id)confirmationDialogWithSelector:(SEL)arg1 actionTitle:(id)arg2 automationIdentifier:(id)arg3 showsCancelButton:(_Bool)arg4;
+ (id)confirmationDialogWithSelector:(SEL)arg1 actionTitle:(id)arg2 showsCancelButton:(_Bool)arg3;
+ (id)confirmationDialogWithSelector:(SEL)arg1 actionTitle:(id)arg2 automationIdentifier:(id)arg3;
+ (id)confirmationDialogWithSelector:(SEL)arg1 actionTitle:(id)arg2;
+ (id)confirmationDialog;
+ (id)infoDialogWithDefaultAcknowledgeAction:(_Bool)arg1;
+ (id)infoDialog;
+ (id)dialog;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType enterKeyAction; // @synthesize enterKeyAction=_enterKeyAction;
@property(nonatomic) _Bool shouldPreserveKeyboard; // @synthesize shouldPreserveKeyboard=_shouldPreserveKeyboard;
@property(nonatomic) _Bool allowsTextInput; // @synthesize allowsTextInput=_allowsTextInput;
@property(nonatomic) double minimumVerticalMargin; // @synthesize minimumVerticalMargin=_minimumVerticalMargin;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(nonatomic) __weak id <GOOAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canBecomeFirstResponder;
- (void)addCancelButtonWithAction:(CDUnknownBlockType)arg1;
- (void)addCancelButton:(SEL)arg1;
- (void)reposition;
- (_Bool)accessibilityPerformEscape;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (id)tableViewWithModel:(id)arg1 actions:(id)arg2;
@property(nonatomic) struct UIEdgeInsets customContentViewInsets;
@property(copy, nonatomic) NSArray *justifiedContentViews;
- (void)applyLink:(id)arg1 toAttributedTextInRange:(struct _NSRange)arg2;
@property(copy, nonatomic) CDUnknownBlockType attributedTextLinkDidTapBlock;
@property(nonatomic) long long attributedTextAlignment;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(nonatomic) _Bool requireCheckboxForNonCancelActions;
@property(nonatomic) long long checkboxTitleLineBreakMode;
@property(nonatomic) _Bool shouldPositionCheckboxAtBottom;
@property(nonatomic) _Bool checked;
@property(copy, nonatomic) NSString *checkboxText;
@property(nonatomic) long long imageViewContentMode;
@property(nonatomic) long long titleBackgroundImageHorizontalAlignment;
@property(nonatomic) struct UIEdgeInsets titleBackgroundImageInsets;
@property(copy, nonatomic) UIImage *titleBackgroundImage;
@property(copy, nonatomic) UIColor *headerBackgroundColor;
@property(copy, nonatomic) UIImage *icon;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UILabel *titleLabel;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dismissDialog;
- (void)revealDialog;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (struct CGRect)frameForDialog;
- (struct CGRect)boundsForContainerWithInsets:(struct UIEdgeInsets)arg1;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 insets:(struct UIEdgeInsets)arg5 showHorizontalDivider:(_Bool)arg6 action:(CDUnknownBlockType)arg7;
- (void)keyboardUpdated:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)initWithTarget:(id)arg1;
- (void)enterPressed;
- (id)keyCommands;
- (_Bool)hasCustomKeyCommands;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
