//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTConversationMessage-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsSlicesProtos_DetailedMessage, ComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageData, ComGoogleCommonBaseOptional;
@protocol ComGoogleAppsBigtopSyncClientImplConversationsApiInternalInternalConversation, JavaUtilList;

@protocol ComGoogleAppsBigtopSyncClientImplConversationsApiInternalInternalConversationMessage <JBTConversationMessage, JavaObject>
- (id <ComGoogleAppsBigtopSyncClientImplConversationsApiInternalInternalConversation>)getOwnerConversation;
- (id <JavaUtilList>)getBodyHtmlRegionsWithoutConvertingWalletRegion;
- (id <JavaUtilList>)getBcc;
- (id <JavaUtilList>)getCc;
- (id <JavaUtilList>)getTo;
- (ComGoogleAppsBigtopDataItemsItemsSlicesProtos_DetailedMessage *)getProto;
- (ComGoogleCommonBaseOptional *)getUnclippedMessageData;
- (ComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageData *)getMessageData;
@end

