//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoAttendeeResponseStatus, DYNProtoUserId, NSString;

@protocol DYNProtoEventAttendeeOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getFirstName;
- (_Bool)hasFirstName;
- (NSString *)getFullName;
- (_Bool)hasFullName;
- (_Bool)getIsRequester;
- (_Bool)hasIsRequester;
- (_Bool)getIsOrganizer;
- (_Bool)hasIsOrganizer;
- (DYNProtoAttendeeResponseStatus *)getResponseStatus;
- (_Bool)hasResponseStatus;
- (DYNProtoUserId *)getUserId;
- (_Bool)hasUserId;
- (NSString *)getEmail;
- (_Bool)hasEmail;
@end
