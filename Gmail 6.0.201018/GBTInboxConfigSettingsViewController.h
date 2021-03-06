//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseSettingsTableViewController.h"

#import "GBTUserDataProcessingBannerSupport-Protocol.h"
#import "GBTUserDataProcessingServiceListener-Protocol.h"

@class GBTInboxConfigSettingsManager, GBTUserDataProcessingBannerView, NSString;
@protocol GBTInboxConfigSettingsDelegate, GBTUserDataProcessingService, GBTVisualElementLoggerService, JBTClassicGmailInboxConfigSettings;

@interface GBTInboxConfigSettingsViewController : GBTBaseSettingsTableViewController <GBTUserDataProcessingBannerSupport, GBTUserDataProcessingServiceListener>
{
    GBTInboxConfigSettingsManager *_inboxConfigfSettingsManager;
    id <JBTClassicGmailInboxConfigSettings> _selectedInboxConfig;
    id <JBTClassicGmailInboxConfigSettings> _currentInboxConfig;
    _Bool _isImportantFirstSelected;
    GBTUserDataProcessingBannerView *_bannerView;
    id <GBTUserDataProcessingService> _userDataProcessingService;
    id <GBTVisualElementLoggerService> _visualElementLoggerService;
    id <GBTInboxConfigSettingsDelegate> _delegate;
}

+ (id)checkMarkView;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTInboxConfigSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GBTVisualElementLoggerService> visualElementLoggerService; // @synthesize visualElementLoggerService=_visualElementLoggerService;
@property(readonly, nonatomic) id <GBTUserDataProcessingService> userDataProcessingService; // @synthesize userDataProcessingService=_userDataProcessingService;
@property(retain, nonatomic) GBTUserDataProcessingBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)updateBannerForWidth:(double)arg1;
- (void)createHeaderViewWithBanner;
- (void)userDataProcessingServiceDidSyncSettings:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForAppBar:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInboxConfigSettingsManager:(id)arg1 userDataProcessingService:(id)arg2 visualElementLoggerService:(id)arg3;
- (id)initWithInboxConfigSettingsManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

