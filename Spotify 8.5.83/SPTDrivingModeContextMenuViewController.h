//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTSelfPresentingViewController-Protocol.h"

@class NSString, SPTDrivingModeLogger;
@protocol GLUETheme, SPTDrivingModeOptOutHandler, SPTModalPresentationController;

@interface SPTDrivingModeContextMenuViewController : UIViewController <SPTSelfPresentingViewController>
{
    id <SPTDrivingModeOptOutHandler> _optOutHandler;
    id <SPTModalPresentationController> _modalPresentationController;
    id <GLUETheme> _theme;
    SPTDrivingModeLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTDrivingModeOptOutHandler> optOutHandler; // @synthesize optOutHandler=_optOutHandler;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)onCancelButtonTap;
- (void)onOptOutButtonTap;
- (void)viewDidLoad;
- (id)initWithOptOutHandler:(id)arg1 modalPresentationController:(id)arg2 theme:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

