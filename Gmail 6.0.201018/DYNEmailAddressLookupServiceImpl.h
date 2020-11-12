//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNEmailAddressLookupService-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol DYNJavaObjectFactoryService, DYNSharedLayerService, PDLPeopleDataService;

@interface DYNEmailAddressLookupServiceImpl : NSObject <DYNEmailAddressLookupService>
{
    id <DYNJavaObjectFactoryService> _javaObjectFactoryService;
    id <PDLPeopleDataService> _peopleDataService;
    id <DYNSharedLayerService> _sharedLayerService;
    NSMutableDictionary *_aggregatedCallbackInfoDict;
}

- (void).cxx_destruct;
- (id)userFromPopulousUser:(id)arg1;
- (id)lookupResultFromCallbackInfoList:(id)arg1;
- (void)completeLookupForUUID:(id)arg1 promise:(id)arg2;
- (void)storeResultsForUUID:(id)arg1 callbackInfo:(id)arg2 errors:(id)arg3 promise:(id)arg4;
- (id)lookupUsersForEmailAddresses:(id)arg1;
- (id)initWithJavaObjectFactoryService:(id)arg1 peopleDataService:(id)arg2 sharedLayerService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
