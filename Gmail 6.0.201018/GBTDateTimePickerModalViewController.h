//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GBTDateTimePickerDelegate-Protocol.h"

@class GBTDateTimePickerView, NSDate, NSString;
@protocol GBTDateTimePickerModalViewControllerDelegate;

@interface GBTDateTimePickerModalViewController : UIViewController <GBTDateTimePickerDelegate>
{
    id <GBTDateTimePickerModalViewControllerDelegate> _delegate;
    GBTDateTimePickerView *_dateTimePickerView;
    NSDate *_initialDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *initialDate; // @synthesize initialDate=_initialDate;
@property(retain, nonatomic) GBTDateTimePickerView *dateTimePickerView; // @synthesize dateTimePickerView=_dateTimePickerView;
@property(nonatomic) __weak id <GBTDateTimePickerModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)backgroundTapped:(id)arg1;
- (void)dateTimePickerDidCancel;
- (void)dateTimePickerDidSaveDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 initialDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
