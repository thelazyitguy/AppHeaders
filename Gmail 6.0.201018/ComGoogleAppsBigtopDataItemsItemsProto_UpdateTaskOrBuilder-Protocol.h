//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsSlicesProtos_MessageSummary, ComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition, ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleAppsBigtopServicesTasksBigTopTask_Type, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleAppsBigtopDataItemsItemsProto_UpdateTaskOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopDataItemsItemsSlicesProtos_MessageSummary *)getBumpMessageSummary;
- (_Bool)hasBumpMessageSummary;
- (NSString *)getAdditionalLabelsToRemoveWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getAdditionalLabelsToRemoveList;
- (int)getAdditionalLabelsToRemoveCount;
- (NSString *)getAdditionalLabelsToAddWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getAdditionalLabelsToAddList;
- (int)getAdditionalLabelsToAddCount;
- (_Bool)getAddBumpCommand;
- (_Bool)hasAddBumpCommand;
- (ComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition *)getStateTransition;
- (_Bool)hasStateTransition;
- (ComGoogleAppsBigtopServicesTasksBigTopTask *)getExistingTask;
- (_Bool)hasExistingTask;
- (ComGoogleAppsBigtopServicesTasksBigTopTask *)getUpdatedTask;
- (_Bool)hasUpdatedTask;
- (NSString *)getItemServerPermId;
- (_Bool)hasItemServerPermId;
- (ComGoogleAppsBigtopServicesTasksBigTopTask_Type *)getType;
- (_Bool)hasType;
@end
