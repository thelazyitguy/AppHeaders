//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesSettingsVacationResponderSettings_ResponseBodyType, ComGoogleCommonHtmlTypesSafeHtmlProto, NSString;

@protocol ComGoogleAppsBigtopServicesSettingsVacationResponderSettingsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (long long)getEndTimeMs;
- (_Bool)hasEndTimeMs;
- (long long)getStartTimeMs;
- (_Bool)hasStartTimeMs;
- (_Bool)getRestrictedToDomain;
- (_Bool)hasRestrictedToDomain;
- (_Bool)getCanRestrictByDomain;
- (_Bool)hasCanRestrictByDomain;
- (_Bool)getRestrictedToContacts;
- (_Bool)hasRestrictedToContacts;
- (ComGoogleCommonHtmlTypesSafeHtmlProto *)getSanitizedResponseBody;
- (_Bool)hasSanitizedResponseBody;
- (NSString *)getUnsanitizedResponseBody;
- (_Bool)hasUnsanitizedResponseBody;
- (ComGoogleAppsBigtopServicesSettingsVacationResponderSettings_ResponseBodyType *)getResponseBodyType;
- (_Bool)hasResponseBodyType;
- (NSString *)getResponseSubject;
- (_Bool)hasResponseSubject;
- (_Bool)getVacationResponderEnabled;
- (_Bool)hasVacationResponderEnabled;
@end
