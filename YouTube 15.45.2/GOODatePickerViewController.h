//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/GOOPickerViewDelegate-Protocol.h>
#import <Module_Framework/UIViewControllerTransitioningDelegate-Protocol.h>

@class GOODatePickerColorPalette, GOODatePickerShadowView, GOODatePickerTransitionController, NSCalendar, NSDate, NSString, UIView;
@protocol GOODatePickerViewControllerDelegate, GOOPickerView;

@interface GOODatePickerViewController : UIViewController <GOOPickerViewDelegate, UIViewControllerTransitioningDelegate>
{
    UIView<GOOPickerView> *_pickerView;
    NSCalendar *_calendar;
    NSDate *_initialDate;
    GOODatePickerTransitionController *_transitionController;
    GOODatePickerShadowView *_shadowView;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _colorStyle;
    GOODatePickerColorPalette *_colorPalette;
    id <GOODatePickerViewControllerDelegate> _delegate;
    long long _mode;
    NSString *_datePickerTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *datePickerTitle; // @synthesize datePickerTitle=_datePickerTitle;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <GOODatePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) long long colorStyle; // @synthesize colorStyle=_colorStyle;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
- (id)shadowView;
- (void)updateSelectableRange;
- (long long)styleForHorizontalSizeClass:(long long)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)pickerViewDidTapCancel:(id)arg1;
- (void)pickerViewDidTapDone:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) NSDate *date;
- (struct CGSize)preferredContentSize;
- (long long)preferredStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCalendar:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

