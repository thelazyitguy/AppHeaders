//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Stripe/UITextFieldDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, STDSStackView, STDSTextField, STDSTextFieldCustomization;

@interface STDSTextChallengeView : UIView <UITextFieldDelegate>
{
    STDSTextFieldCustomization *_textFieldCustomization;
    STDSTextField *_textField;
    STDSStackView *_containerView;
    NSLayoutConstraint *_borderViewHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *borderViewHeightConstraint; // @synthesize borderViewHeightConstraint=_borderViewHeightConstraint;
@property(retain, nonatomic) STDSStackView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) STDSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) STDSTextFieldCustomization *textFieldCustomization; // @synthesize textFieldCustomization=_textFieldCustomization;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didMoveToWindow;
@property(readonly, copy, nonatomic) NSString *inputText;
- (void)_setupViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
