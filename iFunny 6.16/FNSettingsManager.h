//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FNSettingsManager : NSObject
{
    NSString *_countryCode;
    unsigned long long _countryType;
}

+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long countryType; // @synthesize countryType=_countryType;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) _Bool selected;
- (_Bool)isCountryBrazil;
- (_Bool)isCountryNotUS;
- (id)init;

@end
