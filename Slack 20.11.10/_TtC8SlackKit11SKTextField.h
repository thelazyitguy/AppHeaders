//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TtC8SlackKit11SKTextField : UIView
{
    // Error parsing type: , name: mode
    // Error parsing type: , name: containerView
    // Error parsing type: , name: observerMap
    // Error parsing type: , name: presentationObject
    // Error parsing type: , name: ornamentIconView
    // Error parsing type: , name: textField
    // Error parsing type: , name: ghostTextLabel
    // Error parsing type: , name: spinnerView
    // Error parsing type: , name: clearButton
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleTextFieldEditingEndedOnExitWithTextField:(id)arg1;
- (void)handleTextFieldEditingEndedWithTextField:(id)arg1;
- (void)handleTextFieldEditingBeganWithTextField:(id)arg1;
- (void)handleTextFieldTextEditingChangedWithTextField:(id)arg1;
- (void)handleClearButtonTapped;
- (void)handleContainerViewTap;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityLabel;

@end
