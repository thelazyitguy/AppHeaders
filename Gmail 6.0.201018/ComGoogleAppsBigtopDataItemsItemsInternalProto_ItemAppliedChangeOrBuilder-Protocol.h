//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsInternalProto_CreateDraftAppliedChange, ComGoogleAppsBigtopDataItemsItemsInternalProto_MessagesAppliedChange, ComGoogleAppsBigtopDataItemsItemsInternalProto_TaskAppliedChange, ComGoogleAppsBigtopDataItemsItemsProto_ItemVisibilityChange, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataItemsItemsInternalProto_ItemAppliedChangeOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopDataItemsItemsInternalProto_CreateDraftAppliedChange *)getCreateDraftAppliedChange;
- (_Bool)hasCreateDraftAppliedChange;
- (ComGoogleAppsBigtopDataItemsItemsInternalProto_TaskAppliedChange *)getTaskAppliedChange;
- (_Bool)hasTaskAppliedChange;
- (ComGoogleAppsBigtopDataItemsItemsProto_ItemVisibilityChange *)getItemVisibilityChange;
- (_Bool)hasItemVisibilityChange;
- (ComGoogleAppsBigtopDataItemsItemsInternalProto_MessagesAppliedChange *)getMessagesAppliedChangeWithInt:(int)arg1;
- (id <JavaUtilList>)getMessagesAppliedChangeList;
- (int)getMessagesAppliedChangeCount;
- (NSString *)getItemServerPermId;
- (_Bool)hasItemServerPermId;
@end

