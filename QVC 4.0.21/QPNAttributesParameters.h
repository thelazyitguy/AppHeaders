//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPNAuthParameters.h"

@class NSMutableDictionary;

@interface QPNAttributesParameters : QPNAuthParameters
{
    _Bool _userAuthenticated;
    _Bool _forDataReceiving;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forDataReceiving; // @synthesize forDataReceiving=_forDataReceiving;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool userAuthenticated; // @synthesize userAuthenticated=_userAuthenticated;
- (id)description;
- (id)allAttributes;
- (void)addAttribute:(id)arg1 values:(id)arg2 requiringAuth:(_Bool)arg3;
- (void)addAuthAttribute:(id)arg1 values:(id)arg2;
- (void)addAttribute:(id)arg1 values:(id)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 requiringAuth:(_Bool)arg3;
- (void)addAuthAttribute:(id)arg1 value:(id)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (_Bool)requiresResponseData;
- (id)requestParameters;
- (id)requestData;
- (id)requestMethod;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameters:(id)arg1 andData:(id)arg2;
- (id)initWithQVCIDPartOne:(id)arg1 QVCIDPartTwo:(id)arg2 andAuthToken:(id)arg3 forDataReciving:(_Bool)arg4;
- (id)initWithQVCIDPartOne:(id)arg1 QVCIDPartTwo:(id)arg2 andAuthToken:(id)arg3;

@end
