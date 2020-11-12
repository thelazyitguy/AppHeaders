//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "OTAWorkflowDelegate-Protocol.h"

@class CMRAssetInfo, NSString, OTAWorkflow, SecondaryButton, UIActivityIndicatorView, UIImageView, UILabel, UIProgressView;

@interface Roomba900SetupLocalOTAViewController : BaseViewController <OTAWorkflowDelegate>
{
    _Bool _robotAlreadyProvisioned;
    CMRAssetInfo *_assetInfo;
    UIImageView *_helperImageView;
    UIProgressView *_progressView;
    SecondaryButton *_doneButton;
    UILabel *_otaStatusLabel;
    UILabel *_instructionsLabel;
    UIActivityIndicatorView *_spinnerView;
    OTAWorkflow *_otaWorkflow;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool robotAlreadyProvisioned; // @synthesize robotAlreadyProvisioned=_robotAlreadyProvisioned;
@property(retain, nonatomic) OTAWorkflow *otaWorkflow; // @synthesize otaWorkflow=_otaWorkflow;
@property(nonatomic) __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) __weak UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(nonatomic) __weak UILabel *otaStatusLabel; // @synthesize otaStatusLabel=_otaStatusLabel;
@property(nonatomic) __weak SecondaryButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIImageView *helperImageView; // @synthesize helperImageView=_helperImageView;
@property(retain, nonatomic) CMRAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (void)configureAccessibility;
- (void)dealloc;
- (void)removeNotificationObservers;
- (void)robotNotDetected:(id)arg1;
- (void)robotDetected:(id)arg1;
- (void)checkRobotRestartStatus;
- (void)OTAWorkflowProgress:(id)arg1;
- (void)OTAWorkflow:(id)arg1 didFailWithError:(unsigned long long)arg2;
- (void)OTAWorkflowCompletedOTADL:(id)arg1;
- (void)OTAWorkflowStartedOTADL:(id)arg1;
- (void)OTAWorkflowCompletedGetOTACTL:(id)arg1;
- (void)OTAWorkflowCompletedPostOTACTL:(id)arg1;
- (void)OTAWorkflowStartedPostOTACTL:(id)arg1;
- (void)popToCleanViewController;
- (void)popToCleanViewControllerShowingRobotWithBLID:(id)arg1;
- (void)popToStartOfLocalOTAFlow;
- (void)popToStartOfProvisioning:(id)arg1;
- (void)startOTAFlow;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
