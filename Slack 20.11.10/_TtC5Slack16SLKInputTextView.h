//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Slack23SLKAutocompleteTextView.h"

@class NSArray, UIInputViewController;

@interface _TtC5Slack16SLKInputTextView : _TtC5Slack23SLKAutocompleteTextView
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: responderDelegate
    // Error parsing type: , name: pastedMediaHandler
    // Error parsing type: , name: keyCommandHandler
    // Error parsing type: , name: menuItemDelegate
    // Error parsing type: , name: isCollapsibleAMIEnabled
    // Error parsing type: , name: additionalTextContainerInsets
    // Error parsing type: , name: allowAnimations
    // Error parsing type: , name: shouldRoundTopCorners
    // Error parsing type: , name: customInputViewController
    // Error parsing type: , name: $__lazy_storage_$_imageLayoutHelper
    // Error parsing type: , name: supportsLinkLabelEditing
}

- (void).cxx_destruct;
- (void)handleTextChangeWithNewAttributedText:(id)arg1;
- (void)handleShiftReturn;
- (void)paste:(id)arg1;
- (void)handleFormatMenu;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleCommandShift8;
- (void)handleCommandShift7;
- (void)handleCommandShiftC;
- (void)handleCommandShiftX;
- (void)handleCommandI;
- (void)handleCommandB;
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic) struct CGSize contentSize;
- (void)layoutSubviews;
@property(nonatomic, readonly) UIInputViewController *inputViewController;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) struct CGRect frame;

@end
