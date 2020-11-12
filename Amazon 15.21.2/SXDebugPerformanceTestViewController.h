//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface SXDebugPerformanceTestViewController : UIViewController <UITextFieldDelegate>
{
    double _textY;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_testNameFieldTitle;
    UIView *_testNameFieldContainer;
    UITextField *_testNameField;
    UIButton *_toggleButton;
}

@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain, nonatomic) UITextField *testNameField; // @synthesize testNameField=_testNameField;
@property(retain, nonatomic) UIView *testNameFieldContainer; // @synthesize testNameFieldContainer=_testNameFieldContainer;
@property(retain, nonatomic) UILabel *testNameFieldTitle; // @synthesize testNameFieldTitle=_testNameFieldTitle;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double textY; // @synthesize textY=_textY;
- (void).cxx_destruct;
- (id)testName;
- (_Bool)perfTestIsRunning;
- (void)toggleButtonTapped;
- (void)textDidChangeInTextField:(id)arg1;
- (void)updateSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutView:(id)arg1 withWidth:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
