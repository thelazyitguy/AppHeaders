//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class iPFTSubmitData;

@interface iPFTBaseViewController : UIViewController
{
    iPFTSubmitData *_submitData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) iPFTSubmitData *submitData; // @synthesize submitData=_submitData;
- (void)nextButtonPressed:(id)arg1;
- (void)helpButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)resignAllResponders;
- (void)addDoneButtonAsRightNavbarButton;
- (void)addHelpButtonAsRightNavbarButton;
- (void)initData;
- (void)viewDidLoad;

@end

