//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailInteractionInfo, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleAppsBigtopServicesGmailRecordCloseMessageCommandOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopServicesGmailInteractionInfo *)getInteractionInfo;
- (_Bool)hasInteractionInfo;
- (long long)getModifiedTimeMs;
- (_Bool)hasModifiedTimeMs;
- (NSString *)getMessageIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getMessageIdList;
- (int)getMessageIdCount;
@end
