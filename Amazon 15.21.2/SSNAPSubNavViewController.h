//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface SSNAPSubNavViewController : UIViewController
{
    UIViewController *_ssnapSubNavController;
    UIViewController *_ssnapQrCodeController;
}

@property(retain, nonatomic) UIViewController *ssnapQrCodeController; // @synthesize ssnapQrCodeController=_ssnapQrCodeController;
@property(retain, nonatomic) UIViewController *ssnapSubNavController; // @synthesize ssnapSubNavController=_ssnapSubNavController;
- (void).cxx_destruct;
- (void)renderCartThresholdNotification;
- (_Bool)didQrCodeSsnapLoad;
- (_Bool)didSubnavSsnapLoad;
- (void)bringUpModalWithDispatchEvent:(id)arg1 dictPayload:(id)arg2;
- (void)removeVCsFromNativeVC;
- (void)addQrCodeAsChildVCtoNativeVC:(id)arg1 shouldSetBaseViewToHidden:(_Bool)arg2;
- (void)addSubnavAsChildVCtoNativeVC:(id)arg1 shouldSetBaseViewToHidden:(_Bool)arg2;
- (void)addChildVCsToNativeVC:(id)arg1 shouldSetBaseViewToHidden:(_Bool)arg2;
- (void)setQrCodeControllerWithFeatureName:(id)arg1 launchPoint:(id)arg2 props:(id)arg3;
- (void)setSubnavControllerWithFeatureName:(id)arg1 launchPoint:(id)arg2 props:(id)arg3;
- (id)setControllerWithFeatureName:(id)arg1 launchPoint:(id)arg2 props:(id)arg3;
- (id)initController;

@end

