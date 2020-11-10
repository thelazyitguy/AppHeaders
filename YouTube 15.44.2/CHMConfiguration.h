//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBAny, NSArray, NSString;
@protocol CHMAccountService, CHMEventService, CHMNotificationsStore, GTMSessionFetcherServiceProtocol;

@interface CHMConfiguration : NSObject
{
    NSString *_chimeClientID;
    id <CHMAccountService> _accountService;
    id <GTMSessionFetcherServiceProtocol> _fetcherService;
    long long _APIEndpoint;
    NSString *_APIURLString;
    NSString *_APIKey;
    NSArray *_selectionTokens;
    GPBAny *_devicePayload;
    double _registrationInterval;
    CDUnknownBlockType _devicePayloadProvider;
    CDUnknownBlockType _selectionTokensProvider;
    id <CHMEventService> _eventService;
    NSString *_appLanguageCode;
    long long _syncType;
    id <CHMNotificationsStore> _notificationsStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CHMNotificationsStore> notificationsStore; // @synthesize notificationsStore=_notificationsStore;
@property(nonatomic) long long syncType; // @synthesize syncType=_syncType;
@property(copy, nonatomic) NSString *appLanguageCode; // @synthesize appLanguageCode=_appLanguageCode;
@property(retain, nonatomic) id <CHMEventService> eventService; // @synthesize eventService=_eventService;
@property(copy, nonatomic) CDUnknownBlockType selectionTokensProvider; // @synthesize selectionTokensProvider=_selectionTokensProvider;
@property(copy, nonatomic) CDUnknownBlockType devicePayloadProvider; // @synthesize devicePayloadProvider=_devicePayloadProvider;
@property(nonatomic) double registrationInterval; // @synthesize registrationInterval=_registrationInterval;
@property(retain, nonatomic) GPBAny *devicePayload; // @synthesize devicePayload=_devicePayload;
@property(copy, nonatomic) NSArray *selectionTokens; // @synthesize selectionTokens=_selectionTokens;
@property(readonly, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(readonly, nonatomic) NSString *APIURLString; // @synthesize APIURLString=_APIURLString;
@property(nonatomic) long long APIEndpoint; // @synthesize APIEndpoint=_APIEndpoint;
@property(retain, nonatomic) id <GTMSessionFetcherServiceProtocol> fetcherService; // @synthesize fetcherService=_fetcherService;
@property(readonly, nonatomic) id <CHMAccountService> accountService; // @synthesize accountService=_accountService;
@property(readonly, copy, nonatomic) NSString *chimeClientID; // @synthesize chimeClientID=_chimeClientID;
- (id)apiURLStringForEndpoint:(long long)arg1;
- (long long)endpointForAPIURLString:(id)arg1;
- (void)setAPIURLString:(id)arg1;
- (id)initWithChimeClientID:(id)arg1 APIKey:(id)arg2 accountService:(id)arg3 fetcherService:(id)arg4;
- (id)initWithChimeClientID:(id)arg1 APIKey:(id)arg2 accountService:(id)arg3;

@end

