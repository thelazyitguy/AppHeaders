//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1DeleteContactsOperationDelegate-Protocol.h>
#import <T1Twitter/T1SynchronizeContactsOperationDelegate-Protocol.h>
#import <T1Twitter/T1UploadContactsOperationDelegate-Protocol.h>

@class NSDate, T1PeopleAddressBookSynchronizationContactCache, TFNTwitterAccount;
@protocol T1PeopleAddressBook, T1PeopleAddressBookSynchronizationControllerDelegate, T1PeopleAddressBookSynchronizationSettings;

@interface T1PeopleAddressBookSynchronizationController : NSObject <T1DeleteContactsOperationDelegate, T1SynchronizeContactsOperationDelegate, T1UploadContactsOperationDelegate>
{
    _Bool _didPopulateContactsCache;
    _Bool _synchronizing;
    _Bool _contactsCacheIOInProgress;
    id <T1PeopleAddressBookSynchronizationSettings> _settings;
    TFNTwitterAccount *_account;
    id <T1PeopleAddressBookSynchronizationControllerDelegate> _delegate;
    id <T1PeopleAddressBook> _addressBook;
    unsigned long long _backgroundTaskIdentifier;
    T1PeopleAddressBookSynchronizationContactCache *_contactsCache;
    NSDate *_dateOfLastSynchronization;
}

+ (id)_cacheDirectory;
- (void).cxx_destruct;
@property(nonatomic, getter=isContactsCacheIOInProgress) _Bool contactsCacheIOInProgress; // @synthesize contactsCacheIOInProgress=_contactsCacheIOInProgress;
@property(retain, nonatomic) NSDate *dateOfLastSynchronization; // @synthesize dateOfLastSynchronization=_dateOfLastSynchronization;
@property(nonatomic, getter=isSynchronizing) _Bool synchronizing; // @synthesize synchronizing=_synchronizing;
@property(readonly, nonatomic) T1PeopleAddressBookSynchronizationContactCache *contactsCache; // @synthesize contactsCache=_contactsCache;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) id <T1PeopleAddressBook> addressBook; // @synthesize addressBook=_addressBook;
@property(nonatomic) __weak id <T1PeopleAddressBookSynchronizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didPopulateContactsCache; // @synthesize didPopulateContactsCache=_didPopulateContactsCache;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <T1PeopleAddressBookSynchronizationSettings> settings; // @synthesize settings=_settings;
- (unsigned long long)_t1_backgroundTaskIdentifier;
- (void)_serializeContactsCache;
- (void)_finishSynchronization;
- (void)_deserializeContactsCache;
- (void)_synchronizeByUploadingContacts:(id)arg1 deletingContacts:(id)arg2;
- (id)_pathForContactsCacheArchive;
- (id)_contactsRequiringUpload;
- (_Bool)_isAddressBookAccessAuthorizedByUser;
- (_Bool)_errorIsRetryable:(id)arg1;
- (void)_endBackgroundTaskIfNeeded;
- (_Bool)_isLiveAddressBookSynchronizationEnabled;
- (void)_beginBackgroundTaskIfNeeded;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_accountDidUpdate:(id)arg1;
- (void)synchronizeContactsOperationDidFinish:(id)arg1;
- (void)uploadContactsOperation:(id)arg1 didFailToUploadContacts:(id)arg2 withError:(id)arg3;
- (void)uploadContactsOperation:(id)arg1 didUploadContacts:(id)arg2;
- (void)deleteContactsOperation:(id)arg1 didFailToDeleteContacts:(id)arg2 withError:(id)arg3;
- (void)deleteContactsOperation:(id)arg1 didDeleteContacts:(id)arg2;
- (void)didFailToUploadContacts:(id)arg1 withError:(id)arg2;
- (void)didFailToSynchronizeContactsWithError:(id)arg1;
- (void)didUploadContacts:(id)arg1;
@property(readonly, nonatomic) double timeIntervalSinceLastSynchronization;
- (void)synchronizeContacts;
@property(readonly, nonatomic) _Bool canSynchronizeContacts;
- (void)populateContactsCache;
- (void)initiateContactsSynchronization;
- (id)init;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2 settings:(id)arg3;
- (void)synchronizeByUploadingContacts:(id)arg1 deletingContacts:(id)arg2 delegate:(id)arg3;

@end

