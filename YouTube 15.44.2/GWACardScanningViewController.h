//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/GOOHeaderNavigationParentViewController-Protocol.h>
#import <Module_Framework/GWACameraDelegate-Protocol.h>
#import <Module_Framework/GWACardRecognizerDelegate-Protocol.h>
#import <Module_Framework/GWACardScanningViewDelegate-Protocol.h>
#import <Module_Framework/GWACreditCardRecognizerDelegate-Protocol.h>

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GWACamera, GWACameraView, GWACardScanningView, NSString, QTMButton, QTMColorGroup, UIImageView, UILabel, UIView;
@protocol GWACardScanningViewControllerDelegate;

@interface GWACardScanningViewController : UIViewController <GOOHeaderNavigationParentViewController, GWACameraDelegate, GWACardRecognizerDelegate, GWACardScanningViewDelegate, GWACreditCardRecognizerDelegate>
{
    id <GWACardScanningViewControllerDelegate> _delegate;
    GWACamera *_camera;
    GWACameraView *_cameraView;
    GWACardScanningView *_cardScanningView;
    UIImageView *_capturedImageView;
    UILabel *_confirmationLabel;
    QTMButton *_retakeButton;
    QTMButton *_confirmButton;
    struct CGRect _cardBoundsLandscape;
    double _lastAutofocusCompletedTime;
    _Bool _isAutofocusing;
    unsigned long long _cardRecognizingMode;
    GOOFlexibleHeaderViewController *_headerViewController;
    GOOHeaderNavigationView *_headerNavigationView;
    QTMColorGroup *_colorGroup;
    UIView *_exitButton;
    UIView *_descriptionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void)confirmImage;
- (void)retakeImage;
- (void)showImageCapturingPreview:(_Bool)arg1;
- (void)layoutHeaderDescriptionMessage;
- (void)layoutImagePreviewSubviews;
- (void)loadImageCapturingPreviewSubviews;
- (double)currentMediaTime;
- (void)refocusCamera;
- (void)cancel;
- (void)handleOrientation:(long long)arg1;
- (id)confirmationLabel;
- (id)confirmButton;
- (id)retakeButton;
- (id)capturedImageView;
- (void)cardScanningViewDidCancel:(id)arg1;
- (void)cardRecognizer:(id)arg1 foundCardImage:(id)arg2;
- (void)cardRecognizerFailedToFindCard:(id)arg1;
- (void)cardRecognizerReceivedBlurryImage:(id)arg1;
- (void)creditCardRecognizerFailedToRecognizeCard:(id)arg1;
- (void)creditCardRecognizer:(id)arg1 recognizedCardWithNumber:(id)arg2 expirationDate:(id)arg3;
- (void)creditCardRecognizerFoundCard:(id)arg1;
- (void)creditCardRecognizerFailedToFindCard:(id)arg1;
- (void)creditCardRecognizerReceivedBlurryImage:(id)arg1;
- (void)camera:(id)arg1 didCaptureImage:(id)arg2;
- (void)cameraDidFinishedFocusing:(id)arg1;
- (void)cameraDidReceiveFirstImage:(id)arg1;
- (void)camera:(id)arg1 hasStartedSession:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegateForCreditCardScanning:(id)arg1 shouldUseTolerantDetector:(_Bool)arg2;
- (id)initWithDelegateForCreditCardScanning:(id)arg1;
- (id)initWithDelegateForCardScanning:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

