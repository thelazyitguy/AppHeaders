//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDMQTipsEventDelegate-Protocol.h"
#import "PDMQTipsMShopDelegate-Protocol.h"

@class NSString, PDMQTipsMShopPageMapTable, PDMQTipsManager, PDMQTipsPage;

@interface PDMQTipsMShopManager : NSObject <PDMQTipsEventDelegate, PDMQTipsMShopDelegate>
{
    _Bool _isStoppedDueToInterstitial;
    _Bool _isStoppedDueToVCInstruction;
    PDMQTipsMShopPageMapTable *_vcToPageMapTable;
    PDMQTipsPage *_currentPage;
    PDMQTipsManager *_qtipsManager;
}

+ (_Bool)networkReachable;
@property(nonatomic) _Bool isStoppedDueToVCInstruction; // @synthesize isStoppedDueToVCInstruction=_isStoppedDueToVCInstruction;
@property(nonatomic) _Bool isStoppedDueToInterstitial; // @synthesize isStoppedDueToInterstitial=_isStoppedDueToInterstitial;
@property(retain, nonatomic) PDMQTipsManager *qtipsManager; // @synthesize qtipsManager=_qtipsManager;
@property(retain, nonatomic) PDMQTipsPage *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) PDMQTipsMShopPageMapTable *vcToPageMapTable; // @synthesize vcToPageMapTable=_vcToPageMapTable;
- (void).cxx_destruct;
- (void)userSignedOutNotificationHandler;
- (void)userSignedInNotificationHandler;
- (void)addNotificationObservers;
- (id)pageWithViewController:(struct UIViewController *)arg1 createNewIfNotPresent:(_Bool)arg2;
- (void)updateUserSignedInOrOutState;
- (_Bool)featureEnabledAndRecordWeblabTreatment:(struct UIViewController *)arg1;
- (void)interstialDidDisappear;
- (void)interstialWillAppear;
- (void)startQTipsDisplay;
- (void)stopQTipsDisplay;
- (void)initializeQTipsForVC:(struct UIViewController *)arg1;
- (_Bool)qtipsManager:(id)arg1 shouldFetchQTipsForPage:(id)arg2;
- (void)qtipsManager:(id)arg1 displayFinishedEventDidOccurForPage:(id)arg2;
- (void)qtipsManager:(id)arg1 dismissEventDidOccurForPage:(id)arg2;
- (void)qtipsManager:(id)arg1 showHtmlEventDidOccurForPage:(id)arg2 htmlElements:(struct NSArray *)arg3;
- (_Bool)hasAppStarted;
- (id)currentMarketPlaceUrlWithQtipsManager:(id)arg1;
- (_Bool)updateShownStatusForQTipsElementJsonDict:(id)arg1 withSenderViewController:(struct UIViewController *)arg2;
- (_Bool)qtipsSupportedForScreenType:(long long)arg1;
- (void)viewController:(struct UIViewController *)arg1 contentDataLoaded:(_Bool)arg2;
- (void)resumeQTipsForViewController:(struct UIViewController *)arg1;
- (void)pauseQTipsForViewController:(struct UIViewController *)arg1;
- (void)viewController:(struct UIViewController *)arg1 interstialDidDisappear:(_Bool)arg2;
- (void)viewController:(struct UIViewController *)arg1 interstialWillAppear:(_Bool)arg2;
- (void)viewControllerWillDestroy:(struct UIViewController *)arg1;
- (void)viewControllerWillDisappear:(struct UIViewController *)arg1;
- (void)startDisplayQTipsWithSenderViewController:(struct UIViewController *)arg1;
- (void)startDisplayQTipsForViewController:(struct UIViewController *)arg1 withSender:(id)arg2;
- (void)viewControllerDidAppear:(struct UIViewController *)arg1;
- (void)viewControllerDidLoad:(struct UIViewController *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
