//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface NFUISpeedPickerViewController : UIViewController
{
    // Error parsing type: , name: subview
    // Error parsing type: , name: $__lazy_storage_$_speedOptions
    // Error parsing type: , name: selectedRate
    // Error parsing type: , name: rateSlider
    // Error parsing type: , name: completion
    // Error parsing type: , name: dismissalCompletion
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: bottomConstraint
    // Error parsing type: , name: normalSpeedLabel
}

+ (_Bool)accessibilityViewIsModal;
+ (id)speedPickerWithRate:(double)arg1 completion:(CDUnknownBlockType)arg2 onDismiss:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)dismissVC;
- (void)valueChangedWithSender:(id)arg1;
- (void)tapRecognizedWithTapRecognizer:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)viewDidLoad;

@end

