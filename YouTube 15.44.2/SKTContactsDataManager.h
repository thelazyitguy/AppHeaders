//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSHashTable, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, Reachability, SKTAddressBook, SKTAnalyticsProvider, SKTClientConfig, SKTLatencyTimer;
@protocol PDLPeopleDataService, PDLSession, SKTSendKitCoreOptions;

@interface SKTContactsDataManager : NSObject
{
    _Bool _hasReceivedDelayCallback;
    NSHashTable *_delegates;
    NSSet *_sharedWithContacts;
    SKTAddressBook *_addressBookService;
    id <SKTSendKitCoreOptions> _options;
    id <PDLPeopleDataService> _autocompleteService;
    id <PDLSession> _autocompleteSession;
    SKTClientConfig *_clientConfig;
    SKTAnalyticsProvider *_analyticsProvider;
    NSMutableOrderedSet *_mutableSelectedContacts;
    NSMutableSet *_mutableContactsWithHideableNames;
    NSMutableArray *_mutableSuggestions;
    NSString *_latestQueryText;
    SKTLatencyTimer *_queryTimer;
    NSDate *_recentFastRemoteCallbackTimestamp;
    Reachability *_reachability;
}

+ (long long)autocompleteClientIDFromSendKitClientID:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSDate *recentFastRemoteCallbackTimestamp; // @synthesize recentFastRemoteCallbackTimestamp=_recentFastRemoteCallbackTimestamp;
@property(nonatomic) _Bool hasReceivedDelayCallback; // @synthesize hasReceivedDelayCallback=_hasReceivedDelayCallback;
@property(retain, nonatomic) SKTLatencyTimer *queryTimer; // @synthesize queryTimer=_queryTimer;
@property(copy, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(copy, nonatomic) NSMutableArray *mutableSuggestions; // @synthesize mutableSuggestions=_mutableSuggestions;
@property(copy, nonatomic) NSMutableSet *mutableContactsWithHideableNames; // @synthesize mutableContactsWithHideableNames=_mutableContactsWithHideableNames;
@property(copy, nonatomic) NSMutableOrderedSet *mutableSelectedContacts; // @synthesize mutableSelectedContacts=_mutableSelectedContacts;
@property(retain, nonatomic) SKTAnalyticsProvider *analyticsProvider; // @synthesize analyticsProvider=_analyticsProvider;
@property(readonly, nonatomic) SKTClientConfig *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(retain, nonatomic) id <PDLSession> autocompleteSession; // @synthesize autocompleteSession=_autocompleteSession;
@property(retain, nonatomic) id <PDLPeopleDataService> autocompleteService; // @synthesize autocompleteService=_autocompleteService;
@property(readonly, nonatomic) id <SKTSendKitCoreOptions> options; // @synthesize options=_options;
@property(retain, nonatomic) SKTAddressBook *addressBookService; // @synthesize addressBookService=_addressBookService;
@property(readonly, nonatomic) NSSet *sharedWithContacts; // @synthesize sharedWithContacts=_sharedWithContacts;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (_Bool)nextRemoteCallbackIsLikelyFast;
- (void)handlePopulousCallbackWithCallbackInfo:(id)arg1;
- (long long)queryStateFromCallbackInfo:(id)arg1;
- (id)contactsFromAutocompletions:(id)arg1 dataProvenance:(unsigned long long)arg2;
- (_Bool)shouldGroupContactBeFilteredOutAsPreviouslySharedWith:(id)arg1;
- (_Bool)shouldPersonContactBeFilteredOutAsPreviouslySharedWith:(id)arg1;
@property(readonly, nonatomic, getter=isLatestQueryIsSuggestions) _Bool latestQueryIsSuggestions;
- (void)closeDataSessionWithAction:(unsigned long long)arg1;
- (void)reportContactMethodsDisplayed:(id)arg1 contactSource:(long long)arg2;
- (id)reportingItemFromContactMethod:(id)arg1;
- (_Bool)hasHideableSelectedNames;
- (void)hideDisplayNameForContact:(id)arg1;
- (id)selectedOptionsForContact:(id)arg1;
- (void)removeAllSelectedContacts;
- (_Bool)removeSelectedContact:(id)arg1;
- (_Bool)addSelectedContact:(id)arg1 contactSource:(long long)arg2;
@property(readonly, nonatomic) NSArray *selectedContacts;
- (id)selectedSendTargets;
@property(readonly, nonatomic) NSArray *suggestedContacts;
- (id)lookupProfileInfoForContact:(id)arg1;
- (void)resetLatestQueryText;
- (id)loadContactsWithQueryText:(id)arg1 forceQuery:(_Bool)arg2 forUIType:(long long)arg3;
- (id)loadSuggestedContactsForUIType:(long long)arg1;
- (void)dealloc;
- (id)initWithAddressBookService:(id)arg1 analyticsProvider:(id)arg2 peopleDataService:(id)arg3 displayOptions:(id)arg4 migrateToLookupForIANTResolution:(_Bool)arg5;

@end

