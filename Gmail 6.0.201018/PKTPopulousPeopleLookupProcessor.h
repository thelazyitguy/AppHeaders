//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKTPeopleLookupProcessor-Protocol.h"

@class NSString;
@protocol PDLPeopleDataService, PKTPopulousContactFactory;

@interface PKTPopulousPeopleLookupProcessor : NSObject <PKTPeopleLookupProcessor>
{
    id <PDLPeopleDataService> _peopleDataService;
    long long _clientID;
    id <PKTPopulousContactFactory> _contactFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PKTPopulousContactFactory> contactFactory; // @synthesize contactFactory=_contactFactory;
@property(readonly, nonatomic) long long clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) id <PDLPeopleDataService> peopleDataService; // @synthesize peopleDataService=_peopleDataService;
- (id)lookupContactsForLookupIDs:(id)arg1;
- (id)initWithPeopleDataService:(id)arg1 clientID:(long long)arg2 contactFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

