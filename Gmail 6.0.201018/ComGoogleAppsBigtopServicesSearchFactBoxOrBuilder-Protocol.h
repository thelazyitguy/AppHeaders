//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesSearchFactBoxDetail, ComGoogleCaribouSmartmailAction, ComGoogleCaribouSmartmailDetailedLayoutSection, ComGoogleCaribouSmartmailSmartMailInfo, JCSAssignedId, JCSFormattedText, JCSImage, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopServicesSearchFactBoxOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCaribouSmartmailSmartMailInfo *)getSmartMailInfo;
- (_Bool)hasSmartMailInfo;
- (int)getSecondaryColor;
- (_Bool)hasSecondaryColor;
- (int)getSampleColor;
- (_Bool)hasSampleColor;
- (JCSImage *)getImage;
- (_Bool)hasImage;
- (JCSAssignedId *)getAssignedId;
- (_Bool)hasAssignedId;
- (NSString *)getSourceThreadId;
- (_Bool)hasSourceThreadId;
- (ComGoogleCaribouSmartmailAction *)getActionWithInt:(int)arg1;
- (id <JavaUtilList>)getActionList;
- (int)getActionCount;
- (ComGoogleAppsBigtopServicesSearchFactBoxDetail *)getFactBoxDetailWithInt:(int)arg1;
- (id <JavaUtilList>)getFactBoxDetailList;
- (int)getFactBoxDetailCount;
- (ComGoogleCaribouSmartmailDetailedLayoutSection *)getFactSectionWithInt:(int)arg1;
- (id <JavaUtilList>)getFactSectionList;
- (int)getFactSectionCount;
- (JCSFormattedText *)getSubtitle;
- (_Bool)hasSubtitle;
- (JCSFormattedText *)getTitle;
- (_Bool)hasTitle;
@end

