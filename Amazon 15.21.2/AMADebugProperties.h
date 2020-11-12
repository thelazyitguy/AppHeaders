//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUserDefaults;

@interface AMADebugProperties : NSObject
{
    NSUserDefaults *_defaults;
    NSDictionary *_debugPropertyDictionary;
}

+ (id)sharedAMADebugProperties;
@property(copy, nonatomic) NSDictionary *debugPropertyDictionary; // @synthesize debugPropertyDictionary=_debugPropertyDictionary;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void).cxx_destruct;
- (id)getAdvTargetingDictionaryWithDefault:(id)arg1;
- (_Bool)getDebugPropertyAsBoolForKey:(id)arg1 default:(_Bool)arg2;
- (long long)getDebugPropertyAsIntegerForKey:(id)arg1 default:(long long)arg2;
- (id)getDebugPropertyAsStringForKey:(id)arg1 default:(id)arg2;
- (void)clearDebugProperties;
- (void)persistDebugProperties:(id)arg1;
- (id)initWithDefaults:(id)arg1;
- (id)init;

@end
