//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAAPIClient.h>

@class UAPreferenceDataStore;

@interface UARemoteDataAPIClient : UAAPIClient
{
    UAPreferenceDataStore *_dataStore;
}

+ (id)clientWithConfig:(id)arg1 dataStore:(id)arg2 session:(id)arg3;
+ (id)clientWithConfig:(id)arg1 dataStore:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)clearLastModifiedTime;
- (id)createRemoteDataURL:(id)arg1;
- (id)requestToRefreshRemoteData;
- (id)fetchRemoteData:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2 session:(id)arg3;

@end
