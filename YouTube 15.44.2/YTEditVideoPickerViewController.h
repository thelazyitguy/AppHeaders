//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTStyleContextResponderProvider-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSString, YTCommandResponderEvent, YTConfirmDialogController, YTEditVideoPickerView, YTICommand, YTInnerTubeControllerFactory;
@protocol YTEditVideoPickerViewDelegate, YTResponder, YTTopController;

@interface YTEditVideoPickerViewController : UIViewController <YTStyleContextResponderProvider, YTTopController>
{
    YTICommand *_model;
    YTInnerTubeControllerFactory *_controllerFactory;
    UIViewController<YTTopController> *_contentViewController;
    YTConfirmDialogController *_confirmDialogController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    NSString *_selectedVideoId;
    id <YTEditVideoPickerViewDelegate> _pickerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTEditVideoPickerViewDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(copy, nonatomic) NSString *selectedVideoId; // @synthesize selectedVideoId=_selectedVideoId;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (unsigned long long)daysVideoLinkBlockedForUserForVideoAction:(id)arg1;
- (void)showDialogWithActionRenderer:(id)arg1 DaysRemaining:(unsigned long long)arg2;
- (void)dismissVideoPicker;
- (void)handleVideoSelectedEvent:(id)arg1;
- (void)setUpContentViewController;
@property(readonly, nonatomic) NSString *styleContext;
- (_Bool)prefersStatusBarHidden;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTEditVideoPickerView *view; // @dynamic view;

@end
