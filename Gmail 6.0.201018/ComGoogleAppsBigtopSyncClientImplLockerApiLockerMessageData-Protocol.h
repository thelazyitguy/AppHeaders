//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplLockerApiLockerMessageData_LockerFetchStage, ComGoogleCommonBaseOptional, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplLockerApiLockerChallenge, ComGoogleAppsBigtopSyncClientImplLockerApiLockerContent, ComGoogleAppsBigtopSyncClientImplLockerApiLockerFailure, JBTLockerFetchInfo;

@protocol ComGoogleAppsBigtopSyncClientImplLockerApiLockerMessageData <JavaObject>
- (id <JBTLockerFetchInfo>)getFetchInfo;
- (ComGoogleCommonBaseOptional *)getAuthToken;
- (id <ComGoogleAppsBigtopSyncClientImplLockerApiLockerFailure>)getFailure;
- (id <ComGoogleAppsBigtopSyncClientImplLockerApiLockerContent>)getContent;
- (id <ComGoogleAppsBigtopSyncClientImplLockerApiLockerChallenge>)getChallenge;
- (NSString *)getSnippet;
- (ComGoogleAppsBigtopSyncClientImplLockerApiLockerMessageData_LockerFetchStage *)getFetchStage;
@end

