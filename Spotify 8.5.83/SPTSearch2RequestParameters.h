//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString, NSURLComponents;

@interface SPTSearch2RequestParameters : NSObject <NSCopying>
{
    _Bool _onDemandSetsEnabled;
    _Bool _musicAndTalkEnabled;
    NSString *_query;
    NSString *_catalogue;
    NSArray *_entityTypes;
    NSString *_locale;
    NSDate *_timestamp;
    NSString *_requestId;
    unsigned long long _offset;
    unsigned long long _limit;
    unsigned long long _experience;
    NSString *_drilldownEntityType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool musicAndTalkEnabled; // @synthesize musicAndTalkEnabled=_musicAndTalkEnabled;
@property(nonatomic) _Bool onDemandSetsEnabled; // @synthesize onDemandSetsEnabled=_onDemandSetsEnabled;
@property(copy, nonatomic) NSString *drilldownEntityType; // @synthesize drilldownEntityType=_drilldownEntityType;
@property(nonatomic) unsigned long long experience; // @synthesize experience=_experience;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSArray *entityTypes; // @synthesize entityTypes=_entityTypes;
@property(copy, nonatomic) NSString *catalogue; // @synthesize catalogue=_catalogue;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)timestampMillisecondsString;
- (id)urlComponentsWithPathComponents:(id)arg1 queryParameters:(id)arg2;
- (id)searchURLComponents;
- (id)assistedCurationURLComponents;
- (_Bool)isEqualToSearchRequestParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURLComponents *urlComponents;
- (id)initWithQuery:(id)arg1 catalogue:(id)arg2 locale:(id)arg3 timestamp:(id)arg4 requestId:(id)arg5 experience:(unsigned long long)arg6 offset:(unsigned long long)arg7 limit:(unsigned long long)arg8 drilldownEntityType:(id)arg9 entityTypes:(id)arg10 onDemandSetsEnabled:(_Bool)arg11 musicAndTalkEnabled:(_Bool)arg12;

@end

