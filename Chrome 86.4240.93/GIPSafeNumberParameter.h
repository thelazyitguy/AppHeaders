//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GIPSafeParameter.h>

@class NSNumber;

@interface GIPSafeNumberParameter : GIPSafeParameter
{
    NSNumber *_numberValue;
}

+ (id)parameterWithNumber:(id)arg1 type:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNumber:(id)arg1 type:(unsigned long long)arg2;

@end
