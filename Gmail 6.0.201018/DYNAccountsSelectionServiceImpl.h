//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNAccountsSelectionService-Protocol.h"
#import "GSCManageAccountsViewControllerDelegate-Protocol.h"
#import "GSCSelectAccountViewControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol DYNDeveloperSettingsService, GSCAccountsProtectedService;

@interface DYNAccountsSelectionServiceImpl : NSObject <GSCSelectAccountViewControllerDelegate, GSCManageAccountsViewControllerDelegate, DYNAccountsSelectionService>
{
    UIViewController *_rootViewController;
    id <GSCAccountsProtectedService> _accountsProtectedService;
    id <DYNDeveloperSettingsService> _developerSettingsService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNDeveloperSettingsService> developerSettingsService; // @synthesize developerSettingsService=_developerSettingsService;
- (id)activateAndSetForegroundAccountWithID:(id)arg1;
- (void)dismissAccountsSelectionViewController;
- (void)didTapDone;
- (void)didSelectAccount:(id)arg1;
- (void)didTapCancel;
- (void)selectAccount:(id)arg1;
- (void)presentAccountsSelectionViewControllerWithRootViewController:(id)arg1;
- (id)initWithAccountsProtectedService:(id)arg1 developerSettingsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

