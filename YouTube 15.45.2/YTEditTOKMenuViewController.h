//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, YTEditTOKMenuView;
@protocol YTEditTOKMenuDelegate, YTResponder;

@interface YTEditTOKMenuViewController : UIViewController <YTResponder>
{
    long long _currentAlignment;
    long long _currentStyle;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEditTOKMenuDelegate> _delegate;
    long long _textColorPickerMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long textColorPickerMode; // @synthesize textColorPickerMode=_textColorPickerMode;
@property(nonatomic) __weak id <YTEditTOKMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (long long)nextColorPickerModeForMode:(long long)arg1;
- (long long)nextStyleForStyle:(long long)arg1;
- (void)dismissView;
- (void)tappedFontButton;
- (void)toggleMode;
- (long long)nextAlignmentForAlignment:(long long)arg1;
- (void)tappedAlignmentButton;
- (void)sliderValueDidChange:(id)arg1;
- (double)desiredButtonHeight;
- (void)updateForTextModel:(id)arg1;
- (double)desiredViewHeight;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTEditTOKMenuView *view; // @dynamic view;

@end
