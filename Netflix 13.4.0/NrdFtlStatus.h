//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface NrdFtlStatus : NSObject <NSCopying>
{
    long long _cell;
    NSString *_target;
    NSArray *_targetsSpecifier;
    NSString *_hostname;
    NSString *_session_id;
    NSString *_session_type;
    NSString *_via;
    unsigned long long _currentHostConsecutiveErrorCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentHostConsecutiveErrorCount; // @synthesize currentHostConsecutiveErrorCount=_currentHostConsecutiveErrorCount;
@property(retain, nonatomic) NSString *via; // @synthesize via=_via;
@property(retain, nonatomic) NSString *session_type; // @synthesize session_type=_session_type;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) NSArray *targetsSpecifier; // @synthesize targetsSpecifier=_targetsSpecifier;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(nonatomic) long long cell; // @synthesize cell=_cell;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)toDictionary;
- (id)init;

@end
