//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleGmailProtocolAdsFormfillFieldAnswerOption, ComGoogleGmailProtocolAdsFormfillFieldInfo_FormfillFieldType, ComGoogleGmailProtocolAdsFormfillFieldPrefillSourceInfo, NSString;
@protocol JavaUtilList;

@protocol ComGoogleGmailProtocolAdsFormfillFieldInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getPlaceholderText;
- (_Bool)hasPlaceholderText;
- (ComGoogleGmailProtocolAdsFormfillFieldAnswerOption *)getAnswerOptionsWithInt:(int)arg1;
- (id <JavaUtilList>)getAnswerOptionsList;
- (int)getAnswerOptionsCount;
- (ComGoogleGmailProtocolAdsFormfillFieldPrefillSourceInfo *)getPrefillSourceInfoListWithInt:(int)arg1;
- (id <JavaUtilList>)getPrefillSourceInfoListList;
- (int)getPrefillSourceInfoListCount;
- (_Bool)getDisableFormatValidation;
- (_Bool)hasDisableFormatValidation;
- (ComGoogleGmailProtocolAdsFormfillFieldPrefillSourceInfo *)getPrefillSourceInfo;
- (_Bool)hasPrefillSourceInfo;
- (NSString *)getPrefillValue;
- (_Bool)hasPrefillValue;
- (NSString *)getRegionLabel;
- (_Bool)hasRegionLabel;
- (NSString *)getErrorMessage;
- (_Bool)hasErrorMessage;
- (_Bool)getIsRequired;
- (_Bool)hasIsRequired;
- (NSString *)getClickserverFieldKey;
- (_Bool)hasClickserverFieldKey;
- (NSString *)getBackendFieldKey;
- (_Bool)hasBackendFieldKey;
- (NSString *)getLabel;
- (_Bool)hasLabel;
- (ComGoogleGmailProtocolAdsFormfillFieldInfo_FormfillFieldType *)getType;
- (_Bool)hasType;
@end
