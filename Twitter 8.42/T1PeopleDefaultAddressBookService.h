//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1PeopleAddressBookAccessController;

@interface T1PeopleDefaultAddressBookService : NSObject
{
    // Error parsing type: , name: addressBook
    // Error parsing type: , name: settings
    // Error parsing type: , name: commandService
    // Error parsing type: , name: commandContext
    // Error parsing type: , name: accountID
    // Error parsing type: , name: accountModel
    // Error parsing type: , name: synchronizationController
    // Error parsing type: , name: currentOptInOperation
    // Error parsing type: , name: $__lazy_storage_$_accessController
}

+ (void)initiateContactsSynchronizationWithAccount:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)fetchActiveContactsRecommendationsWithDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchContactsWithDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)optOutWithReason:(long long)arg1;
- (id)optIn;
- (id)optInAfterDelayWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initiateContactsSynchronization;
@property(nonatomic, retain) T1PeopleAddressBookAccessController *accessController;
@property(nonatomic, readonly) _Bool contactsSynchronizationOptedOut;
@property(nonatomic, readonly) _Bool contactsSynchronizationAuthorized;
@property(nonatomic, readonly) _Bool contactsFetchAuthorized;

@end

