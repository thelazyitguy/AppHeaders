//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/PHTPhenotypeFlag.h>

@class NSNumber;

@interface PHTPhenotypeNumberFlag : PHTPhenotypeFlag
{
    NSNumber *_defaultValue;
    NSNumber *_testOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *testOverride; // @synthesize testOverride=_testOverride;
@property(readonly, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSNumber *value;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 flags:(id)arg3;

@end

