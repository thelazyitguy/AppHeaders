//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRAccountUIServiceDataCallback-Protocol.h"
#import "CMRUIComponent-Protocol.h"

@class NSString, SecondaryButton, UILabel;
@protocol CMRUIComponentEventDelegate;

@interface IRobotBetaEnrollmentViewController : BaseAssetViewController <CMRAccountUIServiceDataCallback, CMRUIComponent>
{
    _Bool _followDefaultNavigation;
    id <CMRUIComponentEventDelegate> _eventDelegate;
    UILabel *_headerTextLabel;
    UILabel *_bodyTextLabel;
    SecondaryButton *_enrollmentButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SecondaryButton *enrollmentButton; // @synthesize enrollmentButton=_enrollmentButton;
@property(nonatomic) __weak UILabel *bodyTextLabel; // @synthesize bodyTextLabel=_bodyTextLabel;
@property(nonatomic) __weak UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(nonatomic) _Bool followDefaultNavigation; // @synthesize followDefaultNavigation=_followDefaultNavigation;
@property(nonatomic) __weak id <CMRUIComponentEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void)configureAccessibility;
- (void)onAccountUIServiceDataChanged:(id)arg1;
- (void)handleLoadingState:(long long)arg1;
- (void)navigateToBetaProgramMainPage;
- (void)enrollmentButtonPressed;
- (void)configureEnrollmentButton;
- (void)configureBodyTextLabel;
- (void)configureHeaderTextLabel;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

