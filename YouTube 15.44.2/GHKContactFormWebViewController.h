//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GHKWebViewController.h>

@class GHKConfig, GHKContactFormSubmitter, GHKReceiverConfig, GHKURLOpener, GHKUserStates, SUPMetricsReporter;

@interface GHKContactFormWebViewController : GHKWebViewController
{
    _Bool _isActive;
    GHKConfig *_config;
    GHKContactFormSubmitter *_contactFormSubmitter;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKURLOpener *_URLOpener;
    GHKUserStates *_userStates;
}

+ (id)objectionRequires;
- (void).cxx_destruct;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKURLOpener *URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKContactFormSubmitter *contactFormSubmitter; // @synthesize contactFormSubmitter=_contactFormSubmitter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
- (void)handleExitFromViewControllerWithExitStatus:(long long)arg1;
- (void)submitFormSuccess;
- (void)handleEmailFormSubmissionFailureWithFields:(id)arg1;
- (void)submitEmailContactFormWithFields:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end

