//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBUserAvailabilityServiceDeps-Protocol.h"

@class GOOProvider, NSString;
@protocol GIPAccountID, PDLPeopleDataService, PILAvailabilityService;

@interface HUBUserAvailabilityServiceDepsImpl : NSObject <HUBUserAvailabilityServiceDeps>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_availabilityServiceProvider;
    GOOProvider *_peopleDataServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *peopleDataServiceProvider; // @synthesize peopleDataServiceProvider=_peopleDataServiceProvider;
@property(readonly, nonatomic) GOOProvider *availabilityServiceProvider; // @synthesize availabilityServiceProvider=_availabilityServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <PDLPeopleDataService> peopleDataService;
@property(readonly, nonatomic) id <PILAvailabilityService> availabilityService;
- (id)initWithAccountID:(id)arg1 availabilityServiceProvider:(id)arg2 peopleDataServiceProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
