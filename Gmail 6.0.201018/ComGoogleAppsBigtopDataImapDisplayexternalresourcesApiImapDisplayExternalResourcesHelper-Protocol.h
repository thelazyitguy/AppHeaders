//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataImapImapProto_ImapMessageSummary, ComGoogleAppsBigtopServicesGmailServerDisplayExternalResourcesDecision, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleAppsBigtopDataImapDisplayexternalresourcesApiImapDisplayExternalResourcesHelper <JavaObject>
- (ComGoogleAppsBigtopServicesGmailServerDisplayExternalResourcesDecision *)getDisplayExternalResourcesDecisionForWithComGoogleAppsBigtopDataImapImapProto_ImapMessageSummary:(ComGoogleAppsBigtopDataImapImapProto_ImapMessageSummary *)arg1;
- (_Bool)isSenderWhitelistedForDisplayingExternalResourcesWithNSString:(NSString *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)removeWhitelistedDisplayExternalResourcesSenderWithNSString:(NSString *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)whitelistDisplayExternalResourcesSenderWithNSString:(NSString *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)loadWhitelistedDisplayExternalResourcesSenders;
@end
