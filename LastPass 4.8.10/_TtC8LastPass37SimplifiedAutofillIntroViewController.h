//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIBarButtonItem, UILabel, UIView, _TtC8LastPass13RoundedButton;

@interface _TtC8LastPass37SimplifiedAutofillIntroViewController : UIViewController
{
    // Error parsing type: , name: animationContainerView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: enableAutofillButton
    // Error parsing type: , name: skipButton
    // Error parsing type: , name: $__lazy_storage_$_autofillIntroAnimationView
    // Error parsing type: , name: isComingFromOnboarding
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)skipButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIBarButtonItem *skipButton; // @synthesize skipButton;
@property(nonatomic) __weak _TtC8LastPass13RoundedButton *enableAutofillButton; // @synthesize enableAutofillButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *animationContainerView; // @synthesize animationContainerView;

@end

