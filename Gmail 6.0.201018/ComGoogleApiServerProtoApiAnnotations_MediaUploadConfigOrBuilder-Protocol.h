//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleApiServerProtoApiAnnotations_MediaUploadConfigOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getIntermediateResumableResponseHeaders;
- (_Bool)hasIntermediateResumableResponseHeaders;
- (_Bool)getResumableUploadDatEnabled;
- (_Bool)hasResumableUploadDatEnabled;
- (_Bool)getCompleteNotification;
- (_Bool)hasCompleteNotification;
- (_Bool)getProgressNotification;
- (_Bool)hasProgressNotification;
- (_Bool)getStartNotification;
- (_Bool)hasStartNotification;
- (NSString *)getMaxSize;
- (_Bool)hasMaxSize;
- (NSString *)getAcceptWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getAcceptList;
- (int)getAcceptCount;
@end
