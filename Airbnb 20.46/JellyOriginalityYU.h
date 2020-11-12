//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ALBICameraDelegate-Protocol.h"
#import "ALBICoreSessionDelegate-Protocol.h"
#import "ALBIViewDelegate-Protocol.h"

@class ALBIAudioPlayer, ALBICamera, ALBIConfiguration, ALBIContentView, ALBICoreSession, ALBIView, NSString, UIButton;
@protocol ALBIViewControllerDelegate;

@interface JellyOriginalityYU : UIViewController <ALBICoreSessionDelegate, ALBICameraDelegate, ALBIViewDelegate>
{
    _Bool _isPopoverMode;
    _Bool _isDismissed;
    _Bool _isCapturing;
    _Bool _isPermissionRequest;
    _Bool _isNavigationHidden;
    _Bool _isStatusHidden;
    id <ALBIViewControllerDelegate> _delegate;
    NSString *_verifyToken;
    long long _transitionStyle;
    ALBIConfiguration *_currentConfiguration;
    id _faceRecognizer;
    ALBICamera *_camera;
    ALBICoreSession *_session;
    ALBIView *_biometricsView;
    ALBIAudioPlayer *_audioPlayer;
    ALBIContentView *_contentView;
    UIButton *_closeButton;
    long long _exceptionCount;
    double _volume;
    double _originalScreenBrightness;
}

+ (id)DVCStMyPwhTestedAdvBSingerOOWHay;
+ (id)RobEssentially;
@property(nonatomic) _Bool isStatusHidden; // @synthesize isStatusHidden=_isStatusHidden;
@property(nonatomic) _Bool isNavigationHidden; // @synthesize isNavigationHidden=_isNavigationHidden;
@property(nonatomic) double originalScreenBrightness; // @synthesize originalScreenBrightness=_originalScreenBrightness;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) long long exceptionCount; // @synthesize exceptionCount=_exceptionCount;
@property(nonatomic) _Bool isPermissionRequest; // @synthesize isPermissionRequest=_isPermissionRequest;
@property(nonatomic) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) _Bool isPopoverMode; // @synthesize isPopoverMode=_isPopoverMode;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) ALBIContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) ALBIAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) ALBIView *biometricsView; // @synthesize biometricsView=_biometricsView;
@property(retain, nonatomic) ALBICoreSession *session; // @synthesize session=_session;
@property(retain, nonatomic) ALBICamera *camera; // @synthesize camera=_camera;
@property(nonatomic) __weak id faceRecognizer; // @synthesize faceRecognizer=_faceRecognizer;
@property(retain, nonatomic) ALBIConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(copy, nonatomic) NSString *verifyToken; // @synthesize verifyToken=_verifyToken;
@property(nonatomic) __weak id <ALBIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *biometricsID;
- (void)ProtectionHowardPurestSicAt;
- (void)FemalesTrulyUGarbW;
- (void)ADefiniteFixedQ;
- (void)playAudio;
- (void)PJawDrunkennessL;
- (void)LossKidDerivativeTYE;
- (void)showActionTutorial;
- (void)PlutocraticalHills;
- (void)TeProhibitedOrCf;
- (void)hidePopoverPrompt;
- (void)ThQSettleHeNTireFlungClearerW;
- (void)ErRepublicanEhBHe;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)BrushPubHOfRDV;
- (void)SettlementC;
- (void)NOCrimeESecuringHNO;
- (void)volumeDidChange:(id)arg1;
- (void)showCameraInitFailPrompt;
- (void)showCameraPermissionPrompt;
- (void)closeAction;
- (void)IfBabeDiamondsOrIf;
- (void)ShownGleamAmyTiX;
- (_Bool)isFinished;
- (void)SingerI;
- (long long)biometricsViewDetectType:(id)arg1;
- (_Bool)biometricsViewIsFinished:(id)arg1;
- (_Bool)biometricsViewIsCapturing:(id)arg1;
- (long long)biometricsViewWillRetryDetect:(id)arg1;
- (void)biometricsView:(id)arg1 startDetectWithEndType:(long long)arg2;
- (void)biometricsViewDidGoBack:(id)arg1;
- (void)biometricsViewShouldStopSound:(id)arg1;
- (void)biometricsViewShouldPlayPhaseSound:(id)arg1;
- (void)biometricsView:(id)arg1 didSelectPromptWithtype:(long long)arg2;
- (void)biometricsView:(id)arg1 didSwitchSoundButton:(_Bool)arg2;
- (void)biometricsSession:(id)arg1 didUpdatePhase:(long long)arg2;
- (void)biometricsSession:(id)arg1 didReceiveMessage:(id)arg2;
- (void)biometricsSessionFrameTooDark:(id)arg1;
- (void)biometricsSessionDidFinishWithoutActions:(id)arg1;
- (void)biometricsSessionWillFinishDetect:(id)arg1;
- (void)biometricsSessionReflectDidFail:(id)arg1;
- (void)biometricsSessionReflectWillStart:(id)arg1;
- (void)biometricsSession:(id)arg1 finishActionWithIndex:(long long)arg2;
- (void)biometricsSession:(id)arg1 startActionWithIndex:(long long)arg2;
- (void)biometricsSessionDidAdjust:(id)arg1;
- (void)biometricsSessionWillAdjust:(id)arg1;
- (void)biometricsSessionDidRestartDetect:(id)arg1;
- (long long)biometricsSession:(id)arg1 willRetryDetectWithMineType:(long long)arg2;
- (void)biometricsSession:(id)arg1 didFailWithError:(id)arg2;
- (void)biometricsSession:(id)arg1 didDetectResult:(id)arg2;
- (void)biometricsCamera:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)StrollFond;
- (_Bool)LapSpeciesL;
- (void)NecessarilyInfluenceLbOF;
- (void)setup;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;
- (void)PerfectKAnRot;
- (void)PiousCrowdedCord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
