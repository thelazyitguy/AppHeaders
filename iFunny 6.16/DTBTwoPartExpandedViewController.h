//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DTBiOSSDK/DTBAdExpandedDispatcherDelegate-Protocol.h>

@class DTBExpandedAdDispatcher, NSDictionary, UIButton;
@protocol DTBTwoPartExpandedViewControllerDelegate;

@interface DTBTwoPartExpandedViewController : UIViewController <DTBAdExpandedDispatcherDelegate>
{
    _Bool _allowOrientationChange;
    NSDictionary *_params;
    id <DTBTwoPartExpandedViewControllerDelegate> _twoPartDelegate;
    UIButton *_closeBtn;
    DTBExpandedAdDispatcher *_dispatcher;
    unsigned long long _orientationForTheAd;
}

@property(nonatomic) unsigned long long orientationForTheAd; // @synthesize orientationForTheAd=_orientationForTheAd;
@property(nonatomic) _Bool allowOrientationChange; // @synthesize allowOrientationChange=_allowOrientationChange;
@property(retain, nonatomic) DTBExpandedAdDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <DTBTwoPartExpandedViewControllerDelegate> twoPartDelegate; // @synthesize twoPartDelegate=_twoPartDelegate;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)adFailedToLoad:(id)arg1 errorCode:(long long)arg2;
- (void)adDidLoad:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)onCloseButtonClick;
- (void)setupCloseButton;
- (void)setupWebViewWithCloseButton;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;

@end
