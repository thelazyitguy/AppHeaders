//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class MOCExperimentContextPb, NSMutableArray, NSString, ORCH2NativeClientContext, ORCH2SessionData;

@interface ORCH2RequestContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int accountCount; // @dynamic accountCount;
@property(retain, nonatomic) NSMutableArray *accountsArray; // @dynamic accountsArray;
@property(readonly, nonatomic) unsigned long long accountsArray_Count; // @dynamic accountsArray_Count;
@property(readonly, nonatomic) int clientContextOneOfCase; // @dynamic clientContextOneOfCase;
@property(nonatomic) long long clientSessionId; // @dynamic clientSessionId;
@property(nonatomic) int clientType; // @dynamic clientType;
@property(nonatomic) long long clientVersion; // @dynamic clientVersion;
@property(nonatomic) int currentAccountIndex; // @dynamic currentAccountIndex;
@property(retain, nonatomic) MOCExperimentContextPb *experimentContext; // @dynamic experimentContext;
@property(nonatomic) _Bool hasAccountCount; // @dynamic hasAccountCount;
@property(nonatomic) _Bool hasClientSessionId; // @dynamic hasClientSessionId;
@property(nonatomic) _Bool hasClientType; // @dynamic hasClientType;
@property(nonatomic) _Bool hasClientVersion; // @dynamic hasClientVersion;
@property(nonatomic) _Bool hasCurrentAccountIndex; // @dynamic hasCurrentAccountIndex;
@property(nonatomic) _Bool hasExperimentContext; // @dynamic hasExperimentContext;
@property(nonatomic) _Bool hasIsPrefetchRequest; // @dynamic hasIsPrefetchRequest;
@property(nonatomic) _Bool hasLanguageCode; // @dynamic hasLanguageCode;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(nonatomic) _Bool hasSessionData; // @dynamic hasSessionData;
@property(nonatomic) _Bool hasUserType; // @dynamic hasUserType;
@property(nonatomic) _Bool isPrefetchRequest; // @dynamic isPrefetchRequest;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;
@property(retain, nonatomic) ORCH2NativeClientContext *nativeContext; // @dynamic nativeContext;
@property(nonatomic) long long requestId; // @dynamic requestId;
@property(retain, nonatomic) ORCH2SessionData *sessionData; // @dynamic sessionData;
@property(nonatomic) int userType; // @dynamic userType;

@end
