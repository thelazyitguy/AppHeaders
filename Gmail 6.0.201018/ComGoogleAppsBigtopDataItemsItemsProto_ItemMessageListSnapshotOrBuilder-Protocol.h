//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_VisibleLabel, ComGoogleAppsBigtopServicesGmailBigTopGmailThread;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataItemsItemsProto_ItemMessageListSnapshotOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopDataItemsItemsProto_VisibleLabel *)getVisibleLabelsForConversationViewWithInt:(int)arg1;
- (id <JavaUtilList>)getVisibleLabelsForConversationViewList;
- (int)getVisibleLabelsForConversationViewCount;
- (_Bool)getIncludesRemoteData;
- (_Bool)hasIncludesRemoteData;
- (_Bool)getIsRemoteFetchInProgress;
- (_Bool)hasIsRemoteFetchInProgress;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailThread *)getThread;
- (_Bool)hasThread;
- (int)getVersion;
- (_Bool)hasVersion;
@end
