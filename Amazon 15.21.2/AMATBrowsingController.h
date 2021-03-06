//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMMPAdBrowserControllerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class AMALinkUtility, AMATBaseAdController, AMAdConfiguration, AMMetricTracker, NSString, UIApplication;
@protocol AMATBrowsingControllerDelegate;

@interface AMATBrowsingController : NSObject <SKStoreProductViewControllerDelegate, AMMPAdBrowserControllerDelegate>
{
    id <AMATBrowsingControllerDelegate> _delegate;
    UIApplication *_sharedApplication;
    AMALinkUtility *_sharedLinkUtility;
    AMAdConfiguration *_sharedConfiguration;
    AMMetricTracker *_metricTracker;
    AMATBaseAdController *_adController;
}

@property(nonatomic) __weak AMATBaseAdController *adController; // @synthesize adController=_adController;
@property(retain, nonatomic) AMMetricTracker *metricTracker; // @synthesize metricTracker=_metricTracker;
@property(retain, nonatomic) AMAdConfiguration *sharedConfiguration; // @synthesize sharedConfiguration=_sharedConfiguration;
@property(retain, nonatomic) AMALinkUtility *sharedLinkUtility; // @synthesize sharedLinkUtility=_sharedLinkUtility;
@property(retain, nonatomic) UIApplication *sharedApplication; // @synthesize sharedApplication=_sharedApplication;
@property(nonatomic) __weak id <AMATBrowsingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissBrowserController:(id)arg1 animated:(_Bool)arg2 openPrivateURL:(id)arg3;
- (void)dismissBrowserController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissBrowserController:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)submitIntentLaunchMetrics:(_Bool)arg1;
- (_Bool)attemptLoadingIntent:(id)arg1 useExternalBrowser:(_Bool)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1;
- (void)presentViewController:(id)arg1;
- (void)handleOpenUrl:(id)arg1;
- (void)handleAppStoreUrl:(id)arg1;
- (_Bool)handleIntentUrl:(id)arg1 useExternalBrowser:(_Bool)arg2;
- (_Bool)openBrowserWithUrl:(id)arg1 useExternalBrowser:(_Bool)arg2;
- (void)dealloc;
- (id)initWithAdController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

