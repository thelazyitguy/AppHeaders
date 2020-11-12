//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Localytics/LLInAppViewControllerDelegate-Protocol.h>

@class LLInAppCampaign, LLInAppViewController, LLMarketingLogger, NSString, UIImage, UIWindow;
@protocol LLInAppViewControllerGenerating, LLLocalyticsDelegate, LLUIManagerDelegate, OS_dispatch_queue;

@interface LLUIManager : NSObject <LLInAppViewControllerDelegate>
{
    _Bool _showingInAppMessage;
    _Bool _dismissButtonHidden;
    UIImage *_dismissButtonImage;
    id <LLUIManagerDelegate> _delegate;
    unsigned long long _dismissButtonLocation;
    LLMarketingLogger *_logger;
    UIWindow *_originalUIWindow;
    UIWindow *_inAppUIWindow;
    LLInAppViewController *_inAppViewController;
    LLInAppCampaign *_inAppMessage;
    id <LLInAppViewControllerGenerating> _viewControllerFactory;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    id <LLLocalyticsDelegate> _localyticsDelegate;
    double _maxButtonSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double maxButtonSize; // @synthesize maxButtonSize=_maxButtonSize;
@property(nonatomic) __weak id <LLLocalyticsDelegate> localyticsDelegate; // @synthesize localyticsDelegate=_localyticsDelegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) id <LLInAppViewControllerGenerating> viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(retain, nonatomic) LLInAppCampaign *inAppMessage; // @synthesize inAppMessage=_inAppMessage;
@property(retain, nonatomic) LLInAppViewController *inAppViewController; // @synthesize inAppViewController=_inAppViewController;
@property(retain, nonatomic) UIWindow *inAppUIWindow; // @synthesize inAppUIWindow=_inAppUIWindow;
@property(retain, nonatomic) UIWindow *originalUIWindow; // @synthesize originalUIWindow=_originalUIWindow;
@property(retain) LLMarketingLogger *logger; // @synthesize logger=_logger;
@property(getter=isDismissButtonHidden) _Bool dismissButtonHidden; // @synthesize dismissButtonHidden=_dismissButtonHidden;
@property unsigned long long dismissButtonLocation; // @synthesize dismissButtonLocation=_dismissButtonLocation;
@property(nonatomic, getter=isShowingInAppMessage) _Bool showingInAppMessage; // @synthesize showingInAppMessage=_showingInAppMessage;
@property(nonatomic) __weak id <LLUIManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyWindowDidChange:(id)arg1;
- (void)clearBackgroundState;
- (void)exitDisplayingState;
- (void)clearUIState;
- (void)tearDownWindow;
- (id)reflectWindowSceneConstructor:(id)arg1 forWindow:(id)arg2;
- (void)displayInApp;
- (void)checkWithDelegate;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)inAppCreativeDidLoad;
- (void)dismissInAppSynchronous:(_Bool)arg1;
- (void)showInAppMessage:(id)arg1 isTestModeTrigger:(_Bool)arg2 checkDelegateBeforeDisplaying:(_Bool)arg3;
- (id)initWithBackgroundQueue:(id)arg1 localyticsDelegate:(id)arg2 inAppViewControllerFactory:(id)arg3 logger:(id)arg4;
- (id)initWithLocalyticsDelegate:(id)arg1 inAppViewControllerFactory:(id)arg2 logger:(id)arg3;
@property(retain) UIImage *dismissButtonImage; // @synthesize dismissButtonImage=_dismissButtonImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
