//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailMessage, ComGoogleAppsBigtopServicesGmailContactsSummary, ComGoogleAppsBigtopServicesGmailInteractionMetadata, ComGoogleAppsBigtopServicesGmailSmartreplySuggestions, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopServicesGmailBigTopGmailThreadOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getAttachmentsCount;
- (_Bool)hasAttachmentsCount;
- (_Bool)getWalletAttachmentAttached;
- (_Bool)hasWalletAttachmentAttached;
- (ComGoogleAppsBigtopServicesGmailContactsSummary *)getSendersSummaryForChatsView;
- (_Bool)hasSendersSummaryForChatsView;
- (ComGoogleAppsBigtopServicesGmailContactsSummary *)getSendersSummaryForSentView;
- (_Bool)hasSendersSummaryForSentView;
- (float)getHighlightsScore;
- (_Bool)hasHighlightsScore;
- (ComGoogleAppsBigtopServicesGmailSmartreplySuggestions *)getThreadlistSmartreplySuggestions;
- (_Bool)hasThreadlistSmartreplySuggestions;
- (ComGoogleAppsBigtopServicesGmailInteractionMetadata *)getInteractionMetadata;
- (_Bool)hasInteractionMetadata;
- (long long)getTopicEndTimeMs;
- (_Bool)hasTopicEndTimeMs;
- (NSString *)getBumpMessageId;
- (_Bool)hasBumpMessageId;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailMessage *)getMessageWithInt:(int)arg1;
- (id <JavaUtilList>)getMessageList;
- (int)getMessageCount;
- (long long)getArchivedTimeMs;
- (_Bool)hasArchivedTimeMs;
- (long long)getReceivedTimeMs;
- (_Bool)hasReceivedTimeMs;
- (NSString *)getSnippet;
- (_Bool)hasSnippet;
- (NSString *)getSubject;
- (_Bool)hasSubject;
- (NSString *)getLegacyThreadStorageIdHex;
- (_Bool)hasLegacyThreadStorageIdHex;
- (long long)getLegacyThreadStorageId;
- (_Bool)hasLegacyThreadStorageId;
- (NSString *)getParentServerPermId;
- (_Bool)hasParentServerPermId;
- (NSString *)getId;
- (_Bool)hasId;
@end
