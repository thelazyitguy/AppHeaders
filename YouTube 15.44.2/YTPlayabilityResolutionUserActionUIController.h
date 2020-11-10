//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTKoreanAgeVerificationViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTMatureContentAgeVerificationControllerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, YTKoreanAgeVerificationViewController, YTMatureContentAgeVerificationController, YTPlayabilityResolutionUserActionRequest;
@protocol YTPlayabilityResolutionUIProtocol, YTResponder;

@interface YTPlayabilityResolutionUserActionUIController : NSObject <YTKoreanAgeVerificationViewControllerDelegate, YTMatureContentAgeVerificationControllerDelegate, YTResponder>
{
    YTPlayabilityResolutionUserActionRequest *_userActionRequest;
    id <YTPlayabilityResolutionUIProtocol> _confirmAlert;
    id <YTPlayabilityResolutionUIProtocol> _loginAlert;
    YTKoreanAgeVerificationViewController *_kavViewController;
    YTMatureContentAgeVerificationController *_matureContentAgeVerificationController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)loginAlertDidPressCancel;
- (void)loginAlertDidPressLogin;
- (void)confirmAlertDidPressCancel;
- (void)confirmAlertDidPressConfirm;
- (_Bool)handleCommandResponderEvent:(id)arg1;
- (void)showKoreanAgeVerificationFlow;
- (void)showLoginAlert;
- (void)showConfirmAlert;
- (void)handleDidExitHelpCenterNotification:(id)arg1;
- (void)matureContentAgeVerificationDidFinish;
- (void)koreanAgeVerificationFlowDidCancel;
- (void)koreanAgeVerificationFlowDidComplete;
- (void)reset;
- (void)dealloc;
- (void)resolvePlayabilityResolutionUserActionRequest:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
