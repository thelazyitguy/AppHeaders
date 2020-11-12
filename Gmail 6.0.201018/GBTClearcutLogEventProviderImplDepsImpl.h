//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTClearcutLogEventProviderImplDeps-Protocol.h"

@class GOOProvider, NSString;
@protocol GBTAccountsService, GBTOnDeviceExperimentService, GIPAccountID;

@interface GBTClearcutLogEventProviderImplDepsImpl : NSObject <GBTClearcutLogEventProviderImplDeps>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_onDeviceExperimentServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *onDeviceExperimentServiceProvider; // @synthesize onDeviceExperimentServiceProvider=_onDeviceExperimentServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <GBTOnDeviceExperimentService> onDeviceExperimentService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id)initWithAccountID:(id)arg1 accountsServiceProvider:(id)arg2 onDeviceExperimentServiceProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
