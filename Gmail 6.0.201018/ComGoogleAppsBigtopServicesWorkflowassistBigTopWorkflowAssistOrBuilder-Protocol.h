//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesWorkflowassistBigTopWorkflowAssist_Type, ComGoogleAppsBigtopServicesWorkflowassistCardCriteria, ComGoogleAppsBigtopServicesWorkflowassistWorkflowButton, ComGoogleAppsBigtopServicesWorkflowassistWorkflowText, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopServicesWorkflowassistBigTopWorkflowAssistOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopServicesWorkflowassistWorkflowText *)getLocalizableSenderPlaceholder;
- (_Bool)hasLocalizableSenderPlaceholder;
- (ComGoogleAppsBigtopServicesWorkflowassistWorkflowText *)getLocalizableDescription;
- (_Bool)hasLocalizableDescription;
- (ComGoogleAppsBigtopServicesWorkflowassistWorkflowText *)getLocalizableTitle;
- (_Bool)hasLocalizableTitle;
- (int)getNumAffectedItems;
- (_Bool)hasNumAffectedItems;
- (NSString *)getSenderPlaceholder;
- (_Bool)hasSenderPlaceholder;
- (NSString *)getDescription;
- (_Bool)hasDescription;
- (NSString *)getTitle;
- (_Bool)hasTitle;
- (NSString *)getLoggingId;
- (_Bool)hasLoggingId;
- (ComGoogleAppsBigtopServicesWorkflowassistCardCriteria *)getCardCriteriaWithInt:(int)arg1;
- (id <JavaUtilList>)getCardCriteriaList;
- (int)getCardCriteriaCount;
- (ComGoogleAppsBigtopServicesWorkflowassistWorkflowButton *)getOverflowButtonsWithInt:(int)arg1;
- (id <JavaUtilList>)getOverflowButtonsList;
- (int)getOverflowButtonsCount;
- (ComGoogleAppsBigtopServicesWorkflowassistWorkflowButton *)getCardButtonsWithInt:(int)arg1;
- (id <JavaUtilList>)getCardButtonsList;
- (int)getCardButtonsCount;
- (NSString *)getIconUrl;
- (_Bool)hasIconUrl;
- (ComGoogleAppsBigtopServicesWorkflowassistBigTopWorkflowAssist_Type *)getType;
- (_Bool)hasType;
@end
