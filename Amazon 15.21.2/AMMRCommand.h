//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMAMraidBaseAdView, NSDictionary;

@interface AMMRCommand : NSObject
{
    AMAMraidBaseAdView *_view;
    NSDictionary *_parameters;
}

+ (id)commandForString:(id)arg1;
+ (Class)commandClassForString:(id)arg1;
+ (id)commandType;
+ (id)sharedCommandClassMap;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) __weak AMAMraidBaseAdView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)urlFromParameters:(id)arg1;
- (id)stringFromParametersForKey:(id)arg1;
- (int)intFromParametersForKey:(id)arg1;
- (_Bool)boolFromParametersForKey:(id)arg1;
- (double)floatFromParametersForKey:(id)arg1 withDefault:(double)arg2;
- (double)floatFromParametersForKey:(id)arg1;
- (_Bool)execute;

@end
