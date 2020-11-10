//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, UIView, YTInterstitialElementsLoggingController;
@protocol ELMContext, ELMController, YTResponder;

@interface YTInterstitialElementsViewController : UIViewController <YTResponder>
{
    _Bool _lockOrientationToPortrait;
    _Bool _hideStatusBar;
    UIView *_interstitialView;
    id <ELMContext> _elementsContext;
    YTInterstitialElementsLoggingController *_loggingController;
    id <ELMController> _contentElementViewController;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)notifyVisibilityToStateControllerAsVisible:(_Bool)arg1;
- (id)elementsContext;
- (void)presentInterstitialElementsViewWithData:(id)arg1 lockOrientationToPortrait:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (_Bool)prefersStatusBarHidden;
- (void)showInterstitialWithElementData:(id)arg1 lockOrientationToPortrait:(_Bool)arg2 hideStatusBar:(_Bool)arg3 loggingController:(id)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

