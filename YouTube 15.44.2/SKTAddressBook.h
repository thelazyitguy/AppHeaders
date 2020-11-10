//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKTUIAlertDialogOptions;
@protocol GSCAddressBookService, PDLPeopleDataService, PDLPersonFieldFactory, PDLSession, SKTInteractionLogger, SKTSendKitCoreOptions;

@interface SKTAddressBook : NSObject
{
    _Bool _hasUserDeclinedSystemPermissionsDialog;
    _Bool _migrateToLookupForIANTResolution;
    id <GSCAddressBookService> _addressBookService;
    id <PDLPeopleDataService> _autocompleteService;
    id <PDLSession> _autocompleteSession;
    id <PDLPersonFieldFactory> _methodFieldFactory;
    SKTUIAlertDialogOptions *_permissionsPreRequestOptions;
    SKTUIAlertDialogOptions *_settingsDialogOptions;
    id <SKTInteractionLogger> _interactionLogger;
    id <SKTSendKitCoreOptions> _displayOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SKTSendKitCoreOptions> displayOptions; // @synthesize displayOptions=_displayOptions;
@property(readonly, nonatomic) id <SKTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) SKTUIAlertDialogOptions *settingsDialogOptions; // @synthesize settingsDialogOptions=_settingsDialogOptions;
@property(readonly, nonatomic) SKTUIAlertDialogOptions *permissionsPreRequestOptions; // @synthesize permissionsPreRequestOptions=_permissionsPreRequestOptions;
@property(readonly, nonatomic) id <PDLPersonFieldFactory> methodFieldFactory; // @synthesize methodFieldFactory=_methodFieldFactory;
@property(readonly, nonatomic) id <PDLSession> autocompleteSession; // @synthesize autocompleteSession=_autocompleteSession;
@property(readonly, nonatomic) id <PDLPeopleDataService> autocompleteService; // @synthesize autocompleteService=_autocompleteService;
@property(readonly, nonatomic) id <GSCAddressBookService> addressBookService; // @synthesize addressBookService=_addressBookService;
@property(readonly, nonatomic) _Bool migrateToLookupForIANTResolution; // @synthesize migrateToLookupForIANTResolution=_migrateToLookupForIANTResolution;
@property(readonly, nonatomic) _Bool hasUserDeclinedSystemPermissionsDialog; // @synthesize hasUserDeclinedSystemPermissionsDialog=_hasUserDeclinedSystemPermissionsDialog;
- (id)contactContentHash:(id)arg1;
- (id)deduplicatedContactsList:(id)arg1;
- (id)accessDeclinedErrorObject;
- (void)invokeMDCAlertControllerWithTitle:(id)arg1 description:(id)arg2 yesAction:(id)arg3 noAction:(id)arg4;
- (id)promiseToShowSettingsRedirectDialog;
- (id)promiseToShowSystemAddressBookAccessDialog;
- (id)promiseToPreRequestAddressBookAccess;
- (id)promiseToRequestAddressBookAccess;
- (id)loadAllContacts;
- (id)requestContactsPermissions;
@property(readonly, nonatomic) _Bool autorizedContactsPermissions;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) _Bool mayProactivelyRequestContactsPermissions;
@property(readonly, nonatomic) _Bool mayRequestContactsPermissions;
- (id)initWithAddressBookService:(id)arg1 autocompleteService:(id)arg2 methodFieldFactory:(id)arg3 analyticsProvider:(id)arg4 displayOptions:(id)arg5;
- (id)initWithAddressBookService:(id)arg1 autocompleteSession:(id)arg2 methodFieldFactory:(id)arg3 analyticsProvider:(id)arg4 displayOptions:(id)arg5;

@end

