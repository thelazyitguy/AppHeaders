//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "YTUpgradeWorkerDelegate-Protocol.h"

@class GIMMe, NSString, YTAlertView, YTConfirmDialogController, YTGlobalConfig;
@protocol YTAppConfig;

@interface YTUpgradeController : NSObject <GOOAlertViewDelegate, UIAlertViewDelegate, YTUpgradeWorkerDelegate>
{
    YTGlobalConfig *_globalConfig;
    YTAlertView *_alertView;
    id <YTAppConfig> _appConfig;
    YTConfirmDialogController *_confirmDialogController;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)appUpdateURL;
- (id)alertViewWithType:(long long)arg1;
- (void)showOldUpgradeDialog;
- (void)showUpgradeDialog;
- (void)setConfirmDialogController:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)requestUpgradeCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
