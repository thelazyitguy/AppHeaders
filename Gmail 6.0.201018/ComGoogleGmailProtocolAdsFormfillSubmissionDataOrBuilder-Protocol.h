//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleGmailProtocolAdsFormfillSubmissionData_FormfillFieldData, NSString;
@protocol JavaUtilList;

@protocol ComGoogleGmailProtocolAdsFormfillSubmissionDataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getSerializedFormMetadata;
- (_Bool)hasSerializedFormMetadata;
- (ComGoogleGmailProtocolAdsFormfillSubmissionData_FormfillFieldData *)getFieldDataWithInt:(int)arg1;
- (id <JavaUtilList>)getFieldDataList;
- (int)getFieldDataCount;
@end
