//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsSlicesProtos_AttachmentSummary, ComGoogleAppsBigtopDataItemsItemsSlicesProtos_RemotePartReferenceDetails, ComGoogleProtobufByteString, NSString;

@protocol ComGoogleAppsBigtopDataItemsItemsSlicesProtos_AttachmentDetailsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopDataItemsItemsSlicesProtos_RemotePartReferenceDetails *)getRemotePartRef;
- (_Bool)hasRemotePartRef;
- (NSString *)getRemotePartRefString;
- (_Bool)hasRemotePartRefString;
- (NSString *)getIdFromHeader;
- (_Bool)hasIdFromHeader;
- (ComGoogleProtobufByteString *)getPayload;
- (_Bool)hasPayload;
- (ComGoogleAppsBigtopDataItemsItemsSlicesProtos_AttachmentSummary *)getSummary;
- (_Bool)hasSummary;
@end
